// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/ManagementContainer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/management_container.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__MANAGEMENT_CONTAINER__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__MANAGEMENT_CONTAINER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/management_container__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'action_id'
#include "ros_etsi_its_msgs/msg/detail/action_id__traits.hpp"
// Member 'event_position'
#include "ros_etsi_its_msgs/msg/detail/reference_position__traits.hpp"
// Member 'relevance_distance'
#include "ros_etsi_its_msgs/msg/detail/relevance_distance__traits.hpp"
// Member 'relevance_traffic_direction'
#include "ros_etsi_its_msgs/msg/detail/relevance_traffic_direction__traits.hpp"
// Member 'station_type'
#include "ros_etsi_its_msgs/msg/detail/station_type__traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ManagementContainer & msg,
  std::ostream & out)
{
  out << "{";
  // member: action_id
  {
    out << "action_id: ";
    to_flow_style_yaml(msg.action_id, out);
    out << ", ";
  }

  // member: detection_time
  {
    out << "detection_time: ";
    rosidl_generator_traits::value_to_yaml(msg.detection_time, out);
    out << ", ";
  }

  // member: reference_time
  {
    out << "reference_time: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_time, out);
    out << ", ";
  }

  // member: termination
  {
    out << "termination: ";
    rosidl_generator_traits::value_to_yaml(msg.termination, out);
    out << ", ";
  }

  // member: event_position
  {
    out << "event_position: ";
    to_flow_style_yaml(msg.event_position, out);
    out << ", ";
  }

  // member: relevance_distance
  {
    out << "relevance_distance: ";
    to_flow_style_yaml(msg.relevance_distance, out);
    out << ", ";
  }

  // member: relevance_traffic_direction
  {
    out << "relevance_traffic_direction: ";
    to_flow_style_yaml(msg.relevance_traffic_direction, out);
    out << ", ";
  }

  // member: validity_duration
  {
    out << "validity_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.validity_duration, out);
    out << ", ";
  }

  // member: transmission_interval
  {
    out << "transmission_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.transmission_interval, out);
    out << ", ";
  }

  // member: station_type
  {
    out << "station_type: ";
    to_flow_style_yaml(msg.station_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ManagementContainer & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_id:\n";
    to_block_style_yaml(msg.action_id, out, indentation + 2);
  }

  // member: detection_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detection_time: ";
    rosidl_generator_traits::value_to_yaml(msg.detection_time, out);
    out << "\n";
  }

  // member: reference_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_time: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_time, out);
    out << "\n";
  }

  // member: termination
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "termination: ";
    rosidl_generator_traits::value_to_yaml(msg.termination, out);
    out << "\n";
  }

  // member: event_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_position:\n";
    to_block_style_yaml(msg.event_position, out, indentation + 2);
  }

  // member: relevance_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relevance_distance:\n";
    to_block_style_yaml(msg.relevance_distance, out, indentation + 2);
  }

  // member: relevance_traffic_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relevance_traffic_direction:\n";
    to_block_style_yaml(msg.relevance_traffic_direction, out, indentation + 2);
  }

  // member: validity_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "validity_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.validity_duration, out);
    out << "\n";
  }

  // member: transmission_interval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transmission_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.transmission_interval, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ManagementContainer & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::ManagementContainer & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::ManagementContainer & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::ManagementContainer>()
{
  return "ros_etsi_its_msgs::msg::ManagementContainer";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::ManagementContainer>()
{
  return "ros_etsi_its_msgs/msg/ManagementContainer";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::ManagementContainer>
  : std::integral_constant<bool, has_fixed_size<ros_etsi_its_msgs::msg::ActionID>::value && has_fixed_size<ros_etsi_its_msgs::msg::ReferencePosition>::value && has_fixed_size<ros_etsi_its_msgs::msg::RelevanceDistance>::value && has_fixed_size<ros_etsi_its_msgs::msg::RelevanceTrafficDirection>::value && has_fixed_size<ros_etsi_its_msgs::msg::StationType>::value> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::ManagementContainer>
  : std::integral_constant<bool, has_bounded_size<ros_etsi_its_msgs::msg::ActionID>::value && has_bounded_size<ros_etsi_its_msgs::msg::ReferencePosition>::value && has_bounded_size<ros_etsi_its_msgs::msg::RelevanceDistance>::value && has_bounded_size<ros_etsi_its_msgs::msg::RelevanceTrafficDirection>::value && has_bounded_size<ros_etsi_its_msgs::msg::StationType>::value> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::ManagementContainer>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__MANAGEMENT_CONTAINER__TRAITS_HPP_
