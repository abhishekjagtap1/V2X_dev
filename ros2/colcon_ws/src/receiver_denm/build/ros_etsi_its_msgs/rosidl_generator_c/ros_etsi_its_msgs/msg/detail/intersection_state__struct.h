// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/IntersectionState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/intersection_state.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'states'
#include "ros_etsi_its_msgs/msg/detail/movement_state__struct.h"

/// Struct defined in msg/IntersectionState in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__IntersectionState
{
  uint16_t id;
  uint8_t revision;
  uint16_t status;
  ros_etsi_its_msgs__msg__MovementState__Sequence states;
} ros_etsi_its_msgs__msg__IntersectionState;

// Struct for a sequence of ros_etsi_its_msgs__msg__IntersectionState.
typedef struct ros_etsi_its_msgs__msg__IntersectionState__Sequence
{
  ros_etsi_its_msgs__msg__IntersectionState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__IntersectionState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_H_
