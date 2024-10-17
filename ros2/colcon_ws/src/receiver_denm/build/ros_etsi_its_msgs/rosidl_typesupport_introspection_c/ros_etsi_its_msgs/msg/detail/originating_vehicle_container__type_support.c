// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_etsi_its_msgs:msg/OriginatingVehicleContainer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_etsi_its_msgs/msg/detail/originating_vehicle_container__rosidl_typesupport_introspection_c.h"
#include "ros_etsi_its_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_etsi_its_msgs/msg/detail/originating_vehicle_container__functions.h"
#include "ros_etsi_its_msgs/msg/detail/originating_vehicle_container__struct.h"


// Include directives for member types
// Member `heading`
#include "ros_etsi_its_msgs/msg/heading.h"
// Member `heading`
#include "ros_etsi_its_msgs/msg/detail/heading__rosidl_typesupport_introspection_c.h"
// Member `speed`
#include "ros_etsi_its_msgs/msg/speed.h"
// Member `speed`
#include "ros_etsi_its_msgs/msg/detail/speed__rosidl_typesupport_introspection_c.h"
// Member `vehicle_orientation_angle`
#include "ros_etsi_its_msgs/msg/wgs84_angle.h"
// Member `vehicle_orientation_angle`
#include "ros_etsi_its_msgs/msg/detail/wgs84_angle__rosidl_typesupport_introspection_c.h"
// Member `drive_direction`
#include "ros_etsi_its_msgs/msg/drive_direction.h"
// Member `drive_direction`
#include "ros_etsi_its_msgs/msg/detail/drive_direction__rosidl_typesupport_introspection_c.h"
// Member `vehicle_length`
#include "ros_etsi_its_msgs/msg/vehicle_length.h"
// Member `vehicle_length`
#include "ros_etsi_its_msgs/msg/detail/vehicle_length__rosidl_typesupport_introspection_c.h"
// Member `vehicle_width`
#include "ros_etsi_its_msgs/msg/vehicle_width.h"
// Member `vehicle_width`
#include "ros_etsi_its_msgs/msg/detail/vehicle_width__rosidl_typesupport_introspection_c.h"
// Member `longitudinal_acceleration`
#include "ros_etsi_its_msgs/msg/longitudinal_acceleration.h"
// Member `longitudinal_acceleration`
#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__rosidl_typesupport_introspection_c.h"
// Member `yaw_rate`
#include "ros_etsi_its_msgs/msg/yaw_rate.h"
// Member `yaw_rate`
#include "ros_etsi_its_msgs/msg/detail/yaw_rate__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_etsi_its_msgs__msg__OriginatingVehicleContainer__rosidl_typesupport_introspection_c__OriginatingVehicleContainer_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer__init(message_memory);
}

void ros_etsi_its_msgs__msg__OriginatingVehicleContainer__rosidl_typesupport_introspection_c__OriginatingVehicleContainer_fini_function(void * message_memory)
{
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_etsi_its_msgs__msg__OriginatingVehicleContainer__rosidl_typesupport_introspection_c__OriginatingVehicleContainer_message_member_array[15] = {
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_vehicle_orientation_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer, has_vehicle_orientation_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_orientation_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer, vehicle_orientation_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drive_direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer, drive_direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_vehicle_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer, has_vehicle_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer, vehicle_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_vehicle_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer, has_vehicle_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer, vehicle_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_vehicle_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer, has_vehicle_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer, vehicle_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_longitudinal_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer, has_longitudinal_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longitudinal_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer, longitudinal_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_yaw_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer, has_yaw_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer, yaw_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_etsi_its_msgs__msg__OriginatingVehicleContainer__rosidl_typesupport_introspection_c__OriginatingVehicleContainer_message_members = {
  "ros_etsi_its_msgs__msg",  // message namespace
  "OriginatingVehicleContainer",  // message name
  15,  // number of fields
  sizeof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer),
  false,  // has_any_key_member_
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer__rosidl_typesupport_introspection_c__OriginatingVehicleContainer_message_member_array,  // message members
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer__rosidl_typesupport_introspection_c__OriginatingVehicleContainer_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer__rosidl_typesupport_introspection_c__OriginatingVehicleContainer_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_etsi_its_msgs__msg__OriginatingVehicleContainer__rosidl_typesupport_introspection_c__OriginatingVehicleContainer_message_type_support_handle = {
  0,
  &ros_etsi_its_msgs__msg__OriginatingVehicleContainer__rosidl_typesupport_introspection_c__OriginatingVehicleContainer_message_members,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__OriginatingVehicleContainer__get_type_hash,
  &ros_etsi_its_msgs__msg__OriginatingVehicleContainer__get_type_description,
  &ros_etsi_its_msgs__msg__OriginatingVehicleContainer__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_etsi_its_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, OriginatingVehicleContainer)() {
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer__rosidl_typesupport_introspection_c__OriginatingVehicleContainer_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, Heading)();
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer__rosidl_typesupport_introspection_c__OriginatingVehicleContainer_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, Speed)();
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer__rosidl_typesupport_introspection_c__OriginatingVehicleContainer_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, WGS84Angle)();
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer__rosidl_typesupport_introspection_c__OriginatingVehicleContainer_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, DriveDirection)();
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer__rosidl_typesupport_introspection_c__OriginatingVehicleContainer_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, VehicleLength)();
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer__rosidl_typesupport_introspection_c__OriginatingVehicleContainer_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, VehicleWidth)();
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer__rosidl_typesupport_introspection_c__OriginatingVehicleContainer_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, LongitudinalAcceleration)();
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer__rosidl_typesupport_introspection_c__OriginatingVehicleContainer_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, YawRate)();
  if (!ros_etsi_its_msgs__msg__OriginatingVehicleContainer__rosidl_typesupport_introspection_c__OriginatingVehicleContainer_message_type_support_handle.typesupport_identifier) {
    ros_etsi_its_msgs__msg__OriginatingVehicleContainer__rosidl_typesupport_introspection_c__OriginatingVehicleContainer_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_etsi_its_msgs__msg__OriginatingVehicleContainer__rosidl_typesupport_introspection_c__OriginatingVehicleContainer_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
