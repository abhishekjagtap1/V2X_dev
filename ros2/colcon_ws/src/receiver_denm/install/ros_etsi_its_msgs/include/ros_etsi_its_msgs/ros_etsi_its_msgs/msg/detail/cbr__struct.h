// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/CBR.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/cbr.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CBR__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CBR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/CBR in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__CBR
{
  std_msgs__msg__Header header;
  float cbr;
} ros_etsi_its_msgs__msg__CBR;

// Struct for a sequence of ros_etsi_its_msgs__msg__CBR.
typedef struct ros_etsi_its_msgs__msg__CBR__Sequence
{
  ros_etsi_its_msgs__msg__CBR * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__CBR__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CBR__STRUCT_H_
