#ifndef UBLOX_PROVIDER_HPP
#define UBLOX_PROVIDER_HPP

#include <rclcpp/rclcpp.hpp>
#include <string>
#include <sensor_msgs/msg/nav_sat_fix.hpp>
#include <sensor_msgs/msg/nav_sat_status.hpp>
#include "v2xvf_interfaces/msg/map_object.hpp"
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <geometry_msgs/msg/point.hpp>  // Include for geometry message
#include <map>

class UbloxReceiver : public rclcpp::Node
{
public:
    // Constructor
    UbloxReceiver(const rclcpp::NodeOptions &options);

    // Callback function to receive GPS coordinates as geometry_msgs::msg::Point
    void receiveGPSCoordinates(const geometry_msgs::msg::Point::SharedPtr& gps_msg);
    void generateMapMarker(double objectLatDegree, double objectLonDegree, double vehicleHeadingDegree,
                           uint8_t type, std::string source, uint32_t stationId, uint32_t objectId);


private:
    // Publisher for MapObject messages
    rclcpp::Publisher<v2xvf_interfaces::msg::MapObject>::SharedPtr m_publisher;

    // Subscriber for GPS coordinates (geometry_msgs::msg::Point)
    rclcpp::Subscription<geometry_msgs::msg::Point>::SharedPtr m_sub;

    // Map to store UUIDs for previously received data
    std::map<uint32_t, std::string> m_cpms_received;

    // Unique ID for the UbloxReceiver instance
    std::string m_id;
};

#endif  // UBLOX_PROVIDER_HPP
