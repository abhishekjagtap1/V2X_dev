// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/LocationContainer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/location_container.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__LOCATION_CONTAINER__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__LOCATION_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ROAD_TYPE_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES'.
enum
{
  ros_etsi_its_msgs__msg__LocationContainer__ROAD_TYPE_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES = 0
};

/// Constant 'ROAD_TYPE_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES'.
enum
{
  ros_etsi_its_msgs__msg__LocationContainer__ROAD_TYPE_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES = 1
};

/// Constant 'ROAD_TYPE_NON_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES'.
enum
{
  ros_etsi_its_msgs__msg__LocationContainer__ROAD_TYPE_NON_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES = 2
};

/// Constant 'ROAD_TYPE_NON_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES'.
enum
{
  ros_etsi_its_msgs__msg__LocationContainer__ROAD_TYPE_NON_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES = 3
};

/// Constant 'ROAD_TYPE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__LocationContainer__ROAD_TYPE_UNAVAILABLE = 255
};

// Include directives for member types
// Member 'event_speed'
#include "ros_etsi_its_msgs/msg/detail/speed__struct.h"
// Member 'event_position_heading'
#include "ros_etsi_its_msgs/msg/detail/heading__struct.h"
// Member 'traces'
#include "ros_etsi_its_msgs/msg/detail/path_history__struct.h"

/// Struct defined in msg/LocationContainer in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__LocationContainer
{
  ros_etsi_its_msgs__msg__Speed event_speed;
  ros_etsi_its_msgs__msg__Heading event_position_heading;
  ros_etsi_its_msgs__msg__PathHistory__Sequence traces;
  uint8_t road_type;
} ros_etsi_its_msgs__msg__LocationContainer;

// Struct for a sequence of ros_etsi_its_msgs__msg__LocationContainer.
typedef struct ros_etsi_its_msgs__msg__LocationContainer__Sequence
{
  ros_etsi_its_msgs__msg__LocationContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__LocationContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__LOCATION_CONTAINER__STRUCT_H_
