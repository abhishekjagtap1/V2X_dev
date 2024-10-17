// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/VehicleWidth.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/vehicle_width.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_WIDTH__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_WIDTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'TEN_CENTIMETERS'.
enum
{
  ros_etsi_its_msgs__msg__VehicleWidth__TEN_CENTIMETERS = 1
};

/// Constant 'OUT_OF_RANGE'.
enum
{
  ros_etsi_its_msgs__msg__VehicleWidth__OUT_OF_RANGE = 61
};

/// Constant 'UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__VehicleWidth__UNAVAILABLE = 62
};

/// Struct defined in msg/VehicleWidth in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__VehicleWidth
{
  /// 0.1 meter
  uint8_t value;
} ros_etsi_its_msgs__msg__VehicleWidth;

// Struct for a sequence of ros_etsi_its_msgs__msg__VehicleWidth.
typedef struct ros_etsi_its_msgs__msg__VehicleWidth__Sequence
{
  ros_etsi_its_msgs__msg__VehicleWidth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__VehicleWidth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_WIDTH__STRUCT_H_
