// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/MovementEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/movement_event.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'event_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MovementEvent in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__MovementEvent
{
  rosidl_runtime_c__String event_state;
  uint16_t min_end_time;
} ros_etsi_its_msgs__msg__MovementEvent;

// Struct for a sequence of ros_etsi_its_msgs__msg__MovementEvent.
typedef struct ros_etsi_its_msgs__msg__MovementEvent__Sequence
{
  ros_etsi_its_msgs__msg__MovementEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__MovementEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_H_
