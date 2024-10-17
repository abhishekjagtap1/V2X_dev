// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/connection.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CONNECTION__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CONNECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/connection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Connection & msg,
  std::ostream & out)
{
  out << "{";
  // member: connecting_lane
  {
    out << "connecting_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.connecting_lane, out);
    out << ", ";
  }

  // member: remote_intersection
  {
    out << "remote_intersection: ";
    rosidl_generator_traits::value_to_yaml(msg.remote_intersection, out);
    out << ", ";
  }

  // member: signal_group
  {
    out << "signal_group: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_group, out);
    out << ", ";
  }

  // member: connection_id
  {
    out << "connection_id: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Connection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: connecting_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connecting_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.connecting_lane, out);
    out << "\n";
  }

  // member: remote_intersection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remote_intersection: ";
    rosidl_generator_traits::value_to_yaml(msg.remote_intersection, out);
    out << "\n";
  }

  // member: signal_group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_group: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_group, out);
    out << "\n";
  }

  // member: connection_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connection_id: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Connection & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::Connection & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::Connection & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::Connection>()
{
  return "ros_etsi_its_msgs::msg::Connection";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::Connection>()
{
  return "ros_etsi_its_msgs/msg/Connection";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::Connection>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::Connection>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::Connection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CONNECTION__TRAITS_HPP_
