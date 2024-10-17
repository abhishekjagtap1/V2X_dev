// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/OriginatingVehicleContainer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/originating_vehicle_container.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__ORIGINATING_VEHICLE_CONTAINER__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__ORIGINATING_VEHICLE_CONTAINER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/originating_vehicle_container__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'heading'
#include "ros_etsi_its_msgs/msg/detail/heading__traits.hpp"
// Member 'speed'
#include "ros_etsi_its_msgs/msg/detail/speed__traits.hpp"
// Member 'vehicle_orientation_angle'
#include "ros_etsi_its_msgs/msg/detail/wgs84_angle__traits.hpp"
// Member 'drive_direction'
#include "ros_etsi_its_msgs/msg/detail/drive_direction__traits.hpp"
// Member 'vehicle_length'
#include "ros_etsi_its_msgs/msg/detail/vehicle_length__traits.hpp"
// Member 'vehicle_width'
#include "ros_etsi_its_msgs/msg/detail/vehicle_width__traits.hpp"
// Member 'longitudinal_acceleration'
#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__traits.hpp"
// Member 'yaw_rate'
#include "ros_etsi_its_msgs/msg/detail/yaw_rate__traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OriginatingVehicleContainer & msg,
  std::ostream & out)
{
  out << "{";
  // member: heading
  {
    out << "heading: ";
    to_flow_style_yaml(msg.heading, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    to_flow_style_yaml(msg.speed, out);
    out << ", ";
  }

  // member: has_vehicle_orientation_angle
  {
    out << "has_vehicle_orientation_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.has_vehicle_orientation_angle, out);
    out << ", ";
  }

  // member: vehicle_orientation_angle
  {
    out << "vehicle_orientation_angle: ";
    to_flow_style_yaml(msg.vehicle_orientation_angle, out);
    out << ", ";
  }

  // member: drive_direction
  {
    out << "drive_direction: ";
    to_flow_style_yaml(msg.drive_direction, out);
    out << ", ";
  }

  // member: has_vehicle_length
  {
    out << "has_vehicle_length: ";
    rosidl_generator_traits::value_to_yaml(msg.has_vehicle_length, out);
    out << ", ";
  }

  // member: vehicle_length
  {
    out << "vehicle_length: ";
    to_flow_style_yaml(msg.vehicle_length, out);
    out << ", ";
  }

  // member: has_vehicle_width
  {
    out << "has_vehicle_width: ";
    rosidl_generator_traits::value_to_yaml(msg.has_vehicle_width, out);
    out << ", ";
  }

  // member: vehicle_width
  {
    out << "vehicle_width: ";
    to_flow_style_yaml(msg.vehicle_width, out);
    out << ", ";
  }

  // member: has_vehicle_height
  {
    out << "has_vehicle_height: ";
    rosidl_generator_traits::value_to_yaml(msg.has_vehicle_height, out);
    out << ", ";
  }

  // member: vehicle_height
  {
    out << "vehicle_height: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_height, out);
    out << ", ";
  }

  // member: has_longitudinal_acceleration
  {
    out << "has_longitudinal_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.has_longitudinal_acceleration, out);
    out << ", ";
  }

  // member: longitudinal_acceleration
  {
    out << "longitudinal_acceleration: ";
    to_flow_style_yaml(msg.longitudinal_acceleration, out);
    out << ", ";
  }

  // member: has_yaw_rate
  {
    out << "has_yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.has_yaw_rate, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    to_flow_style_yaml(msg.yaw_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OriginatingVehicleContainer & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading:\n";
    to_block_style_yaml(msg.heading, out, indentation + 2);
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed:\n";
    to_block_style_yaml(msg.speed, out, indentation + 2);
  }

  // member: has_vehicle_orientation_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_vehicle_orientation_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.has_vehicle_orientation_angle, out);
    out << "\n";
  }

  // member: vehicle_orientation_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_orientation_angle:\n";
    to_block_style_yaml(msg.vehicle_orientation_angle, out, indentation + 2);
  }

  // member: drive_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drive_direction:\n";
    to_block_style_yaml(msg.drive_direction, out, indentation + 2);
  }

  // member: has_vehicle_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_vehicle_length: ";
    rosidl_generator_traits::value_to_yaml(msg.has_vehicle_length, out);
    out << "\n";
  }

  // member: vehicle_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_length:\n";
    to_block_style_yaml(msg.vehicle_length, out, indentation + 2);
  }

  // member: has_vehicle_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_vehicle_width: ";
    rosidl_generator_traits::value_to_yaml(msg.has_vehicle_width, out);
    out << "\n";
  }

  // member: vehicle_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_width:\n";
    to_block_style_yaml(msg.vehicle_width, out, indentation + 2);
  }

  // member: has_vehicle_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_vehicle_height: ";
    rosidl_generator_traits::value_to_yaml(msg.has_vehicle_height, out);
    out << "\n";
  }

  // member: vehicle_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_height: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_height, out);
    out << "\n";
  }

  // member: has_longitudinal_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_longitudinal_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.has_longitudinal_acceleration, out);
    out << "\n";
  }

  // member: longitudinal_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_acceleration:\n";
    to_block_style_yaml(msg.longitudinal_acceleration, out, indentation + 2);
  }

  // member: has_yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.has_yaw_rate, out);
    out << "\n";
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate:\n";
    to_block_style_yaml(msg.yaw_rate, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OriginatingVehicleContainer & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::OriginatingVehicleContainer & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::OriginatingVehicleContainer & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::OriginatingVehicleContainer>()
{
  return "ros_etsi_its_msgs::msg::OriginatingVehicleContainer";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::OriginatingVehicleContainer>()
{
  return "ros_etsi_its_msgs/msg/OriginatingVehicleContainer";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::OriginatingVehicleContainer>
  : std::integral_constant<bool, has_fixed_size<ros_etsi_its_msgs::msg::DriveDirection>::value && has_fixed_size<ros_etsi_its_msgs::msg::Heading>::value && has_fixed_size<ros_etsi_its_msgs::msg::LongitudinalAcceleration>::value && has_fixed_size<ros_etsi_its_msgs::msg::Speed>::value && has_fixed_size<ros_etsi_its_msgs::msg::VehicleLength>::value && has_fixed_size<ros_etsi_its_msgs::msg::VehicleWidth>::value && has_fixed_size<ros_etsi_its_msgs::msg::WGS84Angle>::value && has_fixed_size<ros_etsi_its_msgs::msg::YawRate>::value> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::OriginatingVehicleContainer>
  : std::integral_constant<bool, has_bounded_size<ros_etsi_its_msgs::msg::DriveDirection>::value && has_bounded_size<ros_etsi_its_msgs::msg::Heading>::value && has_bounded_size<ros_etsi_its_msgs::msg::LongitudinalAcceleration>::value && has_bounded_size<ros_etsi_its_msgs::msg::Speed>::value && has_bounded_size<ros_etsi_its_msgs::msg::VehicleLength>::value && has_bounded_size<ros_etsi_its_msgs::msg::VehicleWidth>::value && has_bounded_size<ros_etsi_its_msgs::msg::WGS84Angle>::value && has_bounded_size<ros_etsi_its_msgs::msg::YawRate>::value> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::OriginatingVehicleContainer>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__ORIGINATING_VEHICLE_CONTAINER__TRAITS_HPP_
