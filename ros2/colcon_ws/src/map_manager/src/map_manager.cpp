#include "rclcpp/rclcpp.hpp"
#include "v2xvf_interfaces/msg/map_object.hpp"
#include "v2xvf_interfaces/msg/list_map_objects.hpp"
#include "memory"
#include "algorithm"
#include "iostream"
#include "cstdint"
#include "cstring"
#include "random"
#include "sensor_msgs/msg/nav_sat_fix.hpp"
#include "sensor_msgs/msg/nav_sat_status.hpp"
#include "boost/uuid/uuid.hpp"
#include "boost/uuid/uuid_generators.hpp"
#include "boost/uuid/uuid_io.hpp"
#include "rclcpp/logging.hpp"
#include "geometry_msgs/msg/point.hpp"

std::map<std::string, v2xvf_interfaces::msg::MapObject> map_objects;

void receiveObjects(const v2xvf_interfaces::msg::MapObject::SharedPtr msg)
{
    //RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Received MapObject with ID: %s", msg->id.c_str());
    map_objects[msg->id] = *msg; // In case we have more than one update for the same object
}

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<rclcpp::Node>("map_manager_node");
    
    // Declare and get the update frequency parameter
    node->declare_parameter<int>("update_frequency", 100);
    int rate = node->get_parameter("update_frequency").as_int();
    //RCLCPP_INFO(node->get_logger(), "Update frequency set to: %d Hz", rate);

    rclcpp::Rate r(rate);

    // Set up publisher and subscriber
    auto publisher_map_objects = node->create_publisher<v2xvf_interfaces::msg::ListMapObjects>("map_objects", 1000);
    auto sub = node->create_subscription<v2xvf_interfaces::msg::MapObject>("map_manager", 1000, receiveObjects);

    v2xvf_interfaces::msg::ListMapObjects list_map_object;
    std::vector<v2xvf_interfaces::msg::MapObject> list_objects;
    v2xvf_interfaces::msg::MapObject mapObject;

    // Initialize a dummy object with latitude, longitude, and other data
    mapObject.position.latitude = 48.766006;
    mapObject.position.longitude = 11.434759;
    mapObject.heading.value = 2300;
    mapObject.type = "VEHICLE";
    mapObject.source = "GPS_map_manager";

    boost::uuids::uuid uuid = boost::uuids::random_generator()();
    mapObject.id = boost::uuids::to_string(uuid);
    mapObject.expiration_time = 1; // in seconds

    list_objects.push_back(mapObject);
    list_map_object.list_objects = list_objects;

    // Log information about the initialized map object
    //RCLCPP_INFO(node->get_logger(), "Initialized MapObject with ID: %s", mapObject.id.c_str());

    while (rclcpp::ok()) {
        // Publish the map objects
        publisher_map_objects->publish(list_map_object);
        rclcpp::spin_some(node);

        // Check if we have received objects to publish
        if (!map_objects.empty()) {
            for (auto &obj : map_objects) {
                //RCLCPP_INFO(node->get_logger(), "Processing received object with ID: %s", obj.second.id.c_str());
                list_objects.push_back(obj.second);
            }

            list_map_object.list_objects = list_objects;
            publisher_map_objects->publish(list_map_object);

            // Log clearing the map and object list
            //RCLCPP_INFO(node->get_logger(), "Clearing processed objects.");
            
            // Clear the processed objects
            map_objects.clear();
            list_objects.clear();
        }

        // Sleep based on the defined rate
        r.sleep();
    }

    rclcpp::shutdown();
    return 0;
}
