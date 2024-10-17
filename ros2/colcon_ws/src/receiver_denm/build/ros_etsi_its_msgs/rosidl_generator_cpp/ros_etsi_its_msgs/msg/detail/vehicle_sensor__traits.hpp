// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/VehicleSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/vehicle_sensor.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'vehicle_sensor_property_list'
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor_property__traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleSensor & msg,
  std::ostream & out)
{
  out << "{";
  // member: ref_point_id
  {
    out << "ref_point_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_point_id, out);
    out << ", ";
  }

  // member: x_sensor_offset
  {
    out << "x_sensor_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.x_sensor_offset, out);
    out << ", ";
  }

  // member: y_sensor_offset
  {
    out << "y_sensor_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.y_sensor_offset, out);
    out << ", ";
  }

  // member: z_sensor_offset
  {
    out << "z_sensor_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.z_sensor_offset, out);
    out << ", ";
  }

  // member: vehicle_sensor_property_list
  {
    if (msg.vehicle_sensor_property_list.size() == 0) {
      out << "vehicle_sensor_property_list: []";
    } else {
      out << "vehicle_sensor_property_list: [";
      size_t pending_items = msg.vehicle_sensor_property_list.size();
      for (auto item : msg.vehicle_sensor_property_list) {
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
  const VehicleSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ref_point_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_point_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_point_id, out);
    out << "\n";
  }

  // member: x_sensor_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_sensor_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.x_sensor_offset, out);
    out << "\n";
  }

  // member: y_sensor_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_sensor_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.y_sensor_offset, out);
    out << "\n";
  }

  // member: z_sensor_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_sensor_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.z_sensor_offset, out);
    out << "\n";
  }

  // member: vehicle_sensor_property_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vehicle_sensor_property_list.size() == 0) {
      out << "vehicle_sensor_property_list: []\n";
    } else {
      out << "vehicle_sensor_property_list:\n";
      for (auto item : msg.vehicle_sensor_property_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleSensor & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::VehicleSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::VehicleSensor & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::VehicleSensor>()
{
  return "ros_etsi_its_msgs::msg::VehicleSensor";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::VehicleSensor>()
{
  return "ros_etsi_its_msgs/msg/VehicleSensor";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::VehicleSensor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::VehicleSensor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::VehicleSensor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR__TRAITS_HPP_
