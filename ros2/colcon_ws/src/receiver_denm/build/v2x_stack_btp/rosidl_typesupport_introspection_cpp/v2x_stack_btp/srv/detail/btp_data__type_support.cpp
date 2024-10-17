// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2x_stack_btp:srv/BtpData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2x_stack_btp/srv/detail/btp_data__functions.h"
#include "v2x_stack_btp/srv/detail/btp_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace v2x_stack_btp
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void BtpData_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x_stack_btp::srv::BtpData_Request(_init);
}

void BtpData_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x_stack_btp::srv::BtpData_Request *>(message_memory);
  typed_message->~BtpData_Request();
}

size_t size_function__BtpData_Request__data(const void * untyped_member)
{
  (void)untyped_member;
  return 1;
}

const void * get_const_function__BtpData_Request__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 1> *>(untyped_member);
  return &member[index];
}

void * get_function__BtpData_Request__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 1> *>(untyped_member);
  return &member[index];
}

void fetch_function__BtpData_Request__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__BtpData_Request__data(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__BtpData_Request__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__BtpData_Request__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BtpData_Request_message_member_array[13] = {
  {
    "btp_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp::srv::BtpData_Request, btp_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "source_port",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp::srv::BtpData_Request, source_port),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "destination_port",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp::srv::BtpData_Request, destination_port),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "destination_port_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp::srv::BtpData_Request, destination_port_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "transport_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp::srv::BtpData_Request, transport_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "destination",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_stack_btp::msg::GeoNetDestination>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp::srv::BtpData_Request, destination),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "its_aid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp::srv::BtpData_Request, its_aid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "hop_limit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp::srv::BtpData_Request, hop_limit),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "traffic_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_stack_btp::msg::TrafficClass>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp::srv::BtpData_Request, traffic_class),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lifetime",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp::srv::BtpData_Request, lifetime),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "repetition_interval",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp::srv::BtpData_Request, repetition_interval),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "repetition_duration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp::srv::BtpData_Request, repetition_duration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp::srv::BtpData_Request, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__BtpData_Request__data,  // size() function pointer
    get_const_function__BtpData_Request__data,  // get_const(index) function pointer
    get_function__BtpData_Request__data,  // get(index) function pointer
    fetch_function__BtpData_Request__data,  // fetch(index, &value) function pointer
    assign_function__BtpData_Request__data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BtpData_Request_message_members = {
  "v2x_stack_btp::srv",  // message namespace
  "BtpData_Request",  // message name
  13,  // number of fields
  sizeof(v2x_stack_btp::srv::BtpData_Request),
  false,  // has_any_key_member_
  BtpData_Request_message_member_array,  // message members
  BtpData_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  BtpData_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BtpData_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BtpData_Request_message_members,
  get_message_typesupport_handle_function,
  &v2x_stack_btp__srv__BtpData_Request__get_type_hash,
  &v2x_stack_btp__srv__BtpData_Request__get_type_description,
  &v2x_stack_btp__srv__BtpData_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace v2x_stack_btp


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x_stack_btp::srv::BtpData_Request>()
{
  return &::v2x_stack_btp::srv::rosidl_typesupport_introspection_cpp::BtpData_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_stack_btp, srv, BtpData_Request)() {
  return &::v2x_stack_btp::srv::rosidl_typesupport_introspection_cpp::BtpData_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__functions.h"
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace v2x_stack_btp
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void BtpData_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x_stack_btp::srv::BtpData_Response(_init);
}

void BtpData_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x_stack_btp::srv::BtpData_Response *>(message_memory);
  typed_message->~BtpData_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BtpData_Response_message_member_array[1] = {
  {
    "confirm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp::srv::BtpData_Response, confirm),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BtpData_Response_message_members = {
  "v2x_stack_btp::srv",  // message namespace
  "BtpData_Response",  // message name
  1,  // number of fields
  sizeof(v2x_stack_btp::srv::BtpData_Response),
  false,  // has_any_key_member_
  BtpData_Response_message_member_array,  // message members
  BtpData_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  BtpData_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BtpData_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BtpData_Response_message_members,
  get_message_typesupport_handle_function,
  &v2x_stack_btp__srv__BtpData_Response__get_type_hash,
  &v2x_stack_btp__srv__BtpData_Response__get_type_description,
  &v2x_stack_btp__srv__BtpData_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace v2x_stack_btp


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x_stack_btp::srv::BtpData_Response>()
{
  return &::v2x_stack_btp::srv::rosidl_typesupport_introspection_cpp::BtpData_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_stack_btp, srv, BtpData_Response)() {
  return &::v2x_stack_btp::srv::rosidl_typesupport_introspection_cpp::BtpData_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__functions.h"
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace v2x_stack_btp
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void BtpData_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x_stack_btp::srv::BtpData_Event(_init);
}

void BtpData_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x_stack_btp::srv::BtpData_Event *>(message_memory);
  typed_message->~BtpData_Event();
}

size_t size_function__BtpData_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_stack_btp::srv::BtpData_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BtpData_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_stack_btp::srv::BtpData_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__BtpData_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_stack_btp::srv::BtpData_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__BtpData_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const v2x_stack_btp::srv::BtpData_Request *>(
    get_const_function__BtpData_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<v2x_stack_btp::srv::BtpData_Request *>(untyped_value);
  value = item;
}

void assign_function__BtpData_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<v2x_stack_btp::srv::BtpData_Request *>(
    get_function__BtpData_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const v2x_stack_btp::srv::BtpData_Request *>(untyped_value);
  item = value;
}

void resize_function__BtpData_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_stack_btp::srv::BtpData_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BtpData_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_stack_btp::srv::BtpData_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BtpData_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_stack_btp::srv::BtpData_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__BtpData_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_stack_btp::srv::BtpData_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__BtpData_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const v2x_stack_btp::srv::BtpData_Response *>(
    get_const_function__BtpData_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<v2x_stack_btp::srv::BtpData_Response *>(untyped_value);
  value = item;
}

void assign_function__BtpData_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<v2x_stack_btp::srv::BtpData_Response *>(
    get_function__BtpData_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const v2x_stack_btp::srv::BtpData_Response *>(untyped_value);
  item = value;
}

void resize_function__BtpData_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_stack_btp::srv::BtpData_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BtpData_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp::srv::BtpData_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_stack_btp::srv::BtpData_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(v2x_stack_btp::srv::BtpData_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__BtpData_Event__request,  // size() function pointer
    get_const_function__BtpData_Event__request,  // get_const(index) function pointer
    get_function__BtpData_Event__request,  // get(index) function pointer
    fetch_function__BtpData_Event__request,  // fetch(index, &value) function pointer
    assign_function__BtpData_Event__request,  // assign(index, value) function pointer
    resize_function__BtpData_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_stack_btp::srv::BtpData_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(v2x_stack_btp::srv::BtpData_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__BtpData_Event__response,  // size() function pointer
    get_const_function__BtpData_Event__response,  // get_const(index) function pointer
    get_function__BtpData_Event__response,  // get(index) function pointer
    fetch_function__BtpData_Event__response,  // fetch(index, &value) function pointer
    assign_function__BtpData_Event__response,  // assign(index, value) function pointer
    resize_function__BtpData_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BtpData_Event_message_members = {
  "v2x_stack_btp::srv",  // message namespace
  "BtpData_Event",  // message name
  3,  // number of fields
  sizeof(v2x_stack_btp::srv::BtpData_Event),
  false,  // has_any_key_member_
  BtpData_Event_message_member_array,  // message members
  BtpData_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  BtpData_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BtpData_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BtpData_Event_message_members,
  get_message_typesupport_handle_function,
  &v2x_stack_btp__srv__BtpData_Event__get_type_hash,
  &v2x_stack_btp__srv__BtpData_Event__get_type_description,
  &v2x_stack_btp__srv__BtpData_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace v2x_stack_btp


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x_stack_btp::srv::BtpData_Event>()
{
  return &::v2x_stack_btp::srv::rosidl_typesupport_introspection_cpp::BtpData_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_stack_btp, srv, BtpData_Event)() {
  return &::v2x_stack_btp::srv::rosidl_typesupport_introspection_cpp::BtpData_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__functions.h"
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace v2x_stack_btp
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers BtpData_service_members = {
  "v2x_stack_btp::srv",  // service namespace
  "BtpData",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<v2x_stack_btp::srv::BtpData>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t BtpData_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BtpData_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_stack_btp::srv::BtpData_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_stack_btp::srv::BtpData_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_stack_btp::srv::BtpData_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<v2x_stack_btp::srv::BtpData>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<v2x_stack_btp::srv::BtpData>,
  &v2x_stack_btp__srv__BtpData__get_type_hash,
  &v2x_stack_btp__srv__BtpData__get_type_description,
  &v2x_stack_btp__srv__BtpData__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace v2x_stack_btp


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<v2x_stack_btp::srv::BtpData>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::v2x_stack_btp::srv::rosidl_typesupport_introspection_cpp::BtpData_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::v2x_stack_btp::srv::BtpData_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::v2x_stack_btp::srv::BtpData_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::v2x_stack_btp::srv::BtpData_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_stack_btp, srv, BtpData)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<v2x_stack_btp::srv::BtpData>();
}

#ifdef __cplusplus
}
#endif
