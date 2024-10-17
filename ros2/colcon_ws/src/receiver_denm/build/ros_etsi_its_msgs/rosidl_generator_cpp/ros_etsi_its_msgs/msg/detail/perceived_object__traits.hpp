// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_etsi_its_msgs:msg/PerceivedObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/perceived_object.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__PERCEIVED_OBJECT__TRAITS_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__PERCEIVED_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_etsi_its_msgs/msg/detail/perceived_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time_of_detection'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'x_distance'
// Member 'y_distance'
// Member 'z_distance'
#include "ros_etsi_its_msgs/msg/detail/object_distance_with_confidence__traits.hpp"
// Member 'x_speed'
// Member 'y_speed'
// Member 'z_speed'
#include "ros_etsi_its_msgs/msg/detail/speed_extended__traits.hpp"
// Member 'x_acceleration'
#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__traits.hpp"
// Member 'y_acceleration'
#include "ros_etsi_its_msgs/msg/detail/lateral_acceleration__traits.hpp"
// Member 'planar_object_dimension1'
// Member 'planar_object_dimension2'
// Member 'vertical_object_dimension'
#include "ros_etsi_its_msgs/msg/detail/object_dimension__traits.hpp"
// Member 'object_ref_point'
#include "ros_etsi_its_msgs/msg/detail/object_ref_point__traits.hpp"
// Member 'dynamic_status'
#include "ros_etsi_its_msgs/msg/detail/dynamic_status__traits.hpp"
// Member 'classification'
#include "ros_etsi_its_msgs/msg/detail/station_type__traits.hpp"
// Member 'matched_position'
#include "ros_etsi_its_msgs/msg/detail/matched_position__traits.hpp"

namespace ros_etsi_its_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PerceivedObject & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_id
  {
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << ", ";
  }

  // member: has_sensor_id_list
  {
    out << "has_sensor_id_list: ";
    rosidl_generator_traits::value_to_yaml(msg.has_sensor_id_list, out);
    out << ", ";
  }

  // member: sensor_id_list
  {
    if (msg.sensor_id_list.size() == 0) {
      out << "sensor_id_list: []";
    } else {
      out << "sensor_id_list: [";
      size_t pending_items = msg.sensor_id_list.size();
      for (auto item : msg.sensor_id_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: time_of_detection
  {
    out << "time_of_detection: ";
    to_flow_style_yaml(msg.time_of_detection, out);
    out << ", ";
  }

  // member: time_of_measurement
  {
    out << "time_of_measurement: ";
    rosidl_generator_traits::value_to_yaml(msg.time_of_measurement, out);
    out << ", ";
  }

  // member: object_age
  {
    out << "object_age: ";
    rosidl_generator_traits::value_to_yaml(msg.object_age, out);
    out << ", ";
  }

  // member: object_confidence
  {
    out << "object_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.object_confidence, out);
    out << ", ";
  }

  // member: x_distance
  {
    out << "x_distance: ";
    to_flow_style_yaml(msg.x_distance, out);
    out << ", ";
  }

  // member: y_distance
  {
    out << "y_distance: ";
    to_flow_style_yaml(msg.y_distance, out);
    out << ", ";
  }

  // member: z_distance
  {
    out << "z_distance: ";
    to_flow_style_yaml(msg.z_distance, out);
    out << ", ";
  }

  // member: x_speed
  {
    out << "x_speed: ";
    to_flow_style_yaml(msg.x_speed, out);
    out << ", ";
  }

  // member: y_speed
  {
    out << "y_speed: ";
    to_flow_style_yaml(msg.y_speed, out);
    out << ", ";
  }

  // member: z_speed
  {
    out << "z_speed: ";
    to_flow_style_yaml(msg.z_speed, out);
    out << ", ";
  }

  // member: x_acceleration
  {
    out << "x_acceleration: ";
    to_flow_style_yaml(msg.x_acceleration, out);
    out << ", ";
  }

  // member: y_acceleration
  {
    out << "y_acceleration: ";
    to_flow_style_yaml(msg.y_acceleration, out);
    out << ", ";
  }

  // member: has_planar_object_dimension1
  {
    out << "has_planar_object_dimension1: ";
    rosidl_generator_traits::value_to_yaml(msg.has_planar_object_dimension1, out);
    out << ", ";
  }

  // member: planar_object_dimension1
  {
    out << "planar_object_dimension1: ";
    to_flow_style_yaml(msg.planar_object_dimension1, out);
    out << ", ";
  }

  // member: has_planar_object_dimension2
  {
    out << "has_planar_object_dimension2: ";
    rosidl_generator_traits::value_to_yaml(msg.has_planar_object_dimension2, out);
    out << ", ";
  }

  // member: planar_object_dimension2
  {
    out << "planar_object_dimension2: ";
    to_flow_style_yaml(msg.planar_object_dimension2, out);
    out << ", ";
  }

  // member: has_vertical_object_dimension
  {
    out << "has_vertical_object_dimension: ";
    rosidl_generator_traits::value_to_yaml(msg.has_vertical_object_dimension, out);
    out << ", ";
  }

  // member: vertical_object_dimension
  {
    out << "vertical_object_dimension: ";
    to_flow_style_yaml(msg.vertical_object_dimension, out);
    out << ", ";
  }

  // member: object_ref_point
  {
    out << "object_ref_point: ";
    to_flow_style_yaml(msg.object_ref_point, out);
    out << ", ";
  }

  // member: dynamic_status
  {
    out << "dynamic_status: ";
    to_flow_style_yaml(msg.dynamic_status, out);
    out << ", ";
  }

  // member: classification
  {
    out << "classification: ";
    to_flow_style_yaml(msg.classification, out);
    out << ", ";
  }

  // member: matched_position
  {
    out << "matched_position: ";
    to_flow_style_yaml(msg.matched_position, out);
    out << ", ";
  }

  // member: object_angle
  {
    out << "object_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.object_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PerceivedObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << "\n";
  }

  // member: has_sensor_id_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_sensor_id_list: ";
    rosidl_generator_traits::value_to_yaml(msg.has_sensor_id_list, out);
    out << "\n";
  }

  // member: sensor_id_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensor_id_list.size() == 0) {
      out << "sensor_id_list: []\n";
    } else {
      out << "sensor_id_list:\n";
      for (auto item : msg.sensor_id_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: time_of_detection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_of_detection:\n";
    to_block_style_yaml(msg.time_of_detection, out, indentation + 2);
  }

  // member: time_of_measurement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_of_measurement: ";
    rosidl_generator_traits::value_to_yaml(msg.time_of_measurement, out);
    out << "\n";
  }

  // member: object_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_age: ";
    rosidl_generator_traits::value_to_yaml(msg.object_age, out);
    out << "\n";
  }

  // member: object_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.object_confidence, out);
    out << "\n";
  }

  // member: x_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_distance:\n";
    to_block_style_yaml(msg.x_distance, out, indentation + 2);
  }

  // member: y_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_distance:\n";
    to_block_style_yaml(msg.y_distance, out, indentation + 2);
  }

  // member: z_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_distance:\n";
    to_block_style_yaml(msg.z_distance, out, indentation + 2);
  }

  // member: x_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_speed:\n";
    to_block_style_yaml(msg.x_speed, out, indentation + 2);
  }

  // member: y_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_speed:\n";
    to_block_style_yaml(msg.y_speed, out, indentation + 2);
  }

  // member: z_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_speed:\n";
    to_block_style_yaml(msg.z_speed, out, indentation + 2);
  }

  // member: x_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_acceleration:\n";
    to_block_style_yaml(msg.x_acceleration, out, indentation + 2);
  }

  // member: y_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_acceleration:\n";
    to_block_style_yaml(msg.y_acceleration, out, indentation + 2);
  }

  // member: has_planar_object_dimension1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_planar_object_dimension1: ";
    rosidl_generator_traits::value_to_yaml(msg.has_planar_object_dimension1, out);
    out << "\n";
  }

  // member: planar_object_dimension1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planar_object_dimension1:\n";
    to_block_style_yaml(msg.planar_object_dimension1, out, indentation + 2);
  }

  // member: has_planar_object_dimension2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_planar_object_dimension2: ";
    rosidl_generator_traits::value_to_yaml(msg.has_planar_object_dimension2, out);
    out << "\n";
  }

  // member: planar_object_dimension2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planar_object_dimension2:\n";
    to_block_style_yaml(msg.planar_object_dimension2, out, indentation + 2);
  }

  // member: has_vertical_object_dimension
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_vertical_object_dimension: ";
    rosidl_generator_traits::value_to_yaml(msg.has_vertical_object_dimension, out);
    out << "\n";
  }

  // member: vertical_object_dimension
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_object_dimension:\n";
    to_block_style_yaml(msg.vertical_object_dimension, out, indentation + 2);
  }

  // member: object_ref_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_ref_point:\n";
    to_block_style_yaml(msg.object_ref_point, out, indentation + 2);
  }

  // member: dynamic_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dynamic_status:\n";
    to_block_style_yaml(msg.dynamic_status, out, indentation + 2);
  }

  // member: classification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification:\n";
    to_block_style_yaml(msg.classification, out, indentation + 2);
  }

  // member: matched_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matched_position:\n";
    to_block_style_yaml(msg.matched_position, out, indentation + 2);
  }

  // member: object_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.object_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PerceivedObject & msg, bool use_flow_style = false)
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
  const ros_etsi_its_msgs::msg::PerceivedObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_etsi_its_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_etsi_its_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_etsi_its_msgs::msg::PerceivedObject & msg)
{
  return ros_etsi_its_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_etsi_its_msgs::msg::PerceivedObject>()
{
  return "ros_etsi_its_msgs::msg::PerceivedObject";
}

template<>
inline const char * name<ros_etsi_its_msgs::msg::PerceivedObject>()
{
  return "ros_etsi_its_msgs/msg/PerceivedObject";
}

template<>
struct has_fixed_size<ros_etsi_its_msgs::msg::PerceivedObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_etsi_its_msgs::msg::PerceivedObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_etsi_its_msgs::msg::PerceivedObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__PERCEIVED_OBJECT__TRAITS_HPP_
