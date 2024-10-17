// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros_etsi_its_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/generic_lane__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros_etsi_its_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_etsi_its_msgs/msg/detail/generic_lane__struct.h"
#include "ros_etsi_its_msgs/msg/detail/generic_lane__functions.h"
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

#include "ros_etsi_its_msgs/msg/detail/connection__functions.h"  // connects_to
#include "ros_etsi_its_msgs/msg/detail/node_set_xy__functions.h"  // node_list
#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions

bool cdr_serialize_ros_etsi_its_msgs__msg__Connection(
  const ros_etsi_its_msgs__msg__Connection * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__Connection(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__Connection * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__Connection(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__Connection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__Connection(
  const ros_etsi_its_msgs__msg__Connection * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__Connection(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__Connection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, Connection)();

bool cdr_serialize_ros_etsi_its_msgs__msg__NodeSetXY(
  const ros_etsi_its_msgs__msg__NodeSetXY * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__NodeSetXY(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__NodeSetXY * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__NodeSetXY(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__NodeSetXY(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__NodeSetXY(
  const ros_etsi_its_msgs__msg__NodeSetXY * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__NodeSetXY(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__NodeSetXY(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, NodeSetXY)();


using _GenericLane__ros_msg_type = ros_etsi_its_msgs__msg__GenericLane;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_ros_etsi_its_msgs__msg__GenericLane(
  const ros_etsi_its_msgs__msg__GenericLane * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: lane_id
  {
    cdr << ros_message->lane_id;
  }

  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: ingress_approach
  {
    cdr << ros_message->ingress_approach;
  }

  // Field name: egress_approach
  {
    cdr << ros_message->egress_approach;
  }

  // Field name: lane_direction
  {
    cdr << ros_message->lane_direction;
  }

  // Field name: node_list
  {
    size_t size = ros_message->node_list.size;
    auto array_ptr = ros_message->node_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_ros_etsi_its_msgs__msg__NodeSetXY(
        &array_ptr[i], cdr);
    }
  }

  // Field name: connects_to
  {
    size_t size = ros_message->connects_to.size;
    auto array_ptr = ros_message->connects_to.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_ros_etsi_its_msgs__msg__Connection(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_deserialize_ros_etsi_its_msgs__msg__GenericLane(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__GenericLane * ros_message)
{
  // Field name: lane_id
  {
    cdr >> ros_message->lane_id;
  }

  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: ingress_approach
  {
    cdr >> ros_message->ingress_approach;
  }

  // Field name: egress_approach
  {
    cdr >> ros_message->egress_approach;
  }

  // Field name: lane_direction
  {
    cdr >> ros_message->lane_direction;
  }

  // Field name: node_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->node_list.data) {
      ros_etsi_its_msgs__msg__NodeSetXY__Sequence__fini(&ros_message->node_list);
    }
    if (!ros_etsi_its_msgs__msg__NodeSetXY__Sequence__init(&ros_message->node_list, size)) {
      fprintf(stderr, "failed to create array for field 'node_list'");
      return false;
    }
    auto array_ptr = ros_message->node_list.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_ros_etsi_its_msgs__msg__NodeSetXY(cdr, &array_ptr[i]);
    }
  }

  // Field name: connects_to
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->connects_to.data) {
      ros_etsi_its_msgs__msg__Connection__Sequence__fini(&ros_message->connects_to);
    }
    if (!ros_etsi_its_msgs__msg__Connection__Sequence__init(&ros_message->connects_to, size)) {
      fprintf(stderr, "failed to create array for field 'connects_to'");
      return false;
    }
    auto array_ptr = ros_message->connects_to.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_ros_etsi_its_msgs__msg__Connection(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_ros_etsi_its_msgs__msg__GenericLane(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GenericLane__ros_msg_type * ros_message = static_cast<const _GenericLane__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: lane_id
  {
    size_t item_size = sizeof(ros_message->lane_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);

  // Field name: ingress_approach
  {
    size_t item_size = sizeof(ros_message->ingress_approach);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: egress_approach
  {
    size_t item_size = sizeof(ros_message->egress_approach);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: lane_direction
  {
    size_t item_size = sizeof(ros_message->lane_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: node_list
  {
    size_t array_size = ros_message->node_list.size;
    auto array_ptr = ros_message->node_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__NodeSetXY(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: connects_to
  {
    size_t array_size = ros_message->connects_to.size;
    auto array_ptr = ros_message->connects_to.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__Connection(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_ros_etsi_its_msgs__msg__GenericLane(
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

  // Field name: lane_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: ingress_approach
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: egress_approach
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: lane_direction
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: node_list
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__NodeSetXY(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: connects_to
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__Connection(
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
    using DataType = ros_etsi_its_msgs__msg__GenericLane;
    is_plain =
      (
      offsetof(DataType, connects_to) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_key_ros_etsi_its_msgs__msg__GenericLane(
  const ros_etsi_its_msgs__msg__GenericLane * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: lane_id
  {
    cdr << ros_message->lane_id;
  }

  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: ingress_approach
  {
    cdr << ros_message->ingress_approach;
  }

  // Field name: egress_approach
  {
    cdr << ros_message->egress_approach;
  }

  // Field name: lane_direction
  {
    cdr << ros_message->lane_direction;
  }

  // Field name: node_list
  {
    size_t size = ros_message->node_list.size;
    auto array_ptr = ros_message->node_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_ros_etsi_its_msgs__msg__NodeSetXY(
        &array_ptr[i], cdr);
    }
  }

  // Field name: connects_to
  {
    size_t size = ros_message->connects_to.size;
    auto array_ptr = ros_message->connects_to.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_ros_etsi_its_msgs__msg__Connection(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_key_ros_etsi_its_msgs__msg__GenericLane(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GenericLane__ros_msg_type * ros_message = static_cast<const _GenericLane__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: lane_id
  {
    size_t item_size = sizeof(ros_message->lane_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);

  // Field name: ingress_approach
  {
    size_t item_size = sizeof(ros_message->ingress_approach);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: egress_approach
  {
    size_t item_size = sizeof(ros_message->egress_approach);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: lane_direction
  {
    size_t item_size = sizeof(ros_message->lane_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: node_list
  {
    size_t array_size = ros_message->node_list.size;
    auto array_ptr = ros_message->node_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__NodeSetXY(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: connects_to
  {
    size_t array_size = ros_message->connects_to.size;
    auto array_ptr = ros_message->connects_to.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__Connection(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_key_ros_etsi_its_msgs__msg__GenericLane(
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
  // Field name: lane_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: ingress_approach
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: egress_approach
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: lane_direction
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: node_list
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__NodeSetXY(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: connects_to
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__Connection(
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
    using DataType = ros_etsi_its_msgs__msg__GenericLane;
    is_plain =
      (
      offsetof(DataType, connects_to) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GenericLane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ros_etsi_its_msgs__msg__GenericLane * ros_message = static_cast<const ros_etsi_its_msgs__msg__GenericLane *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ros_etsi_its_msgs__msg__GenericLane(ros_message, cdr);
}

static bool _GenericLane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ros_etsi_its_msgs__msg__GenericLane * ros_message = static_cast<ros_etsi_its_msgs__msg__GenericLane *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ros_etsi_its_msgs__msg__GenericLane(cdr, ros_message);
}

static uint32_t _GenericLane__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_etsi_its_msgs__msg__GenericLane(
      untyped_ros_message, 0));
}

static size_t _GenericLane__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros_etsi_its_msgs__msg__GenericLane(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GenericLane = {
  "ros_etsi_its_msgs::msg",
  "GenericLane",
  _GenericLane__cdr_serialize,
  _GenericLane__cdr_deserialize,
  _GenericLane__get_serialized_size,
  _GenericLane__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GenericLane__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GenericLane,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__GenericLane__get_type_hash,
  &ros_etsi_its_msgs__msg__GenericLane__get_type_description,
  &ros_etsi_its_msgs__msg__GenericLane__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, GenericLane)() {
  return &_GenericLane__type_support;
}

#if defined(__cplusplus)
}
#endif
