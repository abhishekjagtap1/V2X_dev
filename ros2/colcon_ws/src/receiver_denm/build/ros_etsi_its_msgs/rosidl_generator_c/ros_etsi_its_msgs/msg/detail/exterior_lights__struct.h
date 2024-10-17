// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/ExteriorLights.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/exterior_lights.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__EXTERIOR_LIGHTS__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__EXTERIOR_LIGHTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'LOW_BEAM_HEADLIGHTS'.
enum
{
  ros_etsi_its_msgs__msg__ExteriorLights__LOW_BEAM_HEADLIGHTS = 1
};

/// Constant 'HIGH_BEAM_HEADLIGHTS'.
enum
{
  ros_etsi_its_msgs__msg__ExteriorLights__HIGH_BEAM_HEADLIGHTS = 2
};

/// Constant 'LEFT_TURN_SIGNAL'.
enum
{
  ros_etsi_its_msgs__msg__ExteriorLights__LEFT_TURN_SIGNAL = 4
};

/// Constant 'RIGHT_TURN_SIGNAL'.
enum
{
  ros_etsi_its_msgs__msg__ExteriorLights__RIGHT_TURN_SIGNAL = 8
};

/// Constant 'DAYTIME_RUNNING_LIGHTS'.
enum
{
  ros_etsi_its_msgs__msg__ExteriorLights__DAYTIME_RUNNING_LIGHTS = 16
};

/// Constant 'REVERSE_LIGHT'.
enum
{
  ros_etsi_its_msgs__msg__ExteriorLights__REVERSE_LIGHT = 32
};

/// Constant 'FOG_LIGHT'.
enum
{
  ros_etsi_its_msgs__msg__ExteriorLights__FOG_LIGHT = 64
};

/// Constant 'PARKING_LIGHTS'.
enum
{
  ros_etsi_its_msgs__msg__ExteriorLights__PARKING_LIGHTS = 128
};

/// Struct defined in msg/ExteriorLights in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__ExteriorLights
{
  uint8_t value;
} ros_etsi_its_msgs__msg__ExteriorLights;

// Struct for a sequence of ros_etsi_its_msgs__msg__ExteriorLights.
typedef struct ros_etsi_its_msgs__msg__ExteriorLights__Sequence
{
  ros_etsi_its_msgs__msg__ExteriorLights * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__ExteriorLights__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__EXTERIOR_LIGHTS__STRUCT_H_
