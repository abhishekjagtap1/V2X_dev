// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x_stack:msg/TrafficClass.idl
// generated code does not contain a copyright notice
#include "v2x_stack/msg/detail/traffic_class__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x_stack/msg/detail/traffic_class__functions.h"
#include "v2x_stack/msg/detail/traffic_class__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace v2x_stack
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack
cdr_serialize(
  const v2x_stack::msg::TrafficClass & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: store_carry_forwarding
  cdr << (ros_message.store_carry_forwarding ? true : false);

  // Member: channel_offloading
  cdr << (ros_message.channel_offloading ? true : false);

  // Member: id
  cdr << ros_message.id;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2x_stack::msg::TrafficClass & ros_message)
{
  // Member: store_carry_forwarding
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.store_carry_forwarding = tmp ? true : false;
  }

  // Member: channel_offloading
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.channel_offloading = tmp ? true : false;
  }

  // Member: id
  cdr >> ros_message.id;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack
get_serialized_size(
  const v2x_stack::msg::TrafficClass & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: store_carry_forwarding
  {
    size_t item_size = sizeof(ros_message.store_carry_forwarding);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: channel_offloading
  {
    size_t item_size = sizeof(ros_message.channel_offloading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack
max_serialized_size_TrafficClass(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: store_carry_forwarding
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: channel_offloading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2x_stack::msg::TrafficClass;
    is_plain =
      (
      offsetof(DataType, id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack
cdr_serialize_key(
  const v2x_stack::msg::TrafficClass & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: store_carry_forwarding
  cdr << (ros_message.store_carry_forwarding ? true : false);

  // Member: channel_offloading
  cdr << (ros_message.channel_offloading ? true : false);

  // Member: id
  cdr << ros_message.id;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack
get_serialized_size_key(
  const v2x_stack::msg::TrafficClass & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: store_carry_forwarding
  {
    size_t item_size = sizeof(ros_message.store_carry_forwarding);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: channel_offloading
  {
    size_t item_size = sizeof(ros_message.channel_offloading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack
max_serialized_size_key_TrafficClass(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: store_carry_forwarding
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: channel_offloading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2x_stack::msg::TrafficClass;
    is_plain =
      (
      offsetof(DataType, id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _TrafficClass__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2x_stack::msg::TrafficClass *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrafficClass__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x_stack::msg::TrafficClass *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrafficClass__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x_stack::msg::TrafficClass *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrafficClass__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TrafficClass(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TrafficClass__callbacks = {
  "v2x_stack::msg",
  "TrafficClass",
  _TrafficClass__cdr_serialize,
  _TrafficClass__cdr_deserialize,
  _TrafficClass__get_serialized_size,
  _TrafficClass__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TrafficClass__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrafficClass__callbacks,
  get_message_typesupport_handle_function,
  &v2x_stack__msg__TrafficClass__get_type_hash,
  &v2x_stack__msg__TrafficClass__get_type_description,
  &v2x_stack__msg__TrafficClass__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace v2x_stack

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_v2x_stack
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x_stack::msg::TrafficClass>()
{
  return &v2x_stack::msg::typesupport_fastrtps_cpp::_TrafficClass__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_stack, msg, TrafficClass)() {
  return &v2x_stack::msg::typesupport_fastrtps_cpp::_TrafficClass__handle;
}

#ifdef __cplusplus
}
#endif
