// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/PathDeltaTime.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/path_delta_time.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__PATH_DELTA_TIME__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__PATH_DELTA_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__PathDeltaTime__UNAVAILABLE = 0
};

/// Constant 'TEN_MILLISECONDS_IN_PAST'.
enum
{
  ros_etsi_its_msgs__msg__PathDeltaTime__TEN_MILLISECONDS_IN_PAST = 1
};

/// Struct defined in msg/PathDeltaTime in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__PathDeltaTime
{
  /// 10 ms
  uint16_t value;
} ros_etsi_its_msgs__msg__PathDeltaTime;

// Struct for a sequence of ros_etsi_its_msgs__msg__PathDeltaTime.
typedef struct ros_etsi_its_msgs__msg__PathDeltaTime__Sequence
{
  ros_etsi_its_msgs__msg__PathDeltaTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__PathDeltaTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__PATH_DELTA_TIME__STRUCT_H_
