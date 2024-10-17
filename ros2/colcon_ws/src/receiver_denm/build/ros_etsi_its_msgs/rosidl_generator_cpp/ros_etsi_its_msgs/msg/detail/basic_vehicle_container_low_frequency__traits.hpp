// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/BasicVehicleContainerLowFrequency.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/basic_vehicle_container_low_frequency.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_low_frequency__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'vehicle_role'
#include "ros_etsi_its_msgs/msg/detail/vehicle_role__traits.hpp"
// Member 'exterior_lights'
#include "ros_etsi_its_msgs/msg/detail/exterior_lights__traits.hpp"
// Member 'path_history'
#include "ros_etsi_its_msgs/msg/detail/path_history__traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BasicVehicleContainerLowFrequency & msg,
  std::ostream & out)
{
  out << "{";
  // member: vehicle_role
  {
    out << "vehicle_role: ";
    to_flow_style_yaml(msg.vehicle_role, out);
    out << ", ";
  }

  // member: exterior_lights
  {
    out << "exterior_lights: ";
    to_flow_style_yaml(msg.exterior_lights, out);
    out << ", ";
  }

  // member: path_history
  {
    out << "path_history: ";
    to_flow_style_yaml(msg.path_history, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BasicVehicleContainerLowFrequency & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vehicle_role
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_role:\n";
    to_block_style_yaml(msg.vehicle_role, out, indentation + 2);
  }

  // member: exterior_lights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exterior_lights:\n";
    to_block_style_yaml(msg.exterior_lights, out, indentation + 2);
  }

  // member: path_history
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_history:\n";
    to_block_style_yaml(msg.path_history, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BasicVehicleContainerLowFrequency & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros_etsi_its_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_etsi_its_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency>()
{
  return "ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency>()
{
  return "ros_etsi_its_msgs/msg/BasicVehicleContainerLowFrequency";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency>
  : std::integral_constant<bool, has_fixed_size<ros_etsi_its_msgs::msg::ExteriorLights>::value && has_fixed_size<ros_etsi_its_msgs::msg::PathHistory>::value && has_fixed_size<ros_etsi_its_msgs::msg::VehicleRole>::value> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency>
  : std::integral_constant<bool, has_bounded_size<ros_etsi_its_msgs::msg::ExteriorLights>::value && has_bounded_size<ros_etsi_its_msgs::msg::PathHistory>::value && has_bounded_size<ros_etsi_its_msgs::msg::VehicleRole>::value> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY__TRAITS_HPP_
