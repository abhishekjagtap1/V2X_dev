// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_stack_btp:msg/GeoNetDestination.idl
// generated code does not contain a copyright notice
#include "v2x_stack_btp/msg/detail/geo_net_destination__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_stack_btp/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_stack_btp/msg/detail/geo_net_destination__struct.h"
#include "v2x_stack_btp/msg/detail/geo_net_destination__functions.h"
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

#include "v2x_stack_btp/msg/detail/geo_net_area__functions.h"  // area

// forward declare type support functions

bool cdr_serialize_v2x_stack_btp__msg__GeoNetArea(
  const v2x_stack_btp__msg__GeoNetArea * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_v2x_stack_btp__msg__GeoNetArea(
  eprosima::fastcdr::Cdr & cdr,
  v2x_stack_btp__msg__GeoNetArea * ros_message);

size_t get_serialized_size_v2x_stack_btp__msg__GeoNetArea(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_stack_btp__msg__GeoNetArea(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_v2x_stack_btp__msg__GeoNetArea(
  const v2x_stack_btp__msg__GeoNetArea * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_v2x_stack_btp__msg__GeoNetArea(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_v2x_stack_btp__msg__GeoNetArea(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_stack_btp, msg, GeoNetArea)();


using _GeoNetDestination__ros_msg_type = v2x_stack_btp__msg__GeoNetDestination;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
bool cdr_serialize_v2x_stack_btp__msg__GeoNetDestination(
  const v2x_stack_btp__msg__GeoNetDestination * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: address
  {
    size_t size = 8;
    auto array_ptr = ros_message->address;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: area
  {
    cdr_serialize_v2x_stack_btp__msg__GeoNetArea(
      &ros_message->area, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
bool cdr_deserialize_v2x_stack_btp__msg__GeoNetDestination(
  eprosima::fastcdr::Cdr & cdr,
  v2x_stack_btp__msg__GeoNetDestination * ros_message)
{
  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: address
  {
    size_t size = 8;
    auto array_ptr = ros_message->address;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: area
  {
    cdr_deserialize_v2x_stack_btp__msg__GeoNetArea(cdr, &ros_message->area);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
size_t get_serialized_size_v2x_stack_btp__msg__GeoNetDestination(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GeoNetDestination__ros_msg_type * ros_message = static_cast<const _GeoNetDestination__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: address
  {
    size_t array_size = 8;
    auto array_ptr = ros_message->address;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: area
  current_alignment += get_serialized_size_v2x_stack_btp__msg__GeoNetArea(
    &(ros_message->area), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
size_t max_serialized_size_v2x_stack_btp__msg__GeoNetDestination(
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

  // Field name: type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: address
  {
    size_t array_size = 8;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: area
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_stack_btp__msg__GeoNetArea(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2x_stack_btp__msg__GeoNetDestination;
    is_plain =
      (
      offsetof(DataType, area) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
bool cdr_serialize_key_v2x_stack_btp__msg__GeoNetDestination(
  const v2x_stack_btp__msg__GeoNetDestination * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: address
  {
    size_t size = 8;
    auto array_ptr = ros_message->address;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: area
  {
    cdr_serialize_key_v2x_stack_btp__msg__GeoNetArea(
      &ros_message->area, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
size_t get_serialized_size_key_v2x_stack_btp__msg__GeoNetDestination(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GeoNetDestination__ros_msg_type * ros_message = static_cast<const _GeoNetDestination__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: address
  {
    size_t array_size = 8;
    auto array_ptr = ros_message->address;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: area
  current_alignment += get_serialized_size_key_v2x_stack_btp__msg__GeoNetArea(
    &(ros_message->area), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
size_t max_serialized_size_key_v2x_stack_btp__msg__GeoNetDestination(
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
  // Field name: type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: address
  {
    size_t array_size = 8;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: area
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_v2x_stack_btp__msg__GeoNetArea(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2x_stack_btp__msg__GeoNetDestination;
    is_plain =
      (
      offsetof(DataType, area) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GeoNetDestination__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const v2x_stack_btp__msg__GeoNetDestination * ros_message = static_cast<const v2x_stack_btp__msg__GeoNetDestination *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_v2x_stack_btp__msg__GeoNetDestination(ros_message, cdr);
}

static bool _GeoNetDestination__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  v2x_stack_btp__msg__GeoNetDestination * ros_message = static_cast<v2x_stack_btp__msg__GeoNetDestination *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_v2x_stack_btp__msg__GeoNetDestination(cdr, ros_message);
}

static uint32_t _GeoNetDestination__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_stack_btp__msg__GeoNetDestination(
      untyped_ros_message, 0));
}

static size_t _GeoNetDestination__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_stack_btp__msg__GeoNetDestination(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GeoNetDestination = {
  "v2x_stack_btp::msg",
  "GeoNetDestination",
  _GeoNetDestination__cdr_serialize,
  _GeoNetDestination__cdr_deserialize,
  _GeoNetDestination__get_serialized_size,
  _GeoNetDestination__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GeoNetDestination__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GeoNetDestination,
  get_message_typesupport_handle_function,
  &v2x_stack_btp__msg__GeoNetDestination__get_type_hash,
  &v2x_stack_btp__msg__GeoNetDestination__get_type_description,
  &v2x_stack_btp__msg__GeoNetDestination__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_stack_btp, msg, GeoNetDestination)() {
  return &_GeoNetDestination__type_support;
}

#if defined(__cplusplus)
}
#endif
