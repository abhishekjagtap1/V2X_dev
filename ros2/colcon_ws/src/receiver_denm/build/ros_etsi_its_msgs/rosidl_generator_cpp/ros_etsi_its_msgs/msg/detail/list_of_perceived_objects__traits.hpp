// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/ListOfPerceivedObjects.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/list_of_perceived_objects.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__LIST_OF_PERCEIVED_OBJECTS__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__LIST_OF_PERCEIVED_OBJECTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/list_of_perceived_objects__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'perceived_object_container'
#include "ros_etsi_its_msgs/msg/detail/perceived_object__traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ListOfPerceivedObjects & msg,
  std::ostream & out)
{
  out << "{";
  // member: perceived_object_container
  {
    if (msg.perceived_object_container.size() == 0) {
      out << "perceived_object_container: []";
    } else {
      out << "perceived_object_container: [";
      size_t pending_items = msg.perceived_object_container.size();
      for (auto item : msg.perceived_object_container) {
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
  const ListOfPerceivedObjects & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: perceived_object_container
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.perceived_object_container.size() == 0) {
      out << "perceived_object_container: []\n";
    } else {
      out << "perceived_object_container:\n";
      for (auto item : msg.perceived_object_container) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListOfPerceivedObjects & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::ListOfPerceivedObjects & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::ListOfPerceivedObjects & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::ListOfPerceivedObjects>()
{
  return "ros_etsi_its_msgs::msg::ListOfPerceivedObjects";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::ListOfPerceivedObjects>()
{
  return "ros_etsi_its_msgs/msg/ListOfPerceivedObjects";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::ListOfPerceivedObjects>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::ListOfPerceivedObjects>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::ListOfPerceivedObjects>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__LIST_OF_PERCEIVED_OBJECTS__TRAITS_HPP_
