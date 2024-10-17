// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/NodeSetXY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/node_set_xy.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__NODE_SET_XY__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__NODE_SET_XY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'pos'
#include "ros_etsi_its_msgs/msg/detail/reference_position__struct.h"

/// Struct defined in msg/NodeSetXY in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__NodeSetXY
{
  float x;
  float y;
  ros_etsi_its_msgs__msg__ReferencePosition pos;
} ros_etsi_its_msgs__msg__NodeSetXY;

// Struct for a sequence of ros_etsi_its_msgs__msg__NodeSetXY.
typedef struct ros_etsi_its_msgs__msg__NodeSetXY__Sequence
{
  ros_etsi_its_msgs__msg__NodeSetXY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__NodeSetXY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__NODE_SET_XY__STRUCT_H_
