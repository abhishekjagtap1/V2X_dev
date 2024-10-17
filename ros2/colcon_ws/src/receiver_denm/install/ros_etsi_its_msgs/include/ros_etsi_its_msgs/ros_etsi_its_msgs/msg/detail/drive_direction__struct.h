// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/DriveDirection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/drive_direction.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__DRIVE_DIRECTION__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__DRIVE_DIRECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'FORWARD'.
enum
{
  ros_etsi_its_msgs__msg__DriveDirection__FORWARD = 0
};

/// Constant 'BACKWARD'.
enum
{
  ros_etsi_its_msgs__msg__DriveDirection__BACKWARD = 1
};

/// Constant 'UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__DriveDirection__UNAVAILABLE = 2
};

/// Struct defined in msg/DriveDirection in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__DriveDirection
{
  uint8_t value;
} ros_etsi_its_msgs__msg__DriveDirection;

// Struct for a sequence of ros_etsi_its_msgs__msg__DriveDirection.
typedef struct ros_etsi_its_msgs__msg__DriveDirection__Sequence
{
  ros_etsi_its_msgs__msg__DriveDirection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__DriveDirection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__DRIVE_DIRECTION__STRUCT_H_
