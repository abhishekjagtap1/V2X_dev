// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/Speed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/speed.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPEED__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'VALUE_STANDSTILL'.
enum
{
  ros_etsi_its_msgs__msg__Speed__VALUE_STANDSTILL = 0
};

/// Constant 'VALUE_ONE_CENTIMETER_PER_SECOND'.
enum
{
  ros_etsi_its_msgs__msg__Speed__VALUE_ONE_CENTIMETER_PER_SECOND = 1
};

/// Constant 'VALUE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__Speed__VALUE_UNAVAILABLE = 16383
};

/// Constant 'CONFIDENCE_OUT_OF_RANGE'.
enum
{
  ros_etsi_its_msgs__msg__Speed__CONFIDENCE_OUT_OF_RANGE = 126
};

/// Constant 'CONFIDENCE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__Speed__CONFIDENCE_UNAVAILABLE = 127
};

/// Struct defined in msg/Speed in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__Speed
{
  /// 0.01 m/s
  uint16_t value;
  /// 0.01 m/s
  uint8_t confidence;
} ros_etsi_its_msgs__msg__Speed;

// Struct for a sequence of ros_etsi_its_msgs__msg__Speed.
typedef struct ros_etsi_its_msgs__msg__Speed__Sequence
{
  ros_etsi_its_msgs__msg__Speed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__Speed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPEED__STRUCT_H_
