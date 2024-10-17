// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/RelevanceTrafficDirection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/relevance_traffic_direction.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__RELEVANCE_TRAFFIC_DIRECTION__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__RELEVANCE_TRAFFIC_DIRECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/relevance_traffic_direction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RelevanceTrafficDirection & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RelevanceTrafficDirection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RelevanceTrafficDirection & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::RelevanceTrafficDirection & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::RelevanceTrafficDirection & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::RelevanceTrafficDirection>()
{
  return "ros_etsi_its_msgs::msg::RelevanceTrafficDirection";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::RelevanceTrafficDirection>()
{
  return "ros_etsi_its_msgs/msg/RelevanceTrafficDirection";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::RelevanceTrafficDirection>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::RelevanceTrafficDirection>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::RelevanceTrafficDirection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__RELEVANCE_TRAFFIC_DIRECTION__TRAITS_HPP_
