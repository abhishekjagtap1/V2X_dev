// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/BasicVehicleContainerHighFrequency.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/basic_vehicle_container_high_frequency.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_HIGH_FREQUENCY__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_HIGH_FREQUENCY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_high_frequency__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'heading'
#include "ros_etsi_its_msgs/msg/detail/heading__traits.hpp"
// Member 'speed'
#include "ros_etsi_its_msgs/msg/detail/speed__traits.hpp"
// Member 'drive_direction'
#include "ros_etsi_its_msgs/msg/detail/drive_direction__traits.hpp"
// Member 'vehicle_length'
#include "ros_etsi_its_msgs/msg/detail/vehicle_length__traits.hpp"
// Member 'vehicle_width'
#include "ros_etsi_its_msgs/msg/detail/vehicle_width__traits.hpp"
// Member 'longitudinal_acceleration'
#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__traits.hpp"
// Member 'curvature'
#include "ros_etsi_its_msgs/msg/detail/curvature__traits.hpp"
// Member 'curvature_calculation_mode'
#include "ros_etsi_its_msgs/msg/detail/curvature_calculation_mode__traits.hpp"
// Member 'yaw_rate'
#include "ros_etsi_its_msgs/msg/detail/yaw_rate__traits.hpp"
// Member 'acceleration_control'
#include "ros_etsi_its_msgs/msg/detail/acceleration_control__traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BasicVehicleContainerHighFrequency & msg,
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

  // member: drive_direction
  {
    out << "drive_direction: ";
    to_flow_style_yaml(msg.drive_direction, out);
    out << ", ";
  }

  // member: vehicle_length
  {
    out << "vehicle_length: ";
    to_flow_style_yaml(msg.vehicle_length, out);
    out << ", ";
  }

  // member: vehicle_width
  {
    out << "vehicle_width: ";
    to_flow_style_yaml(msg.vehicle_width, out);
    out << ", ";
  }

  // member: longitudinal_acceleration
  {
    out << "longitudinal_acceleration: ";
    to_flow_style_yaml(msg.longitudinal_acceleration, out);
    out << ", ";
  }

  // member: curvature
  {
    out << "curvature: ";
    to_flow_style_yaml(msg.curvature, out);
    out << ", ";
  }

  // member: curvature_calculation_mode
  {
    out << "curvature_calculation_mode: ";
    to_flow_style_yaml(msg.curvature_calculation_mode, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    to_flow_style_yaml(msg.yaw_rate, out);
    out << ", ";
  }

  // member: has_acceleration_control
  {
    out << "has_acceleration_control: ";
    rosidl_generator_traits::value_to_yaml(msg.has_acceleration_control, out);
    out << ", ";
  }

  // member: acceleration_control
  {
    out << "acceleration_control: ";
    to_flow_style_yaml(msg.acceleration_control, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BasicVehicleContainerHighFrequency & msg,
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

  // member: drive_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drive_direction:\n";
    to_block_style_yaml(msg.drive_direction, out, indentation + 2);
  }

  // member: vehicle_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_length:\n";
    to_block_style_yaml(msg.vehicle_length, out, indentation + 2);
  }

  // member: vehicle_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_width:\n";
    to_block_style_yaml(msg.vehicle_width, out, indentation + 2);
  }

  // member: longitudinal_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_acceleration:\n";
    to_block_style_yaml(msg.longitudinal_acceleration, out, indentation + 2);
  }

  // member: curvature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curvature:\n";
    to_block_style_yaml(msg.curvature, out, indentation + 2);
  }

  // member: curvature_calculation_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curvature_calculation_mode:\n";
    to_block_style_yaml(msg.curvature_calculation_mode, out, indentation + 2);
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate:\n";
    to_block_style_yaml(msg.yaw_rate, out, indentation + 2);
  }

  // member: has_acceleration_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_acceleration_control: ";
    rosidl_generator_traits::value_to_yaml(msg.has_acceleration_control, out);
    out << "\n";
  }

  // member: acceleration_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_control:\n";
    to_block_style_yaml(msg.acceleration_control, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BasicVehicleContainerHighFrequency & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency>()
{
  return "ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency>()
{
  return "ros_etsi_its_msgs/msg/BasicVehicleContainerHighFrequency";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency>
  : std::integral_constant<bool, has_fixed_size<ros_etsi_its_msgs::msg::AccelerationControl>::value && has_fixed_size<ros_etsi_its_msgs::msg::Curvature>::value && has_fixed_size<ros_etsi_its_msgs::msg::CurvatureCalculationMode>::value && has_fixed_size<ros_etsi_its_msgs::msg::DriveDirection>::value && has_fixed_size<ros_etsi_its_msgs::msg::Heading>::value && has_fixed_size<ros_etsi_its_msgs::msg::LongitudinalAcceleration>::value && has_fixed_size<ros_etsi_its_msgs::msg::Speed>::value && has_fixed_size<ros_etsi_its_msgs::msg::VehicleLength>::value && has_fixed_size<ros_etsi_its_msgs::msg::VehicleWidth>::value && has_fixed_size<ros_etsi_its_msgs::msg::YawRate>::value> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency>
  : std::integral_constant<bool, has_bounded_size<ros_etsi_its_msgs::msg::AccelerationControl>::value && has_bounded_size<ros_etsi_its_msgs::msg::Curvature>::value && has_bounded_size<ros_etsi_its_msgs::msg::CurvatureCalculationMode>::value && has_bounded_size<ros_etsi_its_msgs::msg::DriveDirection>::value && has_bounded_size<ros_etsi_its_msgs::msg::Heading>::value && has_bounded_size<ros_etsi_its_msgs::msg::LongitudinalAcceleration>::value && has_bounded_size<ros_etsi_its_msgs::msg::Speed>::value && has_bounded_size<ros_etsi_its_msgs::msg::VehicleLength>::value && has_bounded_size<ros_etsi_its_msgs::msg::VehicleWidth>::value && has_bounded_size<ros_etsi_its_msgs::msg::YawRate>::value> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_HIGH_FREQUENCY__TRAITS_HPP_
