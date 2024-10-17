// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_etsi_its_msgs:msg/ListOfPerceivedObjects.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_etsi_its_msgs/msg/detail/list_of_perceived_objects__rosidl_typesupport_introspection_c.h"
#include "ros_etsi_its_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_etsi_its_msgs/msg/detail/list_of_perceived_objects__functions.h"
#include "ros_etsi_its_msgs/msg/detail/list_of_perceived_objects__struct.h"


// Include directives for member types
// Member `perceived_object_container`
#include "ros_etsi_its_msgs/msg/perceived_object.h"
// Member `perceived_object_container`
#include "ros_etsi_its_msgs/msg/detail/perceived_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__ListOfPerceivedObjects_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_etsi_its_msgs__msg__ListOfPerceivedObjects__init(message_memory);
}

void ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__ListOfPerceivedObjects_fini_function(void * message_memory)
{
  ros_etsi_its_msgs__msg__ListOfPerceivedObjects__fini(message_memory);
}

size_t ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__size_function__ListOfPerceivedObjects__perceived_object_container(
  const void * untyped_member)
{
  const ros_etsi_its_msgs__msg__PerceivedObject__Sequence * member =
    (const ros_etsi_its_msgs__msg__PerceivedObject__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__get_const_function__ListOfPerceivedObjects__perceived_object_container(
  const void * untyped_member, size_t index)
{
  const ros_etsi_its_msgs__msg__PerceivedObject__Sequence * member =
    (const ros_etsi_its_msgs__msg__PerceivedObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__get_function__ListOfPerceivedObjects__perceived_object_container(
  void * untyped_member, size_t index)
{
  ros_etsi_its_msgs__msg__PerceivedObject__Sequence * member =
    (ros_etsi_its_msgs__msg__PerceivedObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__fetch_function__ListOfPerceivedObjects__perceived_object_container(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_etsi_its_msgs__msg__PerceivedObject * item =
    ((const ros_etsi_its_msgs__msg__PerceivedObject *)
    ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__get_const_function__ListOfPerceivedObjects__perceived_object_container(untyped_member, index));
  ros_etsi_its_msgs__msg__PerceivedObject * value =
    (ros_etsi_its_msgs__msg__PerceivedObject *)(untyped_value);
  *value = *item;
}

void ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__assign_function__ListOfPerceivedObjects__perceived_object_container(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_etsi_its_msgs__msg__PerceivedObject * item =
    ((ros_etsi_its_msgs__msg__PerceivedObject *)
    ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__get_function__ListOfPerceivedObjects__perceived_object_container(untyped_member, index));
  const ros_etsi_its_msgs__msg__PerceivedObject * value =
    (const ros_etsi_its_msgs__msg__PerceivedObject *)(untyped_value);
  *item = *value;
}

bool ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__resize_function__ListOfPerceivedObjects__perceived_object_container(
  void * untyped_member, size_t size)
{
  ros_etsi_its_msgs__msg__PerceivedObject__Sequence * member =
    (ros_etsi_its_msgs__msg__PerceivedObject__Sequence *)(untyped_member);
  ros_etsi_its_msgs__msg__PerceivedObject__Sequence__fini(member);
  return ros_etsi_its_msgs__msg__PerceivedObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__ListOfPerceivedObjects_message_member_array[1] = {
  {
    "perceived_object_container",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__ListOfPerceivedObjects, perceived_object_container),  // bytes offset in struct
    NULL,  // default value
    ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__size_function__ListOfPerceivedObjects__perceived_object_container,  // size() function pointer
    ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__get_const_function__ListOfPerceivedObjects__perceived_object_container,  // get_const(index) function pointer
    ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__get_function__ListOfPerceivedObjects__perceived_object_container,  // get(index) function pointer
    ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__fetch_function__ListOfPerceivedObjects__perceived_object_container,  // fetch(index, &value) function pointer
    ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__assign_function__ListOfPerceivedObjects__perceived_object_container,  // assign(index, value) function pointer
    ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__resize_function__ListOfPerceivedObjects__perceived_object_container  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__ListOfPerceivedObjects_message_members = {
  "ros_etsi_its_msgs__msg",  // message namespace
  "ListOfPerceivedObjects",  // message name
  1,  // number of fields
  sizeof(ros_etsi_its_msgs__msg__ListOfPerceivedObjects),
  false,  // has_any_key_member_
  ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__ListOfPerceivedObjects_message_member_array,  // message members
  ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__ListOfPerceivedObjects_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__ListOfPerceivedObjects_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__ListOfPerceivedObjects_message_type_support_handle = {
  0,
  &ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__ListOfPerceivedObjects_message_members,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__ListOfPerceivedObjects__get_type_hash,
  &ros_etsi_its_msgs__msg__ListOfPerceivedObjects__get_type_description,
  &ros_etsi_its_msgs__msg__ListOfPerceivedObjects__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_etsi_its_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, ListOfPerceivedObjects)() {
  ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__ListOfPerceivedObjects_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, PerceivedObject)();
  if (!ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__ListOfPerceivedObjects_message_type_support_handle.typesupport_identifier) {
    ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__ListOfPerceivedObjects_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_etsi_its_msgs__msg__ListOfPerceivedObjects__rosidl_typesupport_introspection_c__ListOfPerceivedObjects_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
