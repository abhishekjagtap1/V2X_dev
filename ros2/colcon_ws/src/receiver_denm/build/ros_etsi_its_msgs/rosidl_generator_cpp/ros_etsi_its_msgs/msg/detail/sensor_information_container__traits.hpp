// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/SensorInformationContainer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/sensor_information_container.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__SENSOR_INFORMATION_CONTAINER__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__SENSOR_INFORMATION_CONTAINER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/sensor_information_container__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sensors_information'
#include "ros_etsi_its_msgs/msg/detail/sensor_information__traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorInformationContainer & msg,
  std::ostream & out)
{
  out << "{";
  // member: sensors_information
  {
    if (msg.sensors_information.size() == 0) {
      out << "sensors_information: []";
    } else {
      out << "sensors_information: [";
      size_t pending_items = msg.sensors_information.size();
      for (auto item : msg.sensors_information) {
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
  const SensorInformationContainer & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensors_information
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensors_information.size() == 0) {
      out << "sensors_information: []\n";
    } else {
      out << "sensors_information:\n";
      for (auto item : msg.sensors_information) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorInformationContainer & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::SensorInformationContainer & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::SensorInformationContainer & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::SensorInformationContainer>()
{
  return "ros_etsi_its_msgs::msg::SensorInformationContainer";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::SensorInformationContainer>()
{
  return "ros_etsi_its_msgs/msg/SensorInformationContainer";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::SensorInformationContainer>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::SensorInformationContainer>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::SensorInformationContainer>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__SENSOR_INFORMATION_CONTAINER__TRAITS_HPP_
