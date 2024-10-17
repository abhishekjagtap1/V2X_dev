// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/WGS84Angle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/wgs84_angle.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__WGS84_ANGLE__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__WGS84_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'WGS84NORTH'.
enum
{
  ros_etsi_its_msgs__msg__WGS84Angle__WGS84NORTH = 0
};

/// Constant 'WGS84EAST'.
enum
{
  ros_etsi_its_msgs__msg__WGS84Angle__WGS84EAST = 900
};

/// Constant 'WGS84SOUTH'.
enum
{
  ros_etsi_its_msgs__msg__WGS84Angle__WGS84SOUTH = 2700
};

/// Constant 'VALUE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__WGS84Angle__VALUE_UNAVAILABLE = 3601
};

/// Constant 'CONFIDENCE_ZERO_POINT_ONE_DEGREE'.
enum
{
  ros_etsi_its_msgs__msg__WGS84Angle__CONFIDENCE_ZERO_POINT_ONE_DEGREE = 1
};

/// Constant 'CONFIDENCE_ONE_DEGREE'.
enum
{
  ros_etsi_its_msgs__msg__WGS84Angle__CONFIDENCE_ONE_DEGREE = 10
};

/// Constant 'CONFIDENCE_OUT_OF_RANGE'.
enum
{
  ros_etsi_its_msgs__msg__WGS84Angle__CONFIDENCE_OUT_OF_RANGE = 126
};

/// Constant 'CONFIDENCE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__WGS84Angle__CONFIDENCE_UNAVAILABLE = 127
};

/// Struct defined in msg/WGS84Angle in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__WGS84Angle
{
  /// decidegree
  int16_t value;
  uint8_t confidence;
} ros_etsi_its_msgs__msg__WGS84Angle;

// Struct for a sequence of ros_etsi_its_msgs__msg__WGS84Angle.
typedef struct ros_etsi_its_msgs__msg__WGS84Angle__Sequence
{
  ros_etsi_its_msgs__msg__WGS84Angle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__WGS84Angle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__WGS84_ANGLE__STRUCT_H_
