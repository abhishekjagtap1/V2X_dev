// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/CPM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/cpm.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CPM__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CPM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/cpm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'its_header'
#include "ros_etsi_its_msgs/msg/detail/its_pdu_header__traits.hpp"
// Member 'station_type'
#include "ros_etsi_its_msgs/msg/detail/station_type__traits.hpp"
// Member 'reference_position'
#include "ros_etsi_its_msgs/msg/detail/reference_position__traits.hpp"
// Member 'originating_vehicle_container'
#include "ros_etsi_its_msgs/msg/detail/originating_vehicle_container__traits.hpp"
// Member 'sensor_information_container'
#include "ros_etsi_its_msgs/msg/detail/sensor_information_container__traits.hpp"
// Member 'list_of_perceived_objects'
#include "ros_etsi_its_msgs/msg/detail/list_of_perceived_objects__traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CPM & msg,
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

  // member: generation_delta_time
  {
    out << "generation_delta_time: ";
    rosidl_generator_traits::value_to_yaml(msg.generation_delta_time, out);
    out << ", ";
  }

  // member: station_type
  {
    out << "station_type: ";
    to_flow_style_yaml(msg.station_type, out);
    out << ", ";
  }

  // member: reference_position
  {
    out << "reference_position: ";
    to_flow_style_yaml(msg.reference_position, out);
    out << ", ";
  }

  // member: originating_vehicle_container
  {
    out << "originating_vehicle_container: ";
    to_flow_style_yaml(msg.originating_vehicle_container, out);
    out << ", ";
  }

  // member: has_sensor_information_container
  {
    out << "has_sensor_information_container: ";
    rosidl_generator_traits::value_to_yaml(msg.has_sensor_information_container, out);
    out << ", ";
  }

  // member: sensor_information_container
  {
    out << "sensor_information_container: ";
    to_flow_style_yaml(msg.sensor_information_container, out);
    out << ", ";
  }

  // member: has_list_of_perceived_object
  {
    out << "has_list_of_perceived_object: ";
    rosidl_generator_traits::value_to_yaml(msg.has_list_of_perceived_object, out);
    out << ", ";
  }

  // member: list_of_perceived_objects
  {
    out << "list_of_perceived_objects: ";
    to_flow_style_yaml(msg.list_of_perceived_objects, out);
    out << ", ";
  }

  // member: number_of_perceived_objects
  {
    out << "number_of_perceived_objects: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_perceived_objects, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CPM & msg,
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

  // member: generation_delta_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "generation_delta_time: ";
    rosidl_generator_traits::value_to_yaml(msg.generation_delta_time, out);
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

  // member: reference_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_position:\n";
    to_block_style_yaml(msg.reference_position, out, indentation + 2);
  }

  // member: originating_vehicle_container
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "originating_vehicle_container:\n";
    to_block_style_yaml(msg.originating_vehicle_container, out, indentation + 2);
  }

  // member: has_sensor_information_container
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_sensor_information_container: ";
    rosidl_generator_traits::value_to_yaml(msg.has_sensor_information_container, out);
    out << "\n";
  }

  // member: sensor_information_container
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_information_container:\n";
    to_block_style_yaml(msg.sensor_information_container, out, indentation + 2);
  }

  // member: has_list_of_perceived_object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_list_of_perceived_object: ";
    rosidl_generator_traits::value_to_yaml(msg.has_list_of_perceived_object, out);
    out << "\n";
  }

  // member: list_of_perceived_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "list_of_perceived_objects:\n";
    to_block_style_yaml(msg.list_of_perceived_objects, out, indentation + 2);
  }

  // member: number_of_perceived_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_perceived_objects: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_perceived_objects, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CPM & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::CPM & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::CPM & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::CPM>()
{
  return "ros_etsi_its_msgs::msg::CPM";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::CPM>()
{
  return "ros_etsi_its_msgs/msg/CPM";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::CPM>
  : std::integral_constant<bool, has_fixed_size<ros_etsi_its_msgs::msg::ItsPduHeader>::value && has_fixed_size<ros_etsi_its_msgs::msg::ListOfPerceivedObjects>::value && has_fixed_size<ros_etsi_its_msgs::msg::OriginatingVehicleContainer>::value && has_fixed_size<ros_etsi_its_msgs::msg::ReferencePosition>::value && has_fixed_size<ros_etsi_its_msgs::msg::SensorInformationContainer>::value && has_fixed_size<ros_etsi_its_msgs::msg::StationType>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::CPM>
  : std::integral_constant<bool, has_bounded_size<ros_etsi_its_msgs::msg::ItsPduHeader>::value && has_bounded_size<ros_etsi_its_msgs::msg::ListOfPerceivedObjects>::value && has_bounded_size<ros_etsi_its_msgs::msg::OriginatingVehicleContainer>::value && has_bounded_size<ros_etsi_its_msgs::msg::ReferencePosition>::value && has_bounded_size<ros_etsi_its_msgs::msg::SensorInformationContainer>::value && has_bounded_size<ros_etsi_its_msgs::msg::StationType>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::CPM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CPM__TRAITS_HPP_
