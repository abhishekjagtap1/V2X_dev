// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/MAPEM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/mapem.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__MAPEM__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__MAPEM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/mapem__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'its_header'
#include "ros_etsi_its_msgs/msg/detail/its_pdu_header__traits.hpp"
// Member 'intersections'
#include "ros_etsi_its_msgs/msg/detail/intersections__traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MAPEM & msg,
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

  // member: time_stamp
  {
    out << "time_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.time_stamp, out);
    out << ", ";
  }

  // member: msg_issue_revision
  {
    out << "msg_issue_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_issue_revision, out);
    out << ", ";
  }

  // member: intersections
  {
    out << "intersections: ";
    to_flow_style_yaml(msg.intersections, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MAPEM & msg,
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

  // member: time_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.time_stamp, out);
    out << "\n";
  }

  // member: msg_issue_revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_issue_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_issue_revision, out);
    out << "\n";
  }

  // member: intersections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intersections:\n";
    to_block_style_yaml(msg.intersections, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MAPEM & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::MAPEM & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::MAPEM & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::MAPEM>()
{
  return "ros_etsi_its_msgs::msg::MAPEM";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::MAPEM>()
{
  return "ros_etsi_its_msgs/msg/MAPEM";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::MAPEM>
  : std::integral_constant<bool, has_fixed_size<ros_etsi_its_msgs::msg::Intersections>::value && has_fixed_size<ros_etsi_its_msgs::msg::ItsPduHeader>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::MAPEM>
  : std::integral_constant<bool, has_bounded_size<ros_etsi_its_msgs::msg::Intersections>::value && has_bounded_size<ros_etsi_its_msgs::msg::ItsPduHeader>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::MAPEM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__MAPEM__TRAITS_HPP_
