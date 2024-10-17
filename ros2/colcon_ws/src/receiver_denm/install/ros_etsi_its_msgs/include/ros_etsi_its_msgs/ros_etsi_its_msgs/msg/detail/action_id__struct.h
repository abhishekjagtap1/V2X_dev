// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/ActionID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/action_id.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__ACTION_ID__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__ACTION_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ActionID in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__ActionID
{
  uint32_t station_id;
  uint16_t sequence_number;
} ros_etsi_its_msgs__msg__ActionID;

// Struct for a sequence of ros_etsi_its_msgs__msg__ActionID.
typedef struct ros_etsi_its_msgs__msg__ActionID__Sequence
{
  ros_etsi_its_msgs__msg__ActionID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__ActionID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__ACTION_ID__STRUCT_H_
