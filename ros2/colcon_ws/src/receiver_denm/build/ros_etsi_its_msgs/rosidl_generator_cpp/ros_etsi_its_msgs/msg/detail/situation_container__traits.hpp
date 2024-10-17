// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/SituationContainer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/situation_container.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__SITUATION_CONTAINER__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__SITUATION_CONTAINER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/situation_container__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'information_quality'
#include "ros_etsi_its_msgs/msg/detail/information_quality__traits.hpp"
// Member 'event_type'
// Member 'linked_cause'
#include "ros_etsi_its_msgs/msg/detail/cause_code__traits.hpp"
// Member 'event_history'
#include "ros_etsi_its_msgs/msg/detail/event_point__traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SituationContainer & msg,
  std::ostream & out)
{
  out << "{";
  // member: information_quality
  {
    out << "information_quality: ";
    to_flow_style_yaml(msg.information_quality, out);
    out << ", ";
  }

  // member: event_type
  {
    out << "event_type: ";
    to_flow_style_yaml(msg.event_type, out);
    out << ", ";
  }

  // member: has_linked_cause
  {
    out << "has_linked_cause: ";
    rosidl_generator_traits::value_to_yaml(msg.has_linked_cause, out);
    out << ", ";
  }

  // member: linked_cause
  {
    out << "linked_cause: ";
    to_flow_style_yaml(msg.linked_cause, out);
    out << ", ";
  }

  // member: event_history
  {
    if (msg.event_history.size() == 0) {
      out << "event_history: []";
    } else {
      out << "event_history: [";
      size_t pending_items = msg.event_history.size();
      for (auto item : msg.event_history) {
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
  const SituationContainer & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: information_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "information_quality:\n";
    to_block_style_yaml(msg.information_quality, out, indentation + 2);
  }

  // member: event_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_type:\n";
    to_block_style_yaml(msg.event_type, out, indentation + 2);
  }

  // member: has_linked_cause
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_linked_cause: ";
    rosidl_generator_traits::value_to_yaml(msg.has_linked_cause, out);
    out << "\n";
  }

  // member: linked_cause
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linked_cause:\n";
    to_block_style_yaml(msg.linked_cause, out, indentation + 2);
  }

  // member: event_history
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.event_history.size() == 0) {
      out << "event_history: []\n";
    } else {
      out << "event_history:\n";
      for (auto item : msg.event_history) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SituationContainer & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::SituationContainer & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::SituationContainer & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::SituationContainer>()
{
  return "ros_etsi_its_msgs::msg::SituationContainer";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::SituationContainer>()
{
  return "ros_etsi_its_msgs/msg/SituationContainer";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::SituationContainer>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::SituationContainer>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::SituationContainer>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__SITUATION_CONTAINER__TRAITS_HPP_
