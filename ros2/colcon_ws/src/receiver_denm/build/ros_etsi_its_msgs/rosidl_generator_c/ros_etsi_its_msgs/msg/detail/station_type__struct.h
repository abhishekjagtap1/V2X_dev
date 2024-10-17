// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/StationType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/station_type.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__STATION_TYPE__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__STATION_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  ros_etsi_its_msgs__msg__StationType__UNKNOWN = 0
};

/// Constant 'PEDESTRIAN'.
enum
{
  ros_etsi_its_msgs__msg__StationType__PEDESTRIAN = 1
};

/// Constant 'CYCLIST'.
enum
{
  ros_etsi_its_msgs__msg__StationType__CYCLIST = 2
};

/// Constant 'MOPED'.
enum
{
  ros_etsi_its_msgs__msg__StationType__MOPED = 3
};

/// Constant 'MOTORCYCLE'.
enum
{
  ros_etsi_its_msgs__msg__StationType__MOTORCYCLE = 4
};

/// Constant 'PASSENGER_CAR'.
enum
{
  ros_etsi_its_msgs__msg__StationType__PASSENGER_CAR = 5
};

/// Constant 'BUS'.
enum
{
  ros_etsi_its_msgs__msg__StationType__BUS = 6
};

/// Constant 'LIGHT_TRUCK'.
enum
{
  ros_etsi_its_msgs__msg__StationType__LIGHT_TRUCK = 7
};

/// Constant 'HEAVY_TRUCK'.
enum
{
  ros_etsi_its_msgs__msg__StationType__HEAVY_TRUCK = 8
};

/// Constant 'TRAILER'.
enum
{
  ros_etsi_its_msgs__msg__StationType__TRAILER = 9
};

/// Constant 'SPECIAL_VEHICLE'.
enum
{
  ros_etsi_its_msgs__msg__StationType__SPECIAL_VEHICLE = 10
};

/// Constant 'TRAM'.
enum
{
  ros_etsi_its_msgs__msg__StationType__TRAM = 11
};

/// Constant 'ROAD_SIDE_UNIT'.
enum
{
  ros_etsi_its_msgs__msg__StationType__ROAD_SIDE_UNIT = 15
};

/// Struct defined in msg/StationType in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__StationType
{
  uint8_t value;
} ros_etsi_its_msgs__msg__StationType;

// Struct for a sequence of ros_etsi_its_msgs__msg__StationType.
typedef struct ros_etsi_its_msgs__msg__StationType__Sequence
{
  ros_etsi_its_msgs__msg__StationType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__StationType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__STATION_TYPE__STRUCT_H_
