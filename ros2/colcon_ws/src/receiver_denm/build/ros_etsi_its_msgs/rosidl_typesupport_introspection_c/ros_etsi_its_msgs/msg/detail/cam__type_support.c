// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_etsi_its_msgs:msg/CAM.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_etsi_its_msgs/msg/detail/cam__rosidl_typesupport_introspection_c.h"
#include "ros_etsi_its_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_etsi_its_msgs/msg/detail/cam__functions.h"
#include "ros_etsi_its_msgs/msg/detail/cam__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `its_header`
#include "ros_etsi_its_msgs/msg/its_pdu_header.h"
// Member `its_header`
#include "ros_etsi_its_msgs/msg/detail/its_pdu_header__rosidl_typesupport_introspection_c.h"
// Member `station_type`
#include "ros_etsi_its_msgs/msg/station_type.h"
// Member `station_type`
#include "ros_etsi_its_msgs/msg/detail/station_type__rosidl_typesupport_introspection_c.h"
// Member `reference_position`
#include "ros_etsi_its_msgs/msg/reference_position.h"
// Member `reference_position`
#include "ros_etsi_its_msgs/msg/detail/reference_position__rosidl_typesupport_introspection_c.h"
// Member `high_frequency_container`
#include "ros_etsi_its_msgs/msg/basic_vehicle_container_high_frequency.h"
// Member `high_frequency_container`
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_high_frequency__rosidl_typesupport_introspection_c.h"
// Member `low_frequency_container`
#include "ros_etsi_its_msgs/msg/basic_vehicle_container_low_frequency.h"
// Member `low_frequency_container`
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_low_frequency__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_etsi_its_msgs__msg__CAM__rosidl_typesupport_introspection_c__CAM_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_etsi_its_msgs__msg__CAM__init(message_memory);
}

void ros_etsi_its_msgs__msg__CAM__rosidl_typesupport_introspection_c__CAM_fini_function(void * message_memory)
{
  ros_etsi_its_msgs__msg__CAM__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_etsi_its_msgs__msg__CAM__rosidl_typesupport_introspection_c__CAM_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__CAM, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "its_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__CAM, its_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "generation_delta_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__CAM, generation_delta_time),  // bytes offset in struct
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
    offsetof(ros_etsi_its_msgs__msg__CAM, station_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__CAM, reference_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "high_frequency_container",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__CAM, high_frequency_container),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_low_frequency_container",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__CAM, has_low_frequency_container),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "low_frequency_container",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__CAM, low_frequency_container),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_etsi_its_msgs__msg__CAM__rosidl_typesupport_introspection_c__CAM_message_members = {
  "ros_etsi_its_msgs__msg",  // message namespace
  "CAM",  // message name
  8,  // number of fields
  sizeof(ros_etsi_its_msgs__msg__CAM),
  false,  // has_any_key_member_
  ros_etsi_its_msgs__msg__CAM__rosidl_typesupport_introspection_c__CAM_message_member_array,  // message members
  ros_etsi_its_msgs__msg__CAM__rosidl_typesupport_introspection_c__CAM_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_etsi_its_msgs__msg__CAM__rosidl_typesupport_introspection_c__CAM_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_etsi_its_msgs__msg__CAM__rosidl_typesupport_introspection_c__CAM_message_type_support_handle = {
  0,
  &ros_etsi_its_msgs__msg__CAM__rosidl_typesupport_introspection_c__CAM_message_members,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__CAM__get_type_hash,
  &ros_etsi_its_msgs__msg__CAM__get_type_description,
  &ros_etsi_its_msgs__msg__CAM__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_etsi_its_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, CAM)() {
  ros_etsi_its_msgs__msg__CAM__rosidl_typesupport_introspection_c__CAM_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ros_etsi_its_msgs__msg__CAM__rosidl_typesupport_introspection_c__CAM_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, ItsPduHeader)();
  ros_etsi_its_msgs__msg__CAM__rosidl_typesupport_introspection_c__CAM_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, StationType)();
  ros_etsi_its_msgs__msg__CAM__rosidl_typesupport_introspection_c__CAM_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, ReferencePosition)();
  ros_etsi_its_msgs__msg__CAM__rosidl_typesupport_introspection_c__CAM_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, BasicVehicleContainerHighFrequency)();
  ros_etsi_its_msgs__msg__CAM__rosidl_typesupport_introspection_c__CAM_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, BasicVehicleContainerLowFrequency)();
  if (!ros_etsi_its_msgs__msg__CAM__rosidl_typesupport_introspection_c__CAM_message_type_support_handle.typesupport_identifier) {
    ros_etsi_its_msgs__msg__CAM__rosidl_typesupport_introspection_c__CAM_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_etsi_its_msgs__msg__CAM__rosidl_typesupport_introspection_c__CAM_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
