// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/connection.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CONNECTION__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CONNECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Connection in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__Connection
{
  uint16_t connecting_lane;
  uint16_t remote_intersection;
  uint8_t signal_group;
  uint8_t connection_id;
} ros_etsi_its_msgs__msg__Connection;

// Struct for a sequence of ros_etsi_its_msgs__msg__Connection.
typedef struct ros_etsi_its_msgs__msg__Connection__Sequence
{
  ros_etsi_its_msgs__msg__Connection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__Connection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CONNECTION__STRUCT_H_
