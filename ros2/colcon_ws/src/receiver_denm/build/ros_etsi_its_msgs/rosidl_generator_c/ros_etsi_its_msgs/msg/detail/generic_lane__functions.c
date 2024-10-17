// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_etsi_its_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/generic_lane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `node_list`
#include "ros_etsi_its_msgs/msg/detail/node_set_xy__functions.h"
// Member `connects_to`
#include "ros_etsi_its_msgs/msg/detail/connection__functions.h"

bool
ros_etsi_its_msgs__msg__GenericLane__init(ros_etsi_its_msgs__msg__GenericLane * msg)
{
  if (!msg) {
    return false;
  }
  // lane_id
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    ros_etsi_its_msgs__msg__GenericLane__fini(msg);
    return false;
  }
  // ingress_approach
  // egress_approach
  // lane_direction
  // node_list
  if (!ros_etsi_its_msgs__msg__NodeSetXY__Sequence__init(&msg->node_list, 0)) {
    ros_etsi_its_msgs__msg__GenericLane__fini(msg);
    return false;
  }
  // connects_to
  if (!ros_etsi_its_msgs__msg__Connection__Sequence__init(&msg->connects_to, 0)) {
    ros_etsi_its_msgs__msg__GenericLane__fini(msg);
    return false;
  }
  return true;
}

void
ros_etsi_its_msgs__msg__GenericLane__fini(ros_etsi_its_msgs__msg__GenericLane * msg)
{
  if (!msg) {
    return;
  }
  // lane_id
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // ingress_approach
  // egress_approach
  // lane_direction
  // node_list
  ros_etsi_its_msgs__msg__NodeSetXY__Sequence__fini(&msg->node_list);
  // connects_to
  ros_etsi_its_msgs__msg__Connection__Sequence__fini(&msg->connects_to);
}

bool
ros_etsi_its_msgs__msg__GenericLane__are_equal(const ros_etsi_its_msgs__msg__GenericLane * lhs, const ros_etsi_its_msgs__msg__GenericLane * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_id
  if (lhs->lane_id != rhs->lane_id) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // ingress_approach
  if (lhs->ingress_approach != rhs->ingress_approach) {
    return false;
  }
  // egress_approach
  if (lhs->egress_approach != rhs->egress_approach) {
    return false;
  }
  // lane_direction
  if (lhs->lane_direction != rhs->lane_direction) {
    return false;
  }
  // node_list
  if (!ros_etsi_its_msgs__msg__NodeSetXY__Sequence__are_equal(
      &(lhs->node_list), &(rhs->node_list)))
  {
    return false;
  }
  // connects_to
  if (!ros_etsi_its_msgs__msg__Connection__Sequence__are_equal(
      &(lhs->connects_to), &(rhs->connects_to)))
  {
    return false;
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__GenericLane__copy(
  const ros_etsi_its_msgs__msg__GenericLane * input,
  ros_etsi_its_msgs__msg__GenericLane * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_id
  output->lane_id = input->lane_id;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // ingress_approach
  output->ingress_approach = input->ingress_approach;
  // egress_approach
  output->egress_approach = input->egress_approach;
  // lane_direction
  output->lane_direction = input->lane_direction;
  // node_list
  if (!ros_etsi_its_msgs__msg__NodeSetXY__Sequence__copy(
      &(input->node_list), &(output->node_list)))
  {
    return false;
  }
  // connects_to
  if (!ros_etsi_its_msgs__msg__Connection__Sequence__copy(
      &(input->connects_to), &(output->connects_to)))
  {
    return false;
  }
  return true;
}

ros_etsi_its_msgs__msg__GenericLane *
ros_etsi_its_msgs__msg__GenericLane__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__GenericLane * msg = (ros_etsi_its_msgs__msg__GenericLane *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__GenericLane), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_etsi_its_msgs__msg__GenericLane));
  bool success = ros_etsi_its_msgs__msg__GenericLane__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_etsi_its_msgs__msg__GenericLane__destroy(ros_etsi_its_msgs__msg__GenericLane * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_etsi_its_msgs__msg__GenericLane__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_etsi_its_msgs__msg__GenericLane__Sequence__init(ros_etsi_its_msgs__msg__GenericLane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__GenericLane * data = NULL;

  if (size) {
    data = (ros_etsi_its_msgs__msg__GenericLane *)allocator.zero_allocate(size, sizeof(ros_etsi_its_msgs__msg__GenericLane), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_etsi_its_msgs__msg__GenericLane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_etsi_its_msgs__msg__GenericLane__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_etsi_its_msgs__msg__GenericLane__Sequence__fini(ros_etsi_its_msgs__msg__GenericLane__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_etsi_its_msgs__msg__GenericLane__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_etsi_its_msgs__msg__GenericLane__Sequence *
ros_etsi_its_msgs__msg__GenericLane__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__GenericLane__Sequence * array = (ros_etsi_its_msgs__msg__GenericLane__Sequence *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__GenericLane__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_etsi_its_msgs__msg__GenericLane__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_etsi_its_msgs__msg__GenericLane__Sequence__destroy(ros_etsi_its_msgs__msg__GenericLane__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_etsi_its_msgs__msg__GenericLane__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_etsi_its_msgs__msg__GenericLane__Sequence__are_equal(const ros_etsi_its_msgs__msg__GenericLane__Sequence * lhs, const ros_etsi_its_msgs__msg__GenericLane__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_etsi_its_msgs__msg__GenericLane__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__GenericLane__Sequence__copy(
  const ros_etsi_its_msgs__msg__GenericLane__Sequence * input,
  ros_etsi_its_msgs__msg__GenericLane__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_etsi_its_msgs__msg__GenericLane);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_etsi_its_msgs__msg__GenericLane * data =
      (ros_etsi_its_msgs__msg__GenericLane *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_etsi_its_msgs__msg__GenericLane__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_etsi_its_msgs__msg__GenericLane__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_etsi_its_msgs__msg__GenericLane__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
