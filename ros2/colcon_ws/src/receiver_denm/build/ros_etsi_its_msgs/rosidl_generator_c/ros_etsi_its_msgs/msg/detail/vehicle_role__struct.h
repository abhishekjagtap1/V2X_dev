// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/VehicleRole.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/vehicle_role.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_ROLE__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_ROLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'DEFAULT'.
enum
{
  ros_etsi_its_msgs__msg__VehicleRole__DEFAULT = 0
};

/// Constant 'PUBLIC_TRANSPORT'.
enum
{
  ros_etsi_its_msgs__msg__VehicleRole__PUBLIC_TRANSPORT = 1
};

/// Constant 'SPECIAL_TRANSPORT'.
enum
{
  ros_etsi_its_msgs__msg__VehicleRole__SPECIAL_TRANSPORT = 2
};

/// Constant 'DANGEROUS_GOODS'.
enum
{
  ros_etsi_its_msgs__msg__VehicleRole__DANGEROUS_GOODS = 3
};

/// Constant 'ROAD_WORK'.
enum
{
  ros_etsi_its_msgs__msg__VehicleRole__ROAD_WORK = 4
};

/// Constant 'RESCUE'.
enum
{
  ros_etsi_its_msgs__msg__VehicleRole__RESCUE = 5
};

/// Constant 'EMERGENCY'.
enum
{
  ros_etsi_its_msgs__msg__VehicleRole__EMERGENCY = 6
};

/// Constant 'SAFETY_CAR'.
enum
{
  ros_etsi_its_msgs__msg__VehicleRole__SAFETY_CAR = 7
};

/// Constant 'AGRICULTURE'.
enum
{
  ros_etsi_its_msgs__msg__VehicleRole__AGRICULTURE = 8
};

/// Constant 'COMMERCIAL'.
enum
{
  ros_etsi_its_msgs__msg__VehicleRole__COMMERCIAL = 9
};

/// Constant 'MILITARY'.
enum
{
  ros_etsi_its_msgs__msg__VehicleRole__MILITARY = 10
};

/// Constant 'ROAD_OPERATOR'.
enum
{
  ros_etsi_its_msgs__msg__VehicleRole__ROAD_OPERATOR = 11
};

/// Constant 'TAXI'.
enum
{
  ros_etsi_its_msgs__msg__VehicleRole__TAXI = 12
};

/// Struct defined in msg/VehicleRole in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__VehicleRole
{
  uint8_t value;
} ros_etsi_its_msgs__msg__VehicleRole;

// Struct for a sequence of ros_etsi_its_msgs__msg__VehicleRole.
typedef struct ros_etsi_its_msgs__msg__VehicleRole__Sequence
{
  ros_etsi_its_msgs__msg__VehicleRole * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__VehicleRole__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_ROLE__STRUCT_H_
