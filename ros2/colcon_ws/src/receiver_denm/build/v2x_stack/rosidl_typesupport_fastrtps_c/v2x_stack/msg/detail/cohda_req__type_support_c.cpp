// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_stack:msg/CohdaReq.idl
// generated code does not contain a copyright notice
#include "v2x_stack/msg/detail/cohda_req__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_stack/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_stack/msg/detail/cohda_req__struct.h"
#include "v2x_stack/msg/detail/cohda_req__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _CohdaReq__ros_msg_type = v2x_stack__msg__CohdaReq;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
bool cdr_serialize_v2x_stack__msg__CohdaReq(
  const v2x_stack__msg__CohdaReq * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
bool cdr_deserialize_v2x_stack__msg__CohdaReq(
  eprosima::fastcdr::Cdr & cdr,
  v2x_stack__msg__CohdaReq * ros_message)
{
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
size_t get_serialized_size_v2x_stack__msg__CohdaReq(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CohdaReq__ros_msg_type * ros_message = static_cast<const _CohdaReq__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
size_t max_serialized_size_v2x_stack__msg__CohdaReq(
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

  // Field name: structure_needs_at_least_one_member
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
    using DataType = v2x_stack__msg__CohdaReq;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
bool cdr_serialize_key_v2x_stack__msg__CohdaReq(
  const v2x_stack__msg__CohdaReq * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
size_t get_serialized_size_key_v2x_stack__msg__CohdaReq(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CohdaReq__ros_msg_type * ros_message = static_cast<const _CohdaReq__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
size_t max_serialized_size_key_v2x_stack__msg__CohdaReq(
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
  // Field name: structure_needs_at_least_one_member
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
    using DataType = v2x_stack__msg__CohdaReq;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _CohdaReq__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const v2x_stack__msg__CohdaReq * ros_message = static_cast<const v2x_stack__msg__CohdaReq *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_v2x_stack__msg__CohdaReq(ros_message, cdr);
}

static bool _CohdaReq__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  v2x_stack__msg__CohdaReq * ros_message = static_cast<v2x_stack__msg__CohdaReq *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_v2x_stack__msg__CohdaReq(cdr, ros_message);
}

static uint32_t _CohdaReq__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_stack__msg__CohdaReq(
      untyped_ros_message, 0));
}

static size_t _CohdaReq__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_stack__msg__CohdaReq(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CohdaReq = {
  "v2x_stack::msg",
  "CohdaReq",
  _CohdaReq__cdr_serialize,
  _CohdaReq__cdr_deserialize,
  _CohdaReq__get_serialized_size,
  _CohdaReq__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CohdaReq__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CohdaReq,
  get_message_typesupport_handle_function,
  &v2x_stack__msg__CohdaReq__get_type_hash,
  &v2x_stack__msg__CohdaReq__get_type_description,
  &v2x_stack__msg__CohdaReq__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_stack, msg, CohdaReq)() {
  return &_CohdaReq__type_support;
}

#if defined(__cplusplus)
}
#endif
