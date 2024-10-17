// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/LocationContainer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/location_container.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__LOCATION_CONTAINER__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__LOCATION_CONTAINER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/location_container__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'event_speed'
#include "ros_etsi_its_msgs/msg/detail/speed__traits.hpp"
// Member 'event_position_heading'
#include "ros_etsi_its_msgs/msg/detail/heading__traits.hpp"
// Member 'traces'
#include "ros_etsi_its_msgs/msg/detail/path_history__traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LocationContainer & msg,
  std::ostream & out)
{
  out << "{";
  // member: event_speed
  {
    out << "event_speed: ";
    to_flow_style_yaml(msg.event_speed, out);
    out << ", ";
  }

  // member: event_position_heading
  {
    out << "event_position_heading: ";
    to_flow_style_yaml(msg.event_position_heading, out);
    out << ", ";
  }

  // member: traces
  {
    if (msg.traces.size() == 0) {
      out << "traces: []";
    } else {
      out << "traces: [";
      size_t pending_items = msg.traces.size();
      for (auto item : msg.traces) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: road_type
  {
    out << "road_type: ";
    rosidl_generator_traits::value_to_yaml(msg.road_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LocationContainer & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: event_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_speed:\n";
    to_block_style_yaml(msg.event_speed, out, indentation + 2);
  }

  // member: event_position_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_position_heading:\n";
    to_block_style_yaml(msg.event_position_heading, out, indentation + 2);
  }

  // member: traces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.traces.size() == 0) {
      out << "traces: []\n";
    } else {
      out << "traces:\n";
      for (auto item : msg.traces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: road_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_type: ";
    rosidl_generator_traits::value_to_yaml(msg.road_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LocationContainer & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::LocationContainer & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::LocationContainer & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::LocationContainer>()
{
  return "ros_etsi_its_msgs::msg::LocationContainer";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::LocationContainer>()
{
  return "ros_etsi_its_msgs/msg/LocationContainer";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::LocationContainer>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::LocationContainer>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::LocationContainer>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__LOCATION_CONTAINER__TRAITS_HPP_
