// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/LongitudinalAcceleration.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/longitudinal_acceleration.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__LONGITUDINAL_ACCELERATION__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__LONGITUDINAL_ACCELERATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'VALUE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__LongitudinalAcceleration__VALUE_UNAVAILABLE = 161
};

/// Constant 'CONFIDENCE_OUT_OF_RANGE'.
enum
{
  ros_etsi_its_msgs__msg__LongitudinalAcceleration__CONFIDENCE_OUT_OF_RANGE = 101
};

/// Constant 'CONFIDENCE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__LongitudinalAcceleration__CONFIDENCE_UNAVAILABLE = 102
};

/// Struct defined in msg/LongitudinalAcceleration in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__LongitudinalAcceleration
{
  /// 0.1 m/s^2
  int16_t value;
  /// 0.1 m/s^2
  uint8_t confidence;
} ros_etsi_its_msgs__msg__LongitudinalAcceleration;

// Struct for a sequence of ros_etsi_its_msgs__msg__LongitudinalAcceleration.
typedef struct ros_etsi_its_msgs__msg__LongitudinalAcceleration__Sequence
{
  ros_etsi_its_msgs__msg__LongitudinalAcceleration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__LongitudinalAcceleration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__LONGITUDINAL_ACCELERATION__STRUCT_H_
