// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/generic_lane.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__GENERIC_LANE__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__GENERIC_LANE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/generic_lane__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'node_list'
#include "ros_etsi_its_msgs/msg/detail/node_set_xy__traits.hpp"
// Member 'connects_to'
#include "ros_etsi_its_msgs/msg/detail/connection__traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GenericLane & msg,
  std::ostream & out)
{
  out << "{";
  // member: lane_id
  {
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: ingress_approach
  {
    out << "ingress_approach: ";
    rosidl_generator_traits::value_to_yaml(msg.ingress_approach, out);
    out << ", ";
  }

  // member: egress_approach
  {
    out << "egress_approach: ";
    rosidl_generator_traits::value_to_yaml(msg.egress_approach, out);
    out << ", ";
  }

  // member: lane_direction
  {
    out << "lane_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_direction, out);
    out << ", ";
  }

  // member: node_list
  {
    if (msg.node_list.size() == 0) {
      out << "node_list: []";
    } else {
      out << "node_list: [";
      size_t pending_items = msg.node_list.size();
      for (auto item : msg.node_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: connects_to
  {
    if (msg.connects_to.size() == 0) {
      out << "connects_to: []";
    } else {
      out << "connects_to: [";
      size_t pending_items = msg.connects_to.size();
      for (auto item : msg.connects_to) {
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
  const GenericLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: ingress_approach
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ingress_approach: ";
    rosidl_generator_traits::value_to_yaml(msg.ingress_approach, out);
    out << "\n";
  }

  // member: egress_approach
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "egress_approach: ";
    rosidl_generator_traits::value_to_yaml(msg.egress_approach, out);
    out << "\n";
  }

  // member: lane_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_direction, out);
    out << "\n";
  }

  // member: node_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.node_list.size() == 0) {
      out << "node_list: []\n";
    } else {
      out << "node_list:\n";
      for (auto item : msg.node_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: connects_to
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.connects_to.size() == 0) {
      out << "connects_to: []\n";
    } else {
      out << "connects_to:\n";
      for (auto item : msg.connects_to) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenericLane & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::GenericLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::GenericLane & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::GenericLane>()
{
  return "ros_etsi_its_msgs::msg::GenericLane";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::GenericLane>()
{
  return "ros_etsi_its_msgs/msg/GenericLane";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::GenericLane>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::GenericLane>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::GenericLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__GENERIC_LANE__TRAITS_HPP_
