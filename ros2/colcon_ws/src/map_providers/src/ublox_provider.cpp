#include <rclcpp/rclcpp.hpp>
#include <algorithm>
#include <iostream>
#include <cstdint>
#include <cstring>
#include <random>
#include <sensor_msgs/msg/nav_sat_fix.hpp>
#include <sensor_msgs/msg/nav_sat_status.hpp>
#include "v2xvf_interfaces/msg/map_object.hpp"
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <geometry_msgs/msg/point.hpp>  // Include the geometry message
#include "ublox_provider.hpp"
#include "ros_etsi_its_msgs/msg/station_type.hpp"

UbloxReceiver::UbloxReceiver(const rclcpp::NodeOptions &options) : Node("ublox_provider_node", options)
{
    // Set up the publisher for MapObject
    m_publisher = this->create_publisher<v2xvf_interfaces::msg::MapObject>("map_manager", 10);

    // Set up the subscription for GPS coordinates (geometry_msgs::msg::Point)
    m_sub = this->create_subscription<geometry_msgs::msg::Point>(
        "gps_coordinates", 10, 
        [this](const geometry_msgs::msg::Point::SharedPtr gps_msg) {
            // Ensure GPS data is valid before processing
            if (gps_msg) {
                this->receiveGPSCoordinates(gps_msg);
            } else {
                RCLCPP_WARN(this->get_logger(), "Received an invalid GPS message!");
            }
        });

    // Generate a UUID for the Ublox receiver
    boost::uuids::uuid uuid = boost::uuids::random_generator()();
    m_id = boost::uuids::to_string(uuid);

    // Log that the node has been successfully initialized
    RCLCPP_INFO(this->get_logger(), "UbloxReceiver node initialized with UUID: %s", m_id.c_str());
}

// Callback function to receive GPS coordinates as geometry_msgs::msg::Point
void UbloxReceiver::receiveGPSCoordinates(const geometry_msgs::msg::Point::SharedPtr& gps_msg) {
    // Log entry into the function
    RCLCPP_INFO(this->get_logger(), "Received GPS coordinates: lat = %f, lon = %f, alt = %f", gps_msg->x, gps_msg->y, gps_msg->z);

    // Check if the coordinates are valid (basic check, modify as needed)
    if (gps_msg->x == 0 && gps_msg->y == 0) {
        RCLCPP_WARN(this->get_logger(), "Received invalid GPS coordinates: lat = 0, lon = 0. Skipping processing.");
        return;
    }

    // Match GPS point to Mobileye reference point
    double refPointLat = gps_msg->x; // Convert micro to degree
    double refPointLon = gps_msg->y; // Convert micro to degree
    double vehicleHeadingDegree = 0; // Placeholder for vehicle heading (can be modified later)

    // Log the details of the GPS data
    RCLCPP_DEBUG(this->get_logger(), "Reference Point: lat = %f, lon = %f", refPointLat, refPointLon);

    // Call to generate map marker
    //generateMapMarker(refPointLat, refPointLon, vehicleHeadingDegree, 1, "GPS-S", 2, 3);
    // Publishing
    v2xvf_interfaces::msg::MapObject marker;
    marker.position.latitude = refPointLat * 10000000;
    marker.position.longitude = refPointLon * 10000000;
    marker.heading.value = vehicleHeadingDegree * 10;
    marker.type = "MOTORCYCLE";
    

    // Log the generated marker type
    RCLCPP_INFO(this->get_logger(), "Generated marker type: %s", marker.type.c_str());

    marker.source = "GPS_from_ublox";
    marker.source_id = 123;
    marker.expiration_time = 1.0;
    marker.id = m_id;


    // Publish the marker
    m_publisher->publish(marker);

    // Log the marker publishing event
    RCLCPP_INFO(this->get_logger(), "Published MapObject with ID: %s", marker.id.c_str());
}



// void UbloxReceiver::generateMapMarker(double objectLatDegree, double objectLonDegree, double vehicleHeadingDegree,
//         uint8_t type, std::string source, uint32_t stationId, uint32_t objectId) {

//     // Log entry into the function
//     RCLCPP_INFO(this->get_logger(), "Generating map marker for object: lat = %f, lon = %f, heading = %f", 
//                 objectLatDegree, objectLonDegree, vehicleHeadingDegree);

//     // Publishing
//     v2xvf_interfaces::msg::MapObject marker;
//     marker.position.latitude = objectLatDegree * 10000000;
//     marker.position.longitude = objectLonDegree * 10000000;
//     marker.heading.value = vehicleHeadingDegree * 10;

//     // Define object type
//     switch (type){
//         case ros_etsi_its_msgs::msg::StationType::PASSENGER_CAR:
//             marker.type = "VEHICLE";
//             break ;
//         case ros_etsi_its_msgs::msg::StationType::LIGHT_TRUCK:
//             marker.type = "TRUCK";
//             break;
//         case ros_etsi_its_msgs::msg::StationType::HEAVY_TRUCK:
//             marker.type = "TRUCK";
//             break;
//         case ros_etsi_its_msgs::msg::StationType::MOTORCYCLE:
//             marker.type = "MOTORCYCLE";
//             break;
//         case ros_etsi_its_msgs::msg::StationType::PEDESTRIAN:
//             marker.type = "MOTORCYCLE";
//             break;
//         case ros_etsi_its_msgs::msg::StationType::CYCLIST:
//             marker.type = "CYCLIST";
//             break;
//         case ros_etsi_its_msgs::msg::StationType::ROAD_SIDE_UNIT:
//             marker.type = "RSU";
//             break;
//         case ros_etsi_its_msgs::msg::StationType::MOPED:
//             marker.type = "PDK";
//             break;
//         case ros_etsi_its_msgs::msg::StationType::SPECIAL_VEHICLE:
//             marker.type = "Level0";
//             break;
//         case ros_etsi_its_msgs::msg::StationType::TRAM:
//             marker.type = "Level1";
//             break;
//         case ros_etsi_its_msgs::msg::StationType::TRAILER:
//             marker.type = "Level2";
//             break;
//         case ros_etsi_its_msgs::msg::StationType::BUS:
//             marker.type = "Level3";
//             break;            
//         default:
//             marker.type = "UNKNOWN";
//     }

    
// }
