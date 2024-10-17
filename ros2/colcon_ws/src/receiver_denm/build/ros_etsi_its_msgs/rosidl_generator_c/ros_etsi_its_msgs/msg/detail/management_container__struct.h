// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/ManagementContainer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/management_container.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__MANAGEMENT_CONTAINER__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__MANAGEMENT_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'TERMINATION_CANCELLATION'.
enum
{
  ros_etsi_its_msgs__msg__ManagementContainer__TERMINATION_CANCELLATION = 0
};

/// Constant 'TERMINATION_NEGATION'.
enum
{
  ros_etsi_its_msgs__msg__ManagementContainer__TERMINATION_NEGATION = 1
};

/// Constant 'TERMINATION_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__ManagementContainer__TERMINATION_UNAVAILABLE = 255
};

/// Constant 'TRANSMISSION_INTERVAL_ONE_MILLISECOND'.
enum
{
  ros_etsi_its_msgs__msg__ManagementContainer__TRANSMISSION_INTERVAL_ONE_MILLISECOND = 1ul
};

/// Constant 'TRANSMISSION_INTERVAL_TEN_SECONDS'.
enum
{
  ros_etsi_its_msgs__msg__ManagementContainer__TRANSMISSION_INTERVAL_TEN_SECONDS = 10000ul
};

/// Constant 'TRANSMISSION_INTERVAL_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__ManagementContainer__TRANSMISSION_INTERVAL_UNAVAILABLE = 0ul
};

/// Constant 'VALIDITY_DURATION_DEFAULT'.
enum
{
  ros_etsi_its_msgs__msg__ManagementContainer__VALIDITY_DURATION_DEFAULT = 600ul
};

/// Constant 'VALIDITY_DURATION_TIME_OF_DETECTION'.
enum
{
  ros_etsi_its_msgs__msg__ManagementContainer__VALIDITY_DURATION_TIME_OF_DETECTION = 0ul
};

/// Constant 'VALIDITY_DURATION_ONE_SECOND_AFTER_DETECTION'.
enum
{
  ros_etsi_its_msgs__msg__ManagementContainer__VALIDITY_DURATION_ONE_SECOND_AFTER_DETECTION = 1ul
};

// Include directives for member types
// Member 'action_id'
#include "ros_etsi_its_msgs/msg/detail/action_id__struct.h"
// Member 'event_position'
#include "ros_etsi_its_msgs/msg/detail/reference_position__struct.h"
// Member 'relevance_distance'
#include "ros_etsi_its_msgs/msg/detail/relevance_distance__struct.h"
// Member 'relevance_traffic_direction'
#include "ros_etsi_its_msgs/msg/detail/relevance_traffic_direction__struct.h"
// Member 'station_type'
#include "ros_etsi_its_msgs/msg/detail/station_type__struct.h"

/// Struct defined in msg/ManagementContainer in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__ManagementContainer
{
  ros_etsi_its_msgs__msg__ActionID action_id;
  /// ms since 2004
  uint64_t detection_time;
  /// ms since 2004
  uint64_t reference_time;
  uint8_t termination;
  ros_etsi_its_msgs__msg__ReferencePosition event_position;
  ros_etsi_its_msgs__msg__RelevanceDistance relevance_distance;
  ros_etsi_its_msgs__msg__RelevanceTrafficDirection relevance_traffic_direction;
  /// seconds
  uint32_t validity_duration;
  /// milliseconds
  uint32_t transmission_interval;
  ros_etsi_its_msgs__msg__StationType station_type;
} ros_etsi_its_msgs__msg__ManagementContainer;

// Struct for a sequence of ros_etsi_its_msgs__msg__ManagementContainer.
typedef struct ros_etsi_its_msgs__msg__ManagementContainer__Sequence
{
  ros_etsi_its_msgs__msg__ManagementContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__ManagementContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__MANAGEMENT_CONTAINER__STRUCT_H_
