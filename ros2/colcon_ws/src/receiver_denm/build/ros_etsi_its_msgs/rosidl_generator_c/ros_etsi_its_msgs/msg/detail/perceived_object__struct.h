// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/PerceivedObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/perceived_object.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__PERCEIVED_OBJECT__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__PERCEIVED_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'sensor_id_list'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'time_of_detection'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'x_distance'
// Member 'y_distance'
// Member 'z_distance'
#include "ros_etsi_its_msgs/msg/detail/object_distance_with_confidence__struct.h"
// Member 'x_speed'
// Member 'y_speed'
// Member 'z_speed'
#include "ros_etsi_its_msgs/msg/detail/speed_extended__struct.h"
// Member 'x_acceleration'
#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__struct.h"
// Member 'y_acceleration'
#include "ros_etsi_its_msgs/msg/detail/lateral_acceleration__struct.h"
// Member 'planar_object_dimension1'
// Member 'planar_object_dimension2'
// Member 'vertical_object_dimension'
#include "ros_etsi_its_msgs/msg/detail/object_dimension__struct.h"
// Member 'object_ref_point'
#include "ros_etsi_its_msgs/msg/detail/object_ref_point__struct.h"
// Member 'dynamic_status'
#include "ros_etsi_its_msgs/msg/detail/dynamic_status__struct.h"
// Member 'classification'
#include "ros_etsi_its_msgs/msg/detail/station_type__struct.h"
// Member 'matched_position'
#include "ros_etsi_its_msgs/msg/detail/matched_position__struct.h"

/// Struct defined in msg/PerceivedObject in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__PerceivedObject
{
  uint8_t object_id;
  bool has_sensor_id_list;
  rosidl_runtime_c__uint8__Sequence sensor_id_list;
  builtin_interfaces__msg__Time time_of_detection;
  /// INTEGER {oneMilliSecond(1)} (-1500..1500)
  int32_t time_of_measurement;
  /// {oneMiliSec(1)} (0..1500)
  int32_t object_age;
  /// unknown(0), onePercent(1), oneHundredPercent(100), unavailable(101)} (0..101)
  int32_t object_confidence;
  ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence x_distance;
  ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence y_distance;
  ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence z_distance;
  ros_etsi_its_msgs__msg__SpeedExtended x_speed;
  ros_etsi_its_msgs__msg__SpeedExtended y_speed;
  ros_etsi_its_msgs__msg__SpeedExtended z_speed;
  ros_etsi_its_msgs__msg__LongitudinalAcceleration x_acceleration;
  ros_etsi_its_msgs__msg__LateralAcceleration y_acceleration;
  bool has_planar_object_dimension1;
  ros_etsi_its_msgs__msg__ObjectDimension planar_object_dimension1;
  bool has_planar_object_dimension2;
  ros_etsi_its_msgs__msg__ObjectDimension planar_object_dimension2;
  bool has_vertical_object_dimension;
  ros_etsi_its_msgs__msg__ObjectDimension vertical_object_dimension;
  ros_etsi_its_msgs__msg__ObjectRefPoint object_ref_point;
  ros_etsi_its_msgs__msg__DynamicStatus dynamic_status;
  ros_etsi_its_msgs__msg__StationType classification;
  ros_etsi_its_msgs__msg__MatchedPosition matched_position;
  float object_angle;
} ros_etsi_its_msgs__msg__PerceivedObject;

// Struct for a sequence of ros_etsi_its_msgs__msg__PerceivedObject.
typedef struct ros_etsi_its_msgs__msg__PerceivedObject__Sequence
{
  ros_etsi_its_msgs__msg__PerceivedObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__PerceivedObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__PERCEIVED_OBJECT__STRUCT_H_
