// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/DENM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/denm.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__DENM__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__DENM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/denm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'its_header'
#include "ros_etsi_its_msgs/msg/detail/its_pdu_header__traits.hpp"
// Member 'management'
#include "ros_etsi_its_msgs/msg/detail/management_container__traits.hpp"
// Member 'situation'
#include "ros_etsi_its_msgs/msg/detail/situation_container__traits.hpp"
// Member 'location'
#include "ros_etsi_its_msgs/msg/detail/location_container__traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DENM & msg,
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

  // member: management
  {
    out << "management: ";
    to_flow_style_yaml(msg.management, out);
    out << ", ";
  }

  // member: has_situation
  {
    out << "has_situation: ";
    rosidl_generator_traits::value_to_yaml(msg.has_situation, out);
    out << ", ";
  }

  // member: situation
  {
    out << "situation: ";
    to_flow_style_yaml(msg.situation, out);
    out << ", ";
  }

  // member: has_location
  {
    out << "has_location: ";
    rosidl_generator_traits::value_to_yaml(msg.has_location, out);
    out << ", ";
  }

  // member: location
  {
    out << "location: ";
    to_flow_style_yaml(msg.location, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DENM & msg,
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

  // member: management
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "management:\n";
    to_block_style_yaml(msg.management, out, indentation + 2);
  }

  // member: has_situation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_situation: ";
    rosidl_generator_traits::value_to_yaml(msg.has_situation, out);
    out << "\n";
  }

  // member: situation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "situation:\n";
    to_block_style_yaml(msg.situation, out, indentation + 2);
  }

  // member: has_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_location: ";
    rosidl_generator_traits::value_to_yaml(msg.has_location, out);
    out << "\n";
  }

  // member: location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location:\n";
    to_block_style_yaml(msg.location, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DENM & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::DENM & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::DENM & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::DENM>()
{
  return "ros_etsi_its_msgs::msg::DENM";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::DENM>()
{
  return "ros_etsi_its_msgs/msg/DENM";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::DENM>
  : std::integral_constant<bool, has_fixed_size<ros_etsi_its_msgs::msg::ItsPduHeader>::value && has_fixed_size<ros_etsi_its_msgs::msg::LocationContainer>::value && has_fixed_size<ros_etsi_its_msgs::msg::ManagementContainer>::value && has_fixed_size<ros_etsi_its_msgs::msg::SituationContainer>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::DENM>
  : std::integral_constant<bool, has_bounded_size<ros_etsi_its_msgs::msg::ItsPduHeader>::value && has_bounded_size<ros_etsi_its_msgs::msg::LocationContainer>::value && has_bounded_size<ros_etsi_its_msgs::msg::ManagementContainer>::value && has_bounded_size<ros_etsi_its_msgs::msg::SituationContainer>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::DENM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__DENM__TRAITS_HPP_
