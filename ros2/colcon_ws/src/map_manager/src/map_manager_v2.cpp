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
#include "geometry_msgs/msg/point.hpp"  // Include for Point message type

std::map<std::string, v2xvf_interfaces::msg::MapObject> map_objects;
geometry_msgs::msg::Point current_gps_coordinates; // Store latest GPS coordinates

void receiveGPSCoordinates(const geometry_msgs::msg::Point::SharedPtr msg)
{
    // Update current GPS coordinates
    current_gps_coordinates = *msg;
}

void receiveObjects(const v2xvf_interfaces::msg::MapObject::SharedPtr msg)
{
    map_objects[msg->id] = *msg; // In case we have more than one update for the same object
}

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<rclcpp::Node>("map_manager_node");
    node->declare_parameter<int>("update_frequency", 20);

    int rate = node->get_parameter("update_frequency").as_int();
    rclcpp::Rate r(rate);

    auto publisher_map_objects = node->create_publisher<v2xvf_interfaces::msg::ListMapObjects>("map_objects", 1000);
    auto sub = node->create_subscription<v2xvf_interfaces::msg::MapObject>("map_manager", 1000, receiveObjects);
    auto gps_sub = node->create_subscription<geometry_msgs::msg::Point>("/gps_coordinates", 1000, receiveGPSCoordinates); // New GPS subscriber

    v2xvf_interfaces::msg::ListMapObjects list_map_object;
    std::vector<v2xvf_interfaces::msg::MapObject> list_objects;

    while (rclcpp::ok()) {
        // Create a new MapObject only when we have valid GPS coordinates
        if (current_gps_coordinates.x != 0 && current_gps_coordinates.y != 0) { // Ensure valid GPS data
            v2xvf_interfaces::msg::MapObject mapObject;

            // Set position using GPS coordinates
            mapObject.position.latitude = current_gps_coordinates.x; // Latitude
            mapObject.position.longitude = current_gps_coordinates.y; // Longitude

            mapObject.heading.value = 10; // Example heading value
            mapObject.type = "PDK";
            mapObject.source = "GPS";

            boost::uuids::uuid uuid = boost::uuids::random_generator()();
            mapObject.id = boost::uuids::to_string(uuid);

            mapObject.expiration_time = 2; // in seconds

            list_objects.push_back(mapObject);

            list_map_object.list_objects = list_objects;

            publisher_map_objects->publish(list_map_object);

            // Clear the list for the next publish cycle
            list_objects.clear();
        }

        if (!map_objects.empty()) {
            for (auto obj : map_objects)
                list_objects.push_back(obj.second);

            list_map_object.list_objects = list_objects;

            publisher_map_objects->publish(list_map_object);

            // No need to keep the objects already transmitted once
            map_objects.clear();
        }

        r.sleep();
    }
}
