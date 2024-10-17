// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/Curvature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/curvature.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CURVATURE__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CURVATURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'VALUE_RIGHTMOST'.
enum
{
  ros_etsi_its_msgs__msg__Curvature__VALUE_RIGHTMOST = -1023
};

/// Constant 'VALUE_LEFTMOST'.
enum
{
  ros_etsi_its_msgs__msg__Curvature__VALUE_LEFTMOST = 1022
};

/// Constant 'VALUE_MIN'.
enum
{
  ros_etsi_its_msgs__msg__Curvature__VALUE_MIN = -1023
};

/// Constant 'VALUE_MAX'.
enum
{
  ros_etsi_its_msgs__msg__Curvature__VALUE_MAX = 1022
};

/// Constant 'VALUE_STRAIGHT'.
enum
{
  ros_etsi_its_msgs__msg__Curvature__VALUE_STRAIGHT = 0
};

/// Constant 'VALUE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__Curvature__VALUE_UNAVAILABLE = 1023
};

/// Constant 'CONFIDENCE_OUT_OF_RANGE'.
enum
{
  ros_etsi_its_msgs__msg__Curvature__CONFIDENCE_OUT_OF_RANGE = 6
};

/// Constant 'CONFIDENCE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__Curvature__CONFIDENCE_UNAVAILABLE = 7
};

/// Struct defined in msg/Curvature in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__Curvature
{
  /// m^-1
  int16_t value;
  uint8_t confidence;
} ros_etsi_its_msgs__msg__Curvature;

// Struct for a sequence of ros_etsi_its_msgs__msg__Curvature.
typedef struct ros_etsi_its_msgs__msg__Curvature__Sequence
{
  ros_etsi_its_msgs__msg__Curvature * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__Curvature__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CURVATURE__STRUCT_H_
