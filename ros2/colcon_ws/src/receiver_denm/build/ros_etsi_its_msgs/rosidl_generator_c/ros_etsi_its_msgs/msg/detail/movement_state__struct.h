// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/movement_state.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'state_time_speed'
#include "ros_etsi_its_msgs/msg/detail/movement_event__struct.h"

/// Struct defined in msg/MovementState in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__MovementState
{
  uint8_t signal_group;
  ros_etsi_its_msgs__msg__MovementEvent__Sequence state_time_speed;
} ros_etsi_its_msgs__msg__MovementState;

// Struct for a sequence of ros_etsi_its_msgs__msg__MovementState.
typedef struct ros_etsi_its_msgs__msg__MovementState__Sequence
{
  ros_etsi_its_msgs__msg__MovementState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__MovementState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_H_
