// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_etsi_its_msgs:msg/RelevanceTrafficDirection.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_etsi_its_msgs/msg/detail/relevance_traffic_direction__functions.h"
#include "ros_etsi_its_msgs/msg/detail/relevance_traffic_direction__struct.hpp"
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

void RelevanceTrafficDirection_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_etsi_its_msgs::msg::RelevanceTrafficDirection(_init);
}

void RelevanceTrafficDirection_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_etsi_its_msgs::msg::RelevanceTrafficDirection *>(message_memory);
  typed_message->~RelevanceTrafficDirection();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RelevanceTrafficDirection_message_member_array[1] = {
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs::msg::RelevanceTrafficDirection, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RelevanceTrafficDirection_message_members = {
  "ros_etsi_its_msgs::msg",  // message namespace
  "RelevanceTrafficDirection",  // message name
  1,  // number of fields
  sizeof(ros_etsi_its_msgs::msg::RelevanceTrafficDirection),
  false,  // has_any_key_member_
  RelevanceTrafficDirection_message_member_array,  // message members
  RelevanceTrafficDirection_init_function,  // function to initialize message memory (memory has to be allocated)
  RelevanceTrafficDirection_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RelevanceTrafficDirection_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RelevanceTrafficDirection_message_members,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__RelevanceTrafficDirection__get_type_hash,
  &ros_etsi_its_msgs__msg__RelevanceTrafficDirection__get_type_description,
  &ros_etsi_its_msgs__msg__RelevanceTrafficDirection__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros_etsi_its_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_etsi_its_msgs::msg::RelevanceTrafficDirection>()
{
  return &::ros_etsi_its_msgs::msg::rosidl_typesupport_introspection_cpp::RelevanceTrafficDirection_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_etsi_its_msgs, msg, RelevanceTrafficDirection)() {
  return &::ros_etsi_its_msgs::msg::rosidl_typesupport_introspection_cpp::RelevanceTrafficDirection_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
