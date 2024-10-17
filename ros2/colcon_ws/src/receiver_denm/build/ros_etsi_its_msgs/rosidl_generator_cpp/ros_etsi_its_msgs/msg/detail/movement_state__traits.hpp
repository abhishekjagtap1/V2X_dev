// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/movement_state.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_STATE__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/movement_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'state_time_speed'
#include "ros_etsi_its_msgs/msg/detail/movement_event__traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MovementState & msg,
  std::ostream & out)
{
  out << "{";
  // member: signal_group
  {
    out << "signal_group: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_group, out);
    out << ", ";
  }

  // member: state_time_speed
  {
    if (msg.state_time_speed.size() == 0) {
      out << "state_time_speed: []";
    } else {
      out << "state_time_speed: [";
      size_t pending_items = msg.state_time_speed.size();
      for (auto item : msg.state_time_speed) {
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
  const MovementState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: signal_group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_group: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_group, out);
    out << "\n";
  }

  // member: state_time_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.state_time_speed.size() == 0) {
      out << "state_time_speed: []\n";
    } else {
      out << "state_time_speed:\n";
      for (auto item : msg.state_time_speed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MovementState & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::MovementState & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::MovementState & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::MovementState>()
{
  return "ros_etsi_its_msgs::msg::MovementState";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::MovementState>()
{
  return "ros_etsi_its_msgs/msg/MovementState";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::MovementState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::MovementState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::MovementState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_STATE__TRAITS_HPP_
