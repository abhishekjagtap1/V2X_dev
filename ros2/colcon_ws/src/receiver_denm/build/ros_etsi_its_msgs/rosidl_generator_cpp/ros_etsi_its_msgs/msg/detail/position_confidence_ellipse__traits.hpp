// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/PositionConfidenceEllipse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/position_confidence_ellipse.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_ELLIPSE__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_ELLIPSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/position_confidence_ellipse__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PositionConfidenceEllipse & msg,
  std::ostream & out)
{
  out << "{";
  // member: semi_major_confidence
  {
    out << "semi_major_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.semi_major_confidence, out);
    out << ", ";
  }

  // member: semi_minor_confidence
  {
    out << "semi_minor_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.semi_minor_confidence, out);
    out << ", ";
  }

  // member: semi_major_orientation
  {
    out << "semi_major_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.semi_major_orientation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PositionConfidenceEllipse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: semi_major_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "semi_major_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.semi_major_confidence, out);
    out << "\n";
  }

  // member: semi_minor_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "semi_minor_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.semi_minor_confidence, out);
    out << "\n";
  }

  // member: semi_major_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "semi_major_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.semi_major_orientation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PositionConfidenceEllipse & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::PositionConfidenceEllipse & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::PositionConfidenceEllipse & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::PositionConfidenceEllipse>()
{
  return "ros_etsi_its_msgs::msg::PositionConfidenceEllipse";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::PositionConfidenceEllipse>()
{
  return "ros_etsi_its_msgs/msg/PositionConfidenceEllipse";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::PositionConfidenceEllipse>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::PositionConfidenceEllipse>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::PositionConfidenceEllipse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_ELLIPSE__TRAITS_HPP_
