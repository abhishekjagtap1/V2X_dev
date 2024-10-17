// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/Speed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/speed.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPEED__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPEED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/speed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Speed & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Speed & msg,
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

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Speed & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::Speed & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::Speed & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::Speed>()
{
  return "ros_etsi_its_msgs::msg::Speed";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::Speed>()
{
  return "ros_etsi_its_msgs/msg/Speed";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::Speed>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::Speed>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::Speed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPEED__TRAITS_HPP_
