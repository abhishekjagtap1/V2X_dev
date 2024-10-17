// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/CAM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/cam.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAM__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/cam__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'its_header'
#include "ros_etsi_its_msgs/msg/detail/its_pdu_header__traits.hpp"
// Member 'station_type'
#include "ros_etsi_its_msgs/msg/detail/station_type__traits.hpp"
// Member 'reference_position'
#include "ros_etsi_its_msgs/msg/detail/reference_position__traits.hpp"
// Member 'high_frequency_container'
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_high_frequency__traits.hpp"
// Member 'low_frequency_container'
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_low_frequency__traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CAM & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: its_header
  {
    out << "its_header: ";
    to_flow_style_yaml(msg.its_header, out);
    out << ", ";
  }

  // member: generation_delta_time
  {
    out << "generation_delta_time: ";
    rosidl_generator_traits::value_to_yaml(msg.generation_delta_time, out);
    out << ", ";
  }

  // member: station_type
  {
    out << "station_type: ";
    to_flow_style_yaml(msg.station_type, out);
    out << ", ";
  }

  // member: reference_position
  {
    out << "reference_position: ";
    to_flow_style_yaml(msg.reference_position, out);
    out << ", ";
  }

  // member: high_frequency_container
  {
    out << "high_frequency_container: ";
    to_flow_style_yaml(msg.high_frequency_container, out);
    out << ", ";
  }

  // member: has_low_frequency_container
  {
    out << "has_low_frequency_container: ";
    rosidl_generator_traits::value_to_yaml(msg.has_low_frequency_container, out);
    out << ", ";
  }

  // member: low_frequency_container
  {
    out << "low_frequency_container: ";
    to_flow_style_yaml(msg.low_frequency_container, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CAM & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: its_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "its_header:\n";
    to_block_style_yaml(msg.its_header, out, indentation + 2);
  }

  // member: generation_delta_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "generation_delta_time: ";
    rosidl_generator_traits::value_to_yaml(msg.generation_delta_time, out);
    out << "\n";
  }

  // member: station_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "station_type:\n";
    to_block_style_yaml(msg.station_type, out, indentation + 2);
  }

  // member: reference_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_position:\n";
    to_block_style_yaml(msg.reference_position, out, indentation + 2);
  }

  // member: high_frequency_container
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "high_frequency_container:\n";
    to_block_style_yaml(msg.high_frequency_container, out, indentation + 2);
  }

  // member: has_low_frequency_container
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_low_frequency_container: ";
    rosidl_generator_traits::value_to_yaml(msg.has_low_frequency_container, out);
    out << "\n";
  }

  // member: low_frequency_container
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_frequency_container:\n";
    to_block_style_yaml(msg.low_frequency_container, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CAM & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::CAM & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::CAM & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::CAM>()
{
  return "ros_etsi_its_msgs::msg::CAM";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::CAM>()
{
  return "ros_etsi_its_msgs/msg/CAM";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::CAM>
  : std::integral_constant<bool, has_fixed_size<ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency>::value && has_fixed_size<ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency>::value && has_fixed_size<ros_etsi_its_msgs::msg::ItsPduHeader>::value && has_fixed_size<ros_etsi_its_msgs::msg::ReferencePosition>::value && has_fixed_size<ros_etsi_its_msgs::msg::StationType>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::CAM>
  : std::integral_constant<bool, has_bounded_size<ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency>::value && has_bounded_size<ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency>::value && has_bounded_size<ros_etsi_its_msgs::msg::ItsPduHeader>::value && has_bounded_size<ros_etsi_its_msgs::msg::ReferencePosition>::value && has_bounded_size<ros_etsi_its_msgs::msg::StationType>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::CAM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAM__TRAITS_HPP_
