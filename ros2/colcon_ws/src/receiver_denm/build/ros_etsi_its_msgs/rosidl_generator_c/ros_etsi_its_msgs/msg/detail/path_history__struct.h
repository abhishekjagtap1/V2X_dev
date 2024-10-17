// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/PathHistory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/path_history.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__PATH_HISTORY__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__PATH_HISTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'points'
#include "ros_etsi_its_msgs/msg/detail/path_point__struct.h"

/// Struct defined in msg/PathHistory in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__PathHistory
{
  ros_etsi_its_msgs__msg__PathPoint__Sequence points;
} ros_etsi_its_msgs__msg__PathHistory;

// Struct for a sequence of ros_etsi_its_msgs__msg__PathHistory.
typedef struct ros_etsi_its_msgs__msg__PathHistory__Sequence
{
  ros_etsi_its_msgs__msg__PathHistory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__PathHistory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__PATH_HISTORY__STRUCT_H_
