// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/ReferencePosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/reference_position.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__REFERENCE_POSITION__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__REFERENCE_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/reference_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position_confidence'
#include "ros_etsi_its_msgs/msg/detail/position_confidence_ellipse__traits.hpp"
// Member 'altitude'
#include "ros_etsi_its_msgs/msg/detail/altitude__traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ReferencePosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: position_confidence
  {
    out << "position_confidence: ";
    to_flow_style_yaml(msg.position_confidence, out);
    out << ", ";
  }

  // member: altitude
  {
    out << "altitude: ";
    to_flow_style_yaml(msg.altitude, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReferencePosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: position_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_confidence:\n";
    to_block_style_yaml(msg.position_confidence, out, indentation + 2);
  }

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude:\n";
    to_block_style_yaml(msg.altitude, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReferencePosition & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::ReferencePosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::ReferencePosition & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::ReferencePosition>()
{
  return "ros_etsi_its_msgs::msg::ReferencePosition";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::ReferencePosition>()
{
  return "ros_etsi_its_msgs/msg/ReferencePosition";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::ReferencePosition>
  : std::integral_constant<bool, has_fixed_size<ros_etsi_its_msgs::msg::Altitude>::value && has_fixed_size<ros_etsi_its_msgs::msg::PositionConfidenceEllipse>::value> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::ReferencePosition>
  : std::integral_constant<bool, has_bounded_size<ros_etsi_its_msgs::msg::Altitude>::value && has_bounded_size<ros_etsi_its_msgs::msg::PositionConfidenceEllipse>::value> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::ReferencePosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__REFERENCE_POSITION__TRAITS_HPP_
