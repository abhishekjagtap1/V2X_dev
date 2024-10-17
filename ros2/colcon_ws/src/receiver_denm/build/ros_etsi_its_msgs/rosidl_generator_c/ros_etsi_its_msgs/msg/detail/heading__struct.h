// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/Heading.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/heading.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__HEADING__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__HEADING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'VALUE_NORTH'.
enum
{
  ros_etsi_its_msgs__msg__Heading__VALUE_NORTH = 0
};

/// Constant 'VALUE_EAST'.
enum
{
  ros_etsi_its_msgs__msg__Heading__VALUE_EAST = 900
};

/// Constant 'VALUE_SOUTH'.
enum
{
  ros_etsi_its_msgs__msg__Heading__VALUE_SOUTH = 1800
};

/// Constant 'VALUE_WEST'.
enum
{
  ros_etsi_its_msgs__msg__Heading__VALUE_WEST = 2700
};

/// Constant 'VALUE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__Heading__VALUE_UNAVAILABLE = 3601
};

/// Constant 'CONFIDENCE_ZERO_POINT_ONE_DEGREE'.
enum
{
  ros_etsi_its_msgs__msg__Heading__CONFIDENCE_ZERO_POINT_ONE_DEGREE = 1
};

/// Constant 'CONFIDENCE_ONE_DEGREE'.
enum
{
  ros_etsi_its_msgs__msg__Heading__CONFIDENCE_ONE_DEGREE = 10
};

/// Constant 'CONFIDENCE_OUT_OF_RANGE'.
enum
{
  ros_etsi_its_msgs__msg__Heading__CONFIDENCE_OUT_OF_RANGE = 126
};

/// Constant 'CONFIDENCE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__Heading__CONFIDENCE_UNAVAILABLE = 127
};

/// Struct defined in msg/Heading in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__Heading
{
  /// 0.1 degree
  uint16_t value;
  uint8_t confidence;
} ros_etsi_its_msgs__msg__Heading;

// Struct for a sequence of ros_etsi_its_msgs__msg__Heading.
typedef struct ros_etsi_its_msgs__msg__Heading__Sequence
{
  ros_etsi_its_msgs__msg__Heading * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__Heading__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__HEADING__STRUCT_H_
