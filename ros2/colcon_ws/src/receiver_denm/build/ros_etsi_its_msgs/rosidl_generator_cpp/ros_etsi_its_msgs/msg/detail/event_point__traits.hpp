// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/EventPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/event_point.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__EVENT_POINT__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__EVENT_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/event_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'event_position'
#include "ros_etsi_its_msgs/msg/detail/delta_reference_position__traits.hpp"
// Member 'event_delta_time'
#include "ros_etsi_its_msgs/msg/detail/path_delta_time__traits.hpp"
// Member 'information_quality'
#include "ros_etsi_its_msgs/msg/detail/information_quality__traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EventPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: event_position
  {
    out << "event_position: ";
    to_flow_style_yaml(msg.event_position, out);
    out << ", ";
  }

  // member: event_delta_time
  {
    out << "event_delta_time: ";
    to_flow_style_yaml(msg.event_delta_time, out);
    out << ", ";
  }

  // member: information_quality
  {
    out << "information_quality: ";
    to_flow_style_yaml(msg.information_quality, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EventPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: event_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_position:\n";
    to_block_style_yaml(msg.event_position, out, indentation + 2);
  }

  // member: event_delta_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_delta_time:\n";
    to_block_style_yaml(msg.event_delta_time, out, indentation + 2);
  }

  // member: information_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "information_quality:\n";
    to_block_style_yaml(msg.information_quality, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EventPoint & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::EventPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::EventPoint & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::EventPoint>()
{
  return "ros_etsi_its_msgs::msg::EventPoint";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::EventPoint>()
{
  return "ros_etsi_its_msgs/msg/EventPoint";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::EventPoint>
  : std::integral_constant<bool, has_fixed_size<ros_etsi_its_msgs::msg::DeltaReferencePosition>::value && has_fixed_size<ros_etsi_its_msgs::msg::InformationQuality>::value && has_fixed_size<ros_etsi_its_msgs::msg::PathDeltaTime>::value> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::EventPoint>
  : std::integral_constant<bool, has_bounded_size<ros_etsi_its_msgs::msg::DeltaReferencePosition>::value && has_bounded_size<ros_etsi_its_msgs::msg::InformationQuality>::value && has_bounded_size<ros_etsi_its_msgs::msg::PathDeltaTime>::value> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::EventPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__EVENT_POINT__TRAITS_HPP_
