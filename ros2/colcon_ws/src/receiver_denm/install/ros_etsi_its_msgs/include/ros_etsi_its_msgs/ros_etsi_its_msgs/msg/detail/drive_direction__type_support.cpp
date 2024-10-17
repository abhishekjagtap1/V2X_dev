// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_etsi_its_msgs:msg/DriveDirection.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_etsi_its_msgs/msg/detail/drive_direction__functions.h"
#include "ros_etsi_its_msgs/msg/detail/drive_direction__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros_etsi_its_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DriveDirection_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_etsi_its_msgs::msg::DriveDirection(_init);
}

void DriveDirection_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_etsi_its_msgs::msg::DriveDirection *>(message_memory);
  typed_message->~DriveDirection();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DriveDirection_message_member_array[1] = {
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs::msg::DriveDirection, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DriveDirection_message_members = {
  "ros_etsi_its_msgs::msg",  // message namespace
  "DriveDirection",  // message name
  1,  // number of fields
  sizeof(ros_etsi_its_msgs::msg::DriveDirection),
  false,  // has_any_key_member_
  DriveDirection_message_member_array,  // message members
  DriveDirection_init_function,  // function to initialize message memory (memory has to be allocated)
  DriveDirection_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DriveDirection_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DriveDirection_message_members,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__DriveDirection__get_type_hash,
  &ros_etsi_its_msgs__msg__DriveDirection__get_type_description,
  &ros_etsi_its_msgs__msg__DriveDirection__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros_etsi_its_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_etsi_its_msgs::msg::DriveDirection>()
{
  return &::ros_etsi_its_msgs::msg::rosidl_typesupport_introspection_cpp::DriveDirection_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_etsi_its_msgs, msg, DriveDirection)() {
  return &::ros_etsi_its_msgs::msg::rosidl_typesupport_introspection_cpp::DriveDirection_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
