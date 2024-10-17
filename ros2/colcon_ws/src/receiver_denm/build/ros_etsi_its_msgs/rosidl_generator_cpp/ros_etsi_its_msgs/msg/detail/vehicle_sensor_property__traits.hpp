// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/VehicleSensorProperty.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/vehicle_sensor_property.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR_PROPERTY__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR_PROPERTY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor_property__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleSensorProperty & msg,
  std::ostream & out)
{
  out << "{";
  // member: range
  {
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << ", ";
  }

  // member: horizontal_opening_angle_start
  {
    out << "horizontal_opening_angle_start: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_opening_angle_start, out);
    out << ", ";
  }

  // member: horizontal_opening_angle_end
  {
    out << "horizontal_opening_angle_end: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_opening_angle_end, out);
    out << ", ";
  }

  // member: has_vertical_opening_angle_start
  {
    out << "has_vertical_opening_angle_start: ";
    rosidl_generator_traits::value_to_yaml(msg.has_vertical_opening_angle_start, out);
    out << ", ";
  }

  // member: vertical_opening_angle_start
  {
    out << "vertical_opening_angle_start: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_opening_angle_start, out);
    out << ", ";
  }

  // member: has_vertical_opening_angle_end
  {
    out << "has_vertical_opening_angle_end: ";
    rosidl_generator_traits::value_to_yaml(msg.has_vertical_opening_angle_end, out);
    out << ", ";
  }

  // member: vertical_opening_angle_end
  {
    out << "vertical_opening_angle_end: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_opening_angle_end, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleSensorProperty & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << "\n";
  }

  // member: horizontal_opening_angle_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_opening_angle_start: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_opening_angle_start, out);
    out << "\n";
  }

  // member: horizontal_opening_angle_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_opening_angle_end: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_opening_angle_end, out);
    out << "\n";
  }

  // member: has_vertical_opening_angle_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_vertical_opening_angle_start: ";
    rosidl_generator_traits::value_to_yaml(msg.has_vertical_opening_angle_start, out);
    out << "\n";
  }

  // member: vertical_opening_angle_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_opening_angle_start: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_opening_angle_start, out);
    out << "\n";
  }

  // member: has_vertical_opening_angle_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_vertical_opening_angle_end: ";
    rosidl_generator_traits::value_to_yaml(msg.has_vertical_opening_angle_end, out);
    out << "\n";
  }

  // member: vertical_opening_angle_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_opening_angle_end: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_opening_angle_end, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleSensorProperty & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::VehicleSensorProperty & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::VehicleSensorProperty & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::VehicleSensorProperty>()
{
  return "ros_etsi_its_msgs::msg::VehicleSensorProperty";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::VehicleSensorProperty>()
{
  return "ros_etsi_its_msgs/msg/VehicleSensorProperty";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::VehicleSensorProperty>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::VehicleSensorProperty>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::VehicleSensorProperty>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR_PROPERTY__TRAITS_HPP_
