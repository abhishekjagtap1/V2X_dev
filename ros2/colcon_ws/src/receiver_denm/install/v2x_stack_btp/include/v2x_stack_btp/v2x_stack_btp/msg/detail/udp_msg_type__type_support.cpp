// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2x_stack_btp:msg/UDPMsgType.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2x_stack_btp/msg/detail/udp_msg_type__functions.h"
#include "v2x_stack_btp/msg/detail/udp_msg_type__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace v2x_stack_btp
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void UDPMsgType_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x_stack_btp::msg::UDPMsgType(_init);
}

void UDPMsgType_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x_stack_btp::msg::UDPMsgType *>(message_memory);
  typed_message->~UDPMsgType();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember UDPMsgType_message_member_array[3] = {
  {
    "version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp::msg::UDPMsgType, version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "msg_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp::msg::UDPMsgType, msg_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "msg_length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp::msg::UDPMsgType, msg_length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers UDPMsgType_message_members = {
  "v2x_stack_btp::msg",  // message namespace
  "UDPMsgType",  // message name
  3,  // number of fields
  sizeof(v2x_stack_btp::msg::UDPMsgType),
  false,  // has_any_key_member_
  UDPMsgType_message_member_array,  // message members
  UDPMsgType_init_function,  // function to initialize message memory (memory has to be allocated)
  UDPMsgType_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t UDPMsgType_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &UDPMsgType_message_members,
  get_message_typesupport_handle_function,
  &v2x_stack_btp__msg__UDPMsgType__get_type_hash,
  &v2x_stack_btp__msg__UDPMsgType__get_type_description,
  &v2x_stack_btp__msg__UDPMsgType__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace v2x_stack_btp


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x_stack_btp::msg::UDPMsgType>()
{
  return &::v2x_stack_btp::msg::rosidl_typesupport_introspection_cpp::UDPMsgType_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_stack_btp, msg, UDPMsgType)() {
  return &::v2x_stack_btp::msg::rosidl_typesupport_introspection_cpp::UDPMsgType_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
