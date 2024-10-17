// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/AccelerationControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/acceleration_control.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__ACCELERATION_CONTROL__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__ACCELERATION_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'BRAKE_PEDAL_ENGAGED'.
enum
{
  ros_etsi_its_msgs__msg__AccelerationControl__BRAKE_PEDAL_ENGAGED = 1
};

/// Constant 'GAS_PEDAL_ENGAGED'.
enum
{
  ros_etsi_its_msgs__msg__AccelerationControl__GAS_PEDAL_ENGAGED = 2
};

/// Constant 'EMERGENCY_BRAKE_ENGAGED'.
enum
{
  ros_etsi_its_msgs__msg__AccelerationControl__EMERGENCY_BRAKE_ENGAGED = 4
};

/// Constant 'COLLISION_WARNING_ENGAGED'.
enum
{
  ros_etsi_its_msgs__msg__AccelerationControl__COLLISION_WARNING_ENGAGED = 8
};

/// Constant 'ACC_ENGAGED'.
enum
{
  ros_etsi_its_msgs__msg__AccelerationControl__ACC_ENGAGED = 16
};

/// Constant 'CRUISE_CONTROL_ENGAGED'.
enum
{
  ros_etsi_its_msgs__msg__AccelerationControl__CRUISE_CONTROL_ENGAGED = 32
};

/// Constant 'SPEED_LIMITER_ENGAGED'.
enum
{
  ros_etsi_its_msgs__msg__AccelerationControl__SPEED_LIMITER_ENGAGED = 64
};

/// Struct defined in msg/AccelerationControl in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__AccelerationControl
{
  uint8_t value;
} ros_etsi_its_msgs__msg__AccelerationControl;

// Struct for a sequence of ros_etsi_its_msgs__msg__AccelerationControl.
typedef struct ros_etsi_its_msgs__msg__AccelerationControl__Sequence
{
  ros_etsi_its_msgs__msg__AccelerationControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__AccelerationControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__ACCELERATION_CONTROL__STRUCT_H_
