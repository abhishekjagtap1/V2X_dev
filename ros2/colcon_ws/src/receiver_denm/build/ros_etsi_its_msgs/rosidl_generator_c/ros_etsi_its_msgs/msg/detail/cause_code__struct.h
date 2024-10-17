// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/CauseCode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/cause_code.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAUSE_CODE__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'RESERVED'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__RESERVED = 0
};

/// Constant 'TRAFFIC_CONDITION'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__TRAFFIC_CONDITION = 1
};

/// Constant 'ACCIDENT'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__ACCIDENT = 2
};

/// Constant 'ROADWORKS'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__ROADWORKS = 3
};

/// Constant 'ADVERSE_WEATHER_CONDITIONS_ADHESION'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__ADVERSE_WEATHER_CONDITIONS_ADHESION = 4
};

/// Constant 'HAZARDOUS_LOCATION_SURFACE_CONDITION'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__HAZARDOUS_LOCATION_SURFACE_CONDITION = 9
};

/// Constant 'HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD = 10
};

/// Constant 'HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD = 11
};

/// Constant 'HUMAN_PRESENCE_ON_THE_ROAD'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__HUMAN_PRESENCE_ON_THE_ROAD = 12
};

/// Constant 'WRONG_WAY_DRIVING'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__WRONG_WAY_DRIVING = 14
};

/// Constant 'RESCUE_AND_RECOVERY_WORK_IN_PROGRESS'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__RESCUE_AND_RECOVERY_WORK_IN_PROGRESS = 15
};

/// Constant 'ADVERSE_WEATHER_CONDITIONS_EXTREME_WEATHER_CONDITION'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__ADVERSE_WEATHER_CONDITIONS_EXTREME_WEATHER_CONDITION = 17
};

/// Constant 'ADVERSE_WEATHER_CONDITIONS_VISIBILITY'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__ADVERSE_WEATHER_CONDITIONS_VISIBILITY = 18
};

/// Constant 'ADVERSE_WEATHER_CONDITIONS_PRECIPITATION'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__ADVERSE_WEATHER_CONDITIONS_PRECIPITATION = 19
};

/// Constant 'SLOW_VEHICLE'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__SLOW_VEHICLE = 26
};

/// Constant 'DANGEROUS_END_OF_QUEUE'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__DANGEROUS_END_OF_QUEUE = 27
};

/// Constant 'VEHICLE_BREAKDOWN'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__VEHICLE_BREAKDOWN = 91
};

/// Constant 'POST_CRASH'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__POST_CRASH = 92
};

/// Constant 'HUMAN_PROBLEM'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__HUMAN_PROBLEM = 93
};

/// Constant 'STATIONARY_VEHICLE'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__STATIONARY_VEHICLE = 94
};

/// Constant 'EMERGENCY_VEHICLE_APPROACHING'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__EMERGENCY_VEHICLE_APPROACHING = 95
};

/// Constant 'HAZARDOUS_LOCATION_DANGEROUS_CURVE'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__HAZARDOUS_LOCATION_DANGEROUS_CURVE = 96
};

/// Constant 'COLLISION_RISK'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__COLLISION_RISK = 97
};

/// Constant 'SIGNAL_VIOLATION'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__SIGNAL_VIOLATION = 98
};

/// Constant 'DANGEROUS_SITUATION'.
enum
{
  ros_etsi_its_msgs__msg__CauseCode__DANGEROUS_SITUATION = 99
};

/// Struct defined in msg/CauseCode in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__CauseCode
{
  uint8_t cause_code;
  uint8_t sub_cause_code;
} ros_etsi_its_msgs__msg__CauseCode;

// Struct for a sequence of ros_etsi_its_msgs__msg__CauseCode.
typedef struct ros_etsi_its_msgs__msg__CauseCode__Sequence
{
  ros_etsi_its_msgs__msg__CauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__CauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAUSE_CODE__STRUCT_H_
