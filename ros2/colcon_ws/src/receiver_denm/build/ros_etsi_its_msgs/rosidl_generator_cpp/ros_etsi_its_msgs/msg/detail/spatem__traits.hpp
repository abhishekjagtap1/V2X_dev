// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/SPATEM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/spatem.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPATEM__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPATEM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/spatem__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'its_header'
#include "ros_etsi_its_msgs/msg/detail/its_pdu_header__traits.hpp"
// Member 'intersections'
#include "ros_etsi_its_msgs/msg/detail/intersection_state__traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SPATEM & msg,
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

  // member: intersections
  {
    if (msg.intersections.size() == 0) {
      out << "intersections: []";
    } else {
      out << "intersections: [";
      size_t pending_items = msg.intersections.size();
      for (auto item : msg.intersections) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SPATEM & msg,
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

  // member: intersections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intersections.size() == 0) {
      out << "intersections: []\n";
    } else {
      out << "intersections:\n";
      for (auto item : msg.intersections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SPATEM & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::SPATEM & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::SPATEM & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::SPATEM>()
{
  return "ros_etsi_its_msgs::msg::SPATEM";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::SPATEM>()
{
  return "ros_etsi_its_msgs/msg/SPATEM";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::SPATEM>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::SPATEM>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::SPATEM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPATEM__TRAITS_HPP_
