// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/SituationContainer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/situation_container.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__SITUATION_CONTAINER__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__SITUATION_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'information_quality'
#include "ros_etsi_its_msgs/msg/detail/information_quality__struct.h"
// Member 'event_type'
// Member 'linked_cause'
#include "ros_etsi_its_msgs/msg/detail/cause_code__struct.h"
// Member 'event_history'
#include "ros_etsi_its_msgs/msg/detail/event_point__struct.h"

/// Struct defined in msg/SituationContainer in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__SituationContainer
{
  ros_etsi_its_msgs__msg__InformationQuality information_quality;
  ros_etsi_its_msgs__msg__CauseCode event_type;
  bool has_linked_cause;
  ros_etsi_its_msgs__msg__CauseCode linked_cause;
  ros_etsi_its_msgs__msg__EventPoint__Sequence event_history;
} ros_etsi_its_msgs__msg__SituationContainer;

// Struct for a sequence of ros_etsi_its_msgs__msg__SituationContainer.
typedef struct ros_etsi_its_msgs__msg__SituationContainer__Sequence
{
  ros_etsi_its_msgs__msg__SituationContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__SituationContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__SITUATION_CONTAINER__STRUCT_H_
