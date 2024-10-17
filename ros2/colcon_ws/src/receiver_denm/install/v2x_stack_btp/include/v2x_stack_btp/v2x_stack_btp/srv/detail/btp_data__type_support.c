// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_stack_btp:srv/BtpData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_stack_btp/srv/detail/btp_data__rosidl_typesupport_introspection_c.h"
#include "v2x_stack_btp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_stack_btp/srv/detail/btp_data__functions.h"
#include "v2x_stack_btp/srv/detail/btp_data__struct.h"


// Include directives for member types
// Member `destination`
#include "v2x_stack_btp/msg/geo_net_destination.h"
// Member `destination`
#include "v2x_stack_btp/msg/detail/geo_net_destination__rosidl_typesupport_introspection_c.h"
// Member `traffic_class`
#include "v2x_stack_btp/msg/traffic_class.h"
// Member `traffic_class`
#include "v2x_stack_btp/msg/detail/traffic_class__rosidl_typesupport_introspection_c.h"
// Member `lifetime`
// Member `repetition_interval`
// Member `repetition_duration`
#include "builtin_interfaces/msg/duration.h"
// Member `lifetime`
// Member `repetition_interval`
// Member `repetition_duration`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__BtpData_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_stack_btp__srv__BtpData_Request__init(message_memory);
}

void v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__BtpData_Request_fini_function(void * message_memory)
{
  v2x_stack_btp__srv__BtpData_Request__fini(message_memory);
}

size_t v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__size_function__BtpData_Request__data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 1;
}

const void * v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__get_const_function__BtpData_Request__data(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__get_function__BtpData_Request__data(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__fetch_function__BtpData_Request__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__get_const_function__BtpData_Request__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__assign_function__BtpData_Request__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__get_function__BtpData_Request__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__BtpData_Request_message_member_array[13] = {
  {
    "btp_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__srv__BtpData_Request, btp_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source_port",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__srv__BtpData_Request, source_port),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "destination_port",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__srv__BtpData_Request, destination_port),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "destination_port_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__srv__BtpData_Request, destination_port_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transport_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__srv__BtpData_Request, transport_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "destination",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__srv__BtpData_Request, destination),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "its_aid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__srv__BtpData_Request, its_aid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hop_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__srv__BtpData_Request, hop_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "traffic_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__srv__BtpData_Request, traffic_class),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lifetime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__srv__BtpData_Request, lifetime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "repetition_interval",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__srv__BtpData_Request, repetition_interval),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "repetition_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__srv__BtpData_Request, repetition_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__srv__BtpData_Request, data),  // bytes offset in struct
    NULL,  // default value
    v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__size_function__BtpData_Request__data,  // size() function pointer
    v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__get_const_function__BtpData_Request__data,  // get_const(index) function pointer
    v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__get_function__BtpData_Request__data,  // get(index) function pointer
    v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__fetch_function__BtpData_Request__data,  // fetch(index, &value) function pointer
    v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__assign_function__BtpData_Request__data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__BtpData_Request_message_members = {
  "v2x_stack_btp__srv",  // message namespace
  "BtpData_Request",  // message name
  13,  // number of fields
  sizeof(v2x_stack_btp__srv__BtpData_Request),
  false,  // has_any_key_member_
  v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__BtpData_Request_message_member_array,  // message members
  v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__BtpData_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__BtpData_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__BtpData_Request_message_type_support_handle = {
  0,
  &v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__BtpData_Request_message_members,
  get_message_typesupport_handle_function,
  &v2x_stack_btp__srv__BtpData_Request__get_type_hash,
  &v2x_stack_btp__srv__BtpData_Request__get_type_description,
  &v2x_stack_btp__srv__BtpData_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_stack_btp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack_btp, srv, BtpData_Request)() {
  v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__BtpData_Request_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack_btp, msg, GeoNetDestination)();
  v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__BtpData_Request_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack_btp, msg, TrafficClass)();
  v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__BtpData_Request_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__BtpData_Request_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__BtpData_Request_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__BtpData_Request_message_type_support_handle.typesupport_identifier) {
    v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__BtpData_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__BtpData_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__rosidl_typesupport_introspection_c.h"
// already included above
// #include "v2x_stack_btp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__functions.h"
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void v2x_stack_btp__srv__BtpData_Response__rosidl_typesupport_introspection_c__BtpData_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_stack_btp__srv__BtpData_Response__init(message_memory);
}

void v2x_stack_btp__srv__BtpData_Response__rosidl_typesupport_introspection_c__BtpData_Response_fini_function(void * message_memory)
{
  v2x_stack_btp__srv__BtpData_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_stack_btp__srv__BtpData_Response__rosidl_typesupport_introspection_c__BtpData_Response_message_member_array[1] = {
  {
    "confirm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__srv__BtpData_Response, confirm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_stack_btp__srv__BtpData_Response__rosidl_typesupport_introspection_c__BtpData_Response_message_members = {
  "v2x_stack_btp__srv",  // message namespace
  "BtpData_Response",  // message name
  1,  // number of fields
  sizeof(v2x_stack_btp__srv__BtpData_Response),
  false,  // has_any_key_member_
  v2x_stack_btp__srv__BtpData_Response__rosidl_typesupport_introspection_c__BtpData_Response_message_member_array,  // message members
  v2x_stack_btp__srv__BtpData_Response__rosidl_typesupport_introspection_c__BtpData_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_stack_btp__srv__BtpData_Response__rosidl_typesupport_introspection_c__BtpData_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_stack_btp__srv__BtpData_Response__rosidl_typesupport_introspection_c__BtpData_Response_message_type_support_handle = {
  0,
  &v2x_stack_btp__srv__BtpData_Response__rosidl_typesupport_introspection_c__BtpData_Response_message_members,
  get_message_typesupport_handle_function,
  &v2x_stack_btp__srv__BtpData_Response__get_type_hash,
  &v2x_stack_btp__srv__BtpData_Response__get_type_description,
  &v2x_stack_btp__srv__BtpData_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_stack_btp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack_btp, srv, BtpData_Response)() {
  if (!v2x_stack_btp__srv__BtpData_Response__rosidl_typesupport_introspection_c__BtpData_Response_message_type_support_handle.typesupport_identifier) {
    v2x_stack_btp__srv__BtpData_Response__rosidl_typesupport_introspection_c__BtpData_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_stack_btp__srv__BtpData_Response__rosidl_typesupport_introspection_c__BtpData_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__rosidl_typesupport_introspection_c.h"
// already included above
// #include "v2x_stack_btp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__functions.h"
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "v2x_stack_btp/srv/btp_data.h"
// Member `request`
// Member `response`
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__BtpData_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_stack_btp__srv__BtpData_Event__init(message_memory);
}

void v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__BtpData_Event_fini_function(void * message_memory)
{
  v2x_stack_btp__srv__BtpData_Event__fini(message_memory);
}

size_t v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__size_function__BtpData_Event__request(
  const void * untyped_member)
{
  const v2x_stack_btp__srv__BtpData_Request__Sequence * member =
    (const v2x_stack_btp__srv__BtpData_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__get_const_function__BtpData_Event__request(
  const void * untyped_member, size_t index)
{
  const v2x_stack_btp__srv__BtpData_Request__Sequence * member =
    (const v2x_stack_btp__srv__BtpData_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__get_function__BtpData_Event__request(
  void * untyped_member, size_t index)
{
  v2x_stack_btp__srv__BtpData_Request__Sequence * member =
    (v2x_stack_btp__srv__BtpData_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__fetch_function__BtpData_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_stack_btp__srv__BtpData_Request * item =
    ((const v2x_stack_btp__srv__BtpData_Request *)
    v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__get_const_function__BtpData_Event__request(untyped_member, index));
  v2x_stack_btp__srv__BtpData_Request * value =
    (v2x_stack_btp__srv__BtpData_Request *)(untyped_value);
  *value = *item;
}

void v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__assign_function__BtpData_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_stack_btp__srv__BtpData_Request * item =
    ((v2x_stack_btp__srv__BtpData_Request *)
    v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__get_function__BtpData_Event__request(untyped_member, index));
  const v2x_stack_btp__srv__BtpData_Request * value =
    (const v2x_stack_btp__srv__BtpData_Request *)(untyped_value);
  *item = *value;
}

bool v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__resize_function__BtpData_Event__request(
  void * untyped_member, size_t size)
{
  v2x_stack_btp__srv__BtpData_Request__Sequence * member =
    (v2x_stack_btp__srv__BtpData_Request__Sequence *)(untyped_member);
  v2x_stack_btp__srv__BtpData_Request__Sequence__fini(member);
  return v2x_stack_btp__srv__BtpData_Request__Sequence__init(member, size);
}

size_t v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__size_function__BtpData_Event__response(
  const void * untyped_member)
{
  const v2x_stack_btp__srv__BtpData_Response__Sequence * member =
    (const v2x_stack_btp__srv__BtpData_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__get_const_function__BtpData_Event__response(
  const void * untyped_member, size_t index)
{
  const v2x_stack_btp__srv__BtpData_Response__Sequence * member =
    (const v2x_stack_btp__srv__BtpData_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__get_function__BtpData_Event__response(
  void * untyped_member, size_t index)
{
  v2x_stack_btp__srv__BtpData_Response__Sequence * member =
    (v2x_stack_btp__srv__BtpData_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__fetch_function__BtpData_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_stack_btp__srv__BtpData_Response * item =
    ((const v2x_stack_btp__srv__BtpData_Response *)
    v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__get_const_function__BtpData_Event__response(untyped_member, index));
  v2x_stack_btp__srv__BtpData_Response * value =
    (v2x_stack_btp__srv__BtpData_Response *)(untyped_value);
  *value = *item;
}

void v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__assign_function__BtpData_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_stack_btp__srv__BtpData_Response * item =
    ((v2x_stack_btp__srv__BtpData_Response *)
    v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__get_function__BtpData_Event__response(untyped_member, index));
  const v2x_stack_btp__srv__BtpData_Response * value =
    (const v2x_stack_btp__srv__BtpData_Response *)(untyped_value);
  *item = *value;
}

bool v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__resize_function__BtpData_Event__response(
  void * untyped_member, size_t size)
{
  v2x_stack_btp__srv__BtpData_Response__Sequence * member =
    (v2x_stack_btp__srv__BtpData_Response__Sequence *)(untyped_member);
  v2x_stack_btp__srv__BtpData_Response__Sequence__fini(member);
  return v2x_stack_btp__srv__BtpData_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__BtpData_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__srv__BtpData_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(v2x_stack_btp__srv__BtpData_Event, request),  // bytes offset in struct
    NULL,  // default value
    v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__size_function__BtpData_Event__request,  // size() function pointer
    v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__get_const_function__BtpData_Event__request,  // get_const(index) function pointer
    v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__get_function__BtpData_Event__request,  // get(index) function pointer
    v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__fetch_function__BtpData_Event__request,  // fetch(index, &value) function pointer
    v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__assign_function__BtpData_Event__request,  // assign(index, value) function pointer
    v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__resize_function__BtpData_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(v2x_stack_btp__srv__BtpData_Event, response),  // bytes offset in struct
    NULL,  // default value
    v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__size_function__BtpData_Event__response,  // size() function pointer
    v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__get_const_function__BtpData_Event__response,  // get_const(index) function pointer
    v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__get_function__BtpData_Event__response,  // get(index) function pointer
    v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__fetch_function__BtpData_Event__response,  // fetch(index, &value) function pointer
    v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__assign_function__BtpData_Event__response,  // assign(index, value) function pointer
    v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__resize_function__BtpData_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__BtpData_Event_message_members = {
  "v2x_stack_btp__srv",  // message namespace
  "BtpData_Event",  // message name
  3,  // number of fields
  sizeof(v2x_stack_btp__srv__BtpData_Event),
  false,  // has_any_key_member_
  v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__BtpData_Event_message_member_array,  // message members
  v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__BtpData_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__BtpData_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__BtpData_Event_message_type_support_handle = {
  0,
  &v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__BtpData_Event_message_members,
  get_message_typesupport_handle_function,
  &v2x_stack_btp__srv__BtpData_Event__get_type_hash,
  &v2x_stack_btp__srv__BtpData_Event__get_type_description,
  &v2x_stack_btp__srv__BtpData_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_stack_btp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack_btp, srv, BtpData_Event)() {
  v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__BtpData_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__BtpData_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack_btp, srv, BtpData_Request)();
  v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__BtpData_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack_btp, srv, BtpData_Response)();
  if (!v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__BtpData_Event_message_type_support_handle.typesupport_identifier) {
    v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__BtpData_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__BtpData_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "v2x_stack_btp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers v2x_stack_btp__srv__detail__btp_data__rosidl_typesupport_introspection_c__BtpData_service_members = {
  "v2x_stack_btp__srv",  // service namespace
  "BtpData",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // v2x_stack_btp__srv__detail__btp_data__rosidl_typesupport_introspection_c__BtpData_Request_message_type_support_handle,
  NULL,  // response message
  // v2x_stack_btp__srv__detail__btp_data__rosidl_typesupport_introspection_c__BtpData_Response_message_type_support_handle
  NULL  // event_message
  // v2x_stack_btp__srv__detail__btp_data__rosidl_typesupport_introspection_c__BtpData_Response_message_type_support_handle
};


static rosidl_service_type_support_t v2x_stack_btp__srv__detail__btp_data__rosidl_typesupport_introspection_c__BtpData_service_type_support_handle = {
  0,
  &v2x_stack_btp__srv__detail__btp_data__rosidl_typesupport_introspection_c__BtpData_service_members,
  get_service_typesupport_handle_function,
  &v2x_stack_btp__srv__BtpData_Request__rosidl_typesupport_introspection_c__BtpData_Request_message_type_support_handle,
  &v2x_stack_btp__srv__BtpData_Response__rosidl_typesupport_introspection_c__BtpData_Response_message_type_support_handle,
  &v2x_stack_btp__srv__BtpData_Event__rosidl_typesupport_introspection_c__BtpData_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    v2x_stack_btp,
    srv,
    BtpData
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    v2x_stack_btp,
    srv,
    BtpData
  ),
  &v2x_stack_btp__srv__BtpData__get_type_hash,
  &v2x_stack_btp__srv__BtpData__get_type_description,
  &v2x_stack_btp__srv__BtpData__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack_btp, srv, BtpData_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack_btp, srv, BtpData_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack_btp, srv, BtpData_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_stack_btp
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack_btp, srv, BtpData)(void) {
  if (!v2x_stack_btp__srv__detail__btp_data__rosidl_typesupport_introspection_c__BtpData_service_type_support_handle.typesupport_identifier) {
    v2x_stack_btp__srv__detail__btp_data__rosidl_typesupport_introspection_c__BtpData_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)v2x_stack_btp__srv__detail__btp_data__rosidl_typesupport_introspection_c__BtpData_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack_btp, srv, BtpData_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack_btp, srv, BtpData_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack_btp, srv, BtpData_Event)()->data;
  }

  return &v2x_stack_btp__srv__detail__btp_data__rosidl_typesupport_introspection_c__BtpData_service_type_support_handle;
}
