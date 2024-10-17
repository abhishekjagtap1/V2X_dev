// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/VehicleSensorProperty.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/vehicle_sensor_property.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR_PROPERTY__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR_PROPERTY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/VehicleSensorProperty in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__VehicleSensorProperty
{
  /// zeroPointOneMeter(1), oneMeter(10)} (0..10000)
  int32_t range;
  /// zeroPointOneDegree(1), oneDegree(10), unavailable(3601)} (0..3601)
  int32_t horizontal_opening_angle_start;
  /// zeroPointOneDegree(1), oneDegree(10), unavailable(3601)} (0..3601)
  int32_t horizontal_opening_angle_end;
  bool has_vertical_opening_angle_start;
  /// zeroPointOneDegree(1), oneDegree(10), unavailable(3601)} (0..3601)
  int32_t vertical_opening_angle_start;
  bool has_vertical_opening_angle_end;
  /// zeroPointOneDegree(1), oneDegree(10), unavailable(3601)} (0..3601)
  int32_t vertical_opening_angle_end;
} ros_etsi_its_msgs__msg__VehicleSensorProperty;

// Struct for a sequence of ros_etsi_its_msgs__msg__VehicleSensorProperty.
typedef struct ros_etsi_its_msgs__msg__VehicleSensorProperty__Sequence
{
  ros_etsi_its_msgs__msg__VehicleSensorProperty * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__VehicleSensorProperty__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR_PROPERTY__STRUCT_H_
