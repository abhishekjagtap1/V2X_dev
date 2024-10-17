/*****************************************************************/ /**
  * \file   cpm_receiver.cpp
  * \brief
  * ROS2 version of CPM reciever 
  * Pre-requisite - Host PC should be in a similar network where cohda can send facility layer messages to external pc via UDP port - This is set in cohda SDK #define UDP_PORT_CPM_TX 30102 at udp_ports.h file
  * Right now the SDK is configured to send facility layer messages to host PC that has IP - 192.168.111.110 -> raw.its.c file reference
  * Configure SDK or Binary from cohda to  Alfonso network - Refer heavily documented file raw.its.c -> This is pending
  * Tested the CPM receiver on Local PC environment
  * Heavily borrowed code from Chethan 
  
  * Known Issues - Message ID is set to zero either when sending CPM from Mast of while decoding CPM in the host PC -> Needs Immediate Action -> Fixed on Sept 12
  * Testing - Confirm and test if the object positions are acurate in V2X Visualization Framework

  * Command to run this node -> ros2 launch cohda_v2x cpm_rx_launch.py

  * \author Abhishek Dinkar Jagtap
  * \date   September 2024
 ***********************************************************************/

#include <rclcpp/rclcpp.hpp>
#include <iostream>
#include <cstring>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include "all_interface_generated.h" // FlatBuffers generated header
// Adjust for ROS2 message type
#include "ros_etsi_its_msgs/msg/cpm.hpp"

using namespace Gos;
#define UDP_PORT_CPM_TX 30102
#define BUFFER_SIZE 4096

class CPMReceiverNode : public rclcpp::Node {
public:
    CPMReceiverNode()
        : Node("cpm_receive_node")
    {
        // Create the publisher for the CPM message
        pub_cpm_ = this->create_publisher<ros_etsi_its_msgs::msg::CPM>("cpm_received", 20);
        
        // Start decoding CPM data from UDP
        decode_received_cpm();
    }

private:
    rclcpp::Publisher<ros_etsi_its_msgs::msg::CPM>::SharedPtr pub_cpm_;

    void decode_received_cpm() {
        int sockfd;
        struct sockaddr_in server_addr, client_addr;
        uint8_t buffer[BUFFER_SIZE];
        
        // Create a UDP socket
        if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1) {
            perror("socket");
            exit(1);
        }
        
        // Configure server address
        server_addr.sin_family = AF_INET;
        server_addr.sin_port = htons(UDP_PORT_CPM_TX);
        server_addr.sin_addr.s_addr = htonl(INADDR_ANY);

        // Bind the socket to the server address
        if (bind(sockfd, (struct sockaddr*)&server_addr, sizeof(server_addr)) == -1) {
            perror("bind");
            exit(1);
        }

        while (rclcpp::ok()) {
            // Receive the message from the client
            socklen_t client_addr_len = sizeof(client_addr);
            ssize_t received_bytes = recvfrom(sockfd, buffer, BUFFER_SIZE, 0, (struct sockaddr*)&client_addr, &client_addr_len);
            if (received_bytes == -1) {
                perror("recvfrom");
                exit(1);
            }

            RCLCPP_INFO(this->get_logger(), "Client address: %d received port: %d", client_addr.sin_addr.s_addr, client_addr.sin_port);
            RCLCPP_INFO(this->get_logger(), "------------------------------------------------------------------");
            RCLCPP_INFO(this->get_logger(), "Received message from client:");

            auto msg = std::make_shared<ros_etsi_its_msgs::msg::CPM>();
            flatbuffers::FlatBufferBuilder builder;

            if (received_bytes > 150) {
                auto gossip = GetGossipMessage(buffer);
                auto gossip_type = gossip->gossip_type();

                if (gossip_type == GossipType_FacilityLayerReception) {
                    auto fac_rx = static_cast<const FacilityLayerReception*>(gossip->gossip());

                    RCLCPP_INFO(this->get_logger(), "Received a facility layer reception message");

                    auto union_msg = fac_rx->msg_type();

                    if (union_msg == FacilityLayerMessage_CAMessage) {
                        RCLCPP_INFO(this->get_logger(), "Received a CAM");
                    }
                    else if (union_msg == FacilityLayerMessage_CPMessage) {
                        RCLCPP_INFO(this->get_logger(), "Received a CPM");
                        auto cpm = static_cast<const CPMessage*>(fac_rx->msg());

                        // Decoding ITS header
                        const Gos::ItsPduHeader* header = cpm->header();
                        msg->header.stamp = this->now();
                        msg->its_header.protocol_version = header->protocol_version();
                        msg->its_header.station_id = header->station_id();
                        msg->its_header.message_id = header->message_id();
                        RCLCPP_INFO(this->get_logger(), "Station id: %u", msg->its_header.station_id);
                        RCLCPP_INFO(this->get_logger(), "--------------------------------------------------------------------------------------Message id: %u", msg->its_header.message_id);

                        msg->generation_delta_time = cpm->generation_delta_time();
                        RCLCPP_INFO(this->get_logger(), "generation_delta_time: %u", msg->generation_delta_time);

                        const Gos::ManagementContainer* mngmt_cntr = cpm->mgmt_container();
                        RCLCPP_INFO(this->get_logger(), "reference management container info:");

                        const Gos::ReferencePosition* ref_pos = mngmt_cntr->reference_position();
                        msg->station_type.value = mngmt_cntr->station_type();
                        RCLCPP_INFO(this->get_logger(), "station type: %u", msg->station_type.value);

                        msg->reference_position.altitude.value = ref_pos->altitude()->value();
                        msg->reference_position.altitude.confidence = ref_pos->altitude()->confidence();
                        msg->reference_position.latitude = ref_pos->latitude();
                        msg->reference_position.longitude = ref_pos->longitude();
                        msg->reference_position.position_confidence.semi_major_confidence = ref_pos->position_confidence()->semi_major_confidence();
                        msg->reference_position.position_confidence.semi_minor_confidence = ref_pos->position_confidence()->semi_minor_confidence();
                        msg->reference_position.position_confidence.semi_major_orientation = ref_pos->position_confidence()->semi_major_orientation();


                        RCLCPP_INFO(this->get_logger(), "------------------------------------------------------------------------Reference Postion semi_major_confidence: %u", msg->reference_position.position_confidence.semi_minor_confidence);
                        

                        //RCLCPP_INFO(this->get_logger(), "reference position of the sending vehicle: lat = %f, long = %f", 
                          //          msg->reference_position.latitude, msg->reference_position.longitude);

                        const Gos::CpmPayload* c_payload = cpm->cpm_payload();
                        
                        // Sensor Information Handling
                        msg->sensor_information_container.sensors_information = std::vector<ros_etsi_its_msgs::msg::SensorInformation>();

                        const Gos::SensorInformationContainer* sensr_info_cntnr = c_payload->sensor_information_container();
                        if (sensr_info_cntnr) {
                            auto snsr_obj_list = sensr_info_cntnr->sensor_information();

                            for (auto snsr_obj : *snsr_obj_list) {
                                ros_etsi_its_msgs::msg::SensorInformation ros_snsr_obj;
                                ros_snsr_obj.sensor_id = snsr_obj->sensor_id();
                                ros_snsr_obj.type = static_cast<int8_t>(snsr_obj->sensor_type());

                                msg->has_sensor_information_container = true;
                                msg->sensor_information_container.sensors_information.push_back(ros_snsr_obj);
                            }
                        } else {
                            msg->has_sensor_information_container = false;
                        }

                        // Perceived Object Handling
                        const Gos::PerceivedObjectContainer* pr_obj_cntr = c_payload->perceived_object_container();
                        if (pr_obj_cntr) {
                            auto num_objs = pr_obj_cntr->number_of_perceived_objects();
                            RCLCPP_INFO(this->get_logger(), "number of perceived objects: %u", num_objs);

                            if (num_objs > 0) {
                                msg->has_list_of_perceived_object = true;
                                msg->number_of_perceived_objects = num_objs;
                                msg->list_of_perceived_objects.perceived_object_container = std::vector<ros_etsi_its_msgs::msg::PerceivedObject>();

                                for (auto obj : *pr_obj_cntr->perceived_objects()) {
                                    ros_etsi_its_msgs::msg::PerceivedObject ros_obj;

                                    ros_obj.object_id = obj->object_id();
                                    ros_obj.time_of_measurement = obj->measurement_delta_time();

                                    // Assign data for position, velocity, dimensions, etc.
                                                                    //object position
                                    const Gos::CartesianPosition3dWithConfidence * pos = obj->position();
                                    using cart_coord = const Gos::CartesianCoordinateWithConfidence;
                                    cart_coord* x_cord = pos->x_cord();
                                    cart_coord* y_cord = pos->y_cord();
                                    cart_coord* z_cord = pos->z_cord();
                                    std::cout << "Object positon: x: " << x_cord->value() << ", y: " <<  y_cord->value() << ", z: " << z_cord->value() << std::endl;

                                    ros_obj.x_distance.value = x_cord->value() / 100;
                                    ros_obj.x_distance.confidence = x_cord->confidence();
                                    ros_obj.y_distance.value = y_cord->value() / 100;
                                    ros_obj.y_distance.confidence = y_cord->confidence();
                                    ros_obj.z_distance.value = z_cord->value();
                                    ros_obj.z_distance.confidence = z_cord->confidence();                 

                                    //object velocity
                                    const Gos::Velocity3dWithConfidence *vel = obj->velocity();

                                    const Gos::VelocityPolarWithZ *pol_vel = vel->polar_velocity();
                                    const Gos::Speed *vel_mag = pol_vel->velocity_magnitude();
                                    std::cout << "VelocityPolarWithZ - speed: value= " << vel_mag->value() << ", conf = " << vel_mag->confidence() << std::endl;
                                    const Gos::CartesianAngle *vel_dirct = pol_vel->velocity_direction();
                                    std::cout << "VelocityPolarWithZ - direction: value = " << vel_dirct->cartesian_value() << ", conf = " << vel_dirct->cartesian_angle_confidence() << std::endl;
                                    const Gos::VelocityComponent *pol_z_vel = pol_vel->z_velocity();
                                    std::cout << "VelocityPolarWithZ - Z component: value= " << pol_z_vel->vel_comp_value() << ", conf = " << pol_z_vel->speed_confidence() << std::endl;

                                    const Gos::VelocityCartesian *cart_vel = vel->cartesian_velocity();
                                    const Gos::VelocityComponent *x_vel = cart_vel->x_velocity();
                                    const Gos::VelocityComponent *y_vel = cart_vel->y_velocity();
                                    const Gos::VelocityComponent *z_vel = cart_vel->z_velocity();
                                    std::cout << "Object Cartesian velocity (value, confidence): x- " << x_vel->vel_comp_value() <<", "<<  x_vel->speed_confidence() 
                                                                                        << ", y- " << y_vel->vel_comp_value()<<", "<< y_vel->speed_confidence() 
                                                                                        << ", z-" << z_vel->vel_comp_value()<<", "<< z_vel->speed_confidence() << std::endl;

                                    ros_obj.x_speed.value = vel_mag->value();
                                    ros_obj.x_speed.confidence = vel_mag->confidence();
                                    ros_obj.y_speed.value = vel_dirct->cartesian_value();
                                    ros_obj.y_speed.confidence = vel_dirct->cartesian_angle_confidence();
                                    ros_obj.z_speed.value = pol_z_vel->vel_comp_value();
                                    ros_obj.z_speed.confidence = pol_z_vel->speed_confidence();


                                    //@todo == check whether the assignment is true or not? Velocity component to accelaration?
                                    ros_obj.x_acceleration.value = x_vel->vel_comp_value();
                                    ros_obj.x_acceleration.confidence = x_vel->speed_confidence();
                                    ros_obj.y_acceleration.value = y_vel->vel_comp_value();
                                    ros_obj.y_acceleration.confidence = y_vel->speed_confidence();


                                    //object dimensions
                                    using obj_dim = const Gos::ObjectDimension;
                                    obj_dim* z_dim = obj->object_dimension_z();
                                    obj_dim* y_dim = obj->object_dimension_y();
                                    obj_dim* x_dim = obj->object_dimension_x();

                                    std::cout << "Object dimensions:(value, confidence): x- " << x_dim->value() <<", "<<  x_dim->confidence() 
                                                                                << ", y- " << y_dim->value()<<", "<< y_dim->confidence() 
                                                                                << ", z-" << z_dim->value()<<", "<< z_dim->confidence() << std::endl;

                                    ros_obj.planar_object_dimension1.value = x_dim->value();
                                    ros_obj.planar_object_dimension1.confidence = x_dim->confidence();
                                    ros_obj.planar_object_dimension2.value = y_dim->value();
                                    ros_obj.planar_object_dimension2.confidence = y_dim->confidence();
                                    ros_obj.vertical_object_dimension.value = z_dim->value();
                                    ros_obj.vertical_object_dimension.confidence = z_dim->confidence();

                                    //object age
                                    std::cout << "object age: " << obj->object_age() << std::endl;
                                    ros_obj.object_age = obj->object_age();

                                    auto obj_classifications_list = obj->classification();
                                    std::cout << "classification list count: " << obj_classifications_list->size() << std::endl;

                                    for(auto obj_cls : *obj_classifications_list){
                                        const Gos::ObjectClass *obj_class = obj_cls->object_class();
                                        std::cout << "vehicle subclass: " << static_cast<int32_t>(obj_class->vehicle_sub_class()) << std::endl;
                                        std::cout << "object class confidence: " << obj_cls->confidence() << std::endl;

                                        ros_obj.classification.value  = obj_class->vehicle_sub_class();
                                        //ros_obj.classification.confidence  = obj_cls->confidence(); //@todo -- no confidence field

                                        break; //@todo = remove this break, when the changes are made to receive list of classifications

                                    }   


                                    //map position
                                    const Gos::MapPosition *map_pos = obj->map_position();
                                    const Gos::MapReference *m_ref = map_pos->map_reference();
                                    const Gos::RoadSegmentReferenceID *rd_seg = m_ref->road_segment();
                                    //std::cout << "MapPosition/roadseg: region = " << rd_seg->region()<< ", id: "<< rd_seg->id() << std::endl;
                                    const Gos::IntersectionReferenceID *intrsctn_id = m_ref->intersection();
                                    //std::cout << "MapPosition/intersection: region = " << intrsctn_id->region()<< ", id: "<< intrsctn_id->id() << std::endl;


                                    //std::cout << "lane id: ", map_pos->lane_id();
                                    //std::cout << "conn id: ", map_pos->connection_id();
                                    const Gos::LongitudinalLanePosition *long_lane_pos = map_pos->longitudinal_lane_position();
                                    //std::cout << "LongitudinalLanePosition - value= " << long_lane_pos->longitudinal_lane_position_value() << ", conf = " << long_lane_pos->longitudinal_lane_position_confidence() << std::endl;

                                    ros_obj.matched_position.lane_id = map_pos->lane_id();
                                    //@todo -- update the etsi_its_msgs::CPM with the relevant fields.
                                        

                                    msg->list_of_perceived_objects.perceived_object_container.push_back(ros_obj);
                                }
                            } else {
                                msg->has_list_of_perceived_object = false;
                            }
                        } else {
                            msg->has_list_of_perceived_object = false;
                        }
                    }
                }

                if (msg) {
                    pub_cpm_->publish(*msg);
                } else {
                    RCLCPP_WARN(this->get_logger(), "Dropping the received CPM packet");
                }
            }
        }
    }
};

int main(int argc, char** argv)
{
    // Initialize the ROS2 system
    rclcpp::init(argc, argv);

    // Create the CPMReceiverNode
    auto node = std::make_shared<CPMReceiverNode>();

    // Run the node (block until shutdown)
    rclcpp::spin(node);

    // Shutdown ROS2
    rclcpp::shutdown();

    return 0;
}
