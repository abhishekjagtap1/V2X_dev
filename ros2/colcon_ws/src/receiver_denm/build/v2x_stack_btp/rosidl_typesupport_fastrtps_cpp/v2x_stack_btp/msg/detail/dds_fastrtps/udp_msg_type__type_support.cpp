// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x_stack_btp:msg/UDPMsgType.idl
// generated code does not contain a copyright notice
#include "v2x_stack_btp/msg/detail/udp_msg_type__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x_stack_btp/msg/detail/udp_msg_type__functions.h"
#include "v2x_stack_btp/msg/detail/udp_msg_type__struct.hpp"

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

namespace v2x_stack_btp
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack_btp
cdr_serialize(
  const v2x_stack_btp::msg::UDPMsgType & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: version
  cdr << ros_message.version;

  // Member: msg_id
  cdr << ros_message.msg_id;

  // Member: msg_length
  cdr << ros_message.msg_length;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack_btp
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2x_stack_btp::msg::UDPMsgType & ros_message)
{
  // Member: version
  cdr >> ros_message.version;

  // Member: msg_id
  cdr >> ros_message.msg_id;

  // Member: msg_length
  cdr >> ros_message.msg_length;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack_btp
get_serialized_size(
  const v2x_stack_btp::msg::UDPMsgType & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: version
  {
    size_t item_size = sizeof(ros_message.version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: msg_id
  {
    size_t item_size = sizeof(ros_message.msg_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: msg_length
  {
    size_t item_size = sizeof(ros_message.msg_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack_btp
max_serialized_size_UDPMsgType(
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

  // Member: version
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: msg_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: msg_length
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
    using DataType = v2x_stack_btp::msg::UDPMsgType;
    is_plain =
      (
      offsetof(DataType, msg_length) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack_btp
cdr_serialize_key(
  const v2x_stack_btp::msg::UDPMsgType & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: version
  cdr << ros_message.version;

  // Member: msg_id
  cdr << ros_message.msg_id;

  // Member: msg_length
  cdr << ros_message.msg_length;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack_btp
get_serialized_size_key(
  const v2x_stack_btp::msg::UDPMsgType & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: version
  {
    size_t item_size = sizeof(ros_message.version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: msg_id
  {
    size_t item_size = sizeof(ros_message.msg_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: msg_length
  {
    size_t item_size = sizeof(ros_message.msg_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack_btp
max_serialized_size_key_UDPMsgType(
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

  // Member: version
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: msg_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: msg_length
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
    using DataType = v2x_stack_btp::msg::UDPMsgType;
    is_plain =
      (
      offsetof(DataType, msg_length) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _UDPMsgType__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2x_stack_btp::msg::UDPMsgType *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UDPMsgType__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x_stack_btp::msg::UDPMsgType *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UDPMsgType__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x_stack_btp::msg::UDPMsgType *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UDPMsgType__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_UDPMsgType(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _UDPMsgType__callbacks = {
  "v2x_stack_btp::msg",
  "UDPMsgType",
  _UDPMsgType__cdr_serialize,
  _UDPMsgType__cdr_deserialize,
  _UDPMsgType__get_serialized_size,
  _UDPMsgType__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _UDPMsgType__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_UDPMsgType__callbacks,
  get_message_typesupport_handle_function,
  &v2x_stack_btp__msg__UDPMsgType__get_type_hash,
  &v2x_stack_btp__msg__UDPMsgType__get_type_description,
  &v2x_stack_btp__msg__UDPMsgType__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace v2x_stack_btp

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_v2x_stack_btp
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x_stack_btp::msg::UDPMsgType>()
{
  return &v2x_stack_btp::msg::typesupport_fastrtps_cpp::_UDPMsgType__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_stack_btp, msg, UDPMsgType)() {
  return &v2x_stack_btp::msg::typesupport_fastrtps_cpp::_UDPMsgType__handle;
}

#ifdef __cplusplus
}
#endif
