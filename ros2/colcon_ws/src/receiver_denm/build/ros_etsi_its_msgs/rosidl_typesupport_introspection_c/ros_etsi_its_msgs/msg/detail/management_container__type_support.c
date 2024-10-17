// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_etsi_its_msgs:msg/ManagementContainer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_etsi_its_msgs/msg/detail/management_container__rosidl_typesupport_introspection_c.h"
#include "ros_etsi_its_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_etsi_its_msgs/msg/detail/management_container__functions.h"
#include "ros_etsi_its_msgs/msg/detail/management_container__struct.h"


// Include directives for member types
// Member `action_id`
#include "ros_etsi_its_msgs/msg/action_id.h"
// Member `action_id`
#include "ros_etsi_its_msgs/msg/detail/action_id__rosidl_typesupport_introspection_c.h"
// Member `event_position`
#include "ros_etsi_its_msgs/msg/reference_position.h"
// Member `event_position`
#include "ros_etsi_its_msgs/msg/detail/reference_position__rosidl_typesupport_introspection_c.h"
// Member `relevance_distance`
#include "ros_etsi_its_msgs/msg/relevance_distance.h"
// Member `relevance_distance`
#include "ros_etsi_its_msgs/msg/detail/relevance_distance__rosidl_typesupport_introspection_c.h"
// Member `relevance_traffic_direction`
#include "ros_etsi_its_msgs/msg/relevance_traffic_direction.h"
// Member `relevance_traffic_direction`
#include "ros_etsi_its_msgs/msg/detail/relevance_traffic_direction__rosidl_typesupport_introspection_c.h"
// Member `station_type`
#include "ros_etsi_its_msgs/msg/station_type.h"
// Member `station_type`
#include "ros_etsi_its_msgs/msg/detail/station_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_etsi_its_msgs__msg__ManagementContainer__rosidl_typesupport_introspection_c__ManagementContainer_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_etsi_its_msgs__msg__ManagementContainer__init(message_memory);
}

void ros_etsi_its_msgs__msg__ManagementContainer__rosidl_typesupport_introspection_c__ManagementContainer_fini_function(void * message_memory)
{
  ros_etsi_its_msgs__msg__ManagementContainer__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_etsi_its_msgs__msg__ManagementContainer__rosidl_typesupport_introspection_c__ManagementContainer_message_member_array[10] = {
  {
    "action_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__ManagementContainer, action_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detection_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__ManagementContainer, detection_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__ManagementContainer, reference_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "termination",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__ManagementContainer, termination),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "event_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__ManagementContainer, event_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relevance_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__ManagementContainer, relevance_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relevance_traffic_direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__ManagementContainer, relevance_traffic_direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "validity_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__ManagementContainer, validity_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transmission_interval",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__ManagementContainer, transmission_interval),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "station_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__ManagementContainer, station_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_etsi_its_msgs__msg__ManagementContainer__rosidl_typesupport_introspection_c__ManagementContainer_message_members = {
  "ros_etsi_its_msgs__msg",  // message namespace
  "ManagementContainer",  // message name
  10,  // number of fields
  sizeof(ros_etsi_its_msgs__msg__ManagementContainer),
  false,  // has_any_key_member_
  ros_etsi_its_msgs__msg__ManagementContainer__rosidl_typesupport_introspection_c__ManagementContainer_message_member_array,  // message members
  ros_etsi_its_msgs__msg__ManagementContainer__rosidl_typesupport_introspection_c__ManagementContainer_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_etsi_its_msgs__msg__ManagementContainer__rosidl_typesupport_introspection_c__ManagementContainer_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_etsi_its_msgs__msg__ManagementContainer__rosidl_typesupport_introspection_c__ManagementContainer_message_type_support_handle = {
  0,
  &ros_etsi_its_msgs__msg__ManagementContainer__rosidl_typesupport_introspection_c__ManagementContainer_message_members,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__ManagementContainer__get_type_hash,
  &ros_etsi_its_msgs__msg__ManagementContainer__get_type_description,
  &ros_etsi_its_msgs__msg__ManagementContainer__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_etsi_its_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, ManagementContainer)() {
  ros_etsi_its_msgs__msg__ManagementContainer__rosidl_typesupport_introspection_c__ManagementContainer_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, ActionID)();
  ros_etsi_its_msgs__msg__ManagementContainer__rosidl_typesupport_introspection_c__ManagementContainer_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, ReferencePosition)();
  ros_etsi_its_msgs__msg__ManagementContainer__rosidl_typesupport_introspection_c__ManagementContainer_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, RelevanceDistance)();
  ros_etsi_its_msgs__msg__ManagementContainer__rosidl_typesupport_introspection_c__ManagementContainer_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, RelevanceTrafficDirection)();
  ros_etsi_its_msgs__msg__ManagementContainer__rosidl_typesupport_introspection_c__ManagementContainer_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, StationType)();
  if (!ros_etsi_its_msgs__msg__ManagementContainer__rosidl_typesupport_introspection_c__ManagementContainer_message_type_support_handle.typesupport_identifier) {
    ros_etsi_its_msgs__msg__ManagementContainer__rosidl_typesupport_introspection_c__ManagementContainer_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_etsi_its_msgs__msg__ManagementContainer__rosidl_typesupport_introspection_c__ManagementContainer_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
