// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_etsi_its_msgs:msg/ManagementContainer.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/management_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `action_id`
#include "ros_etsi_its_msgs/msg/detail/action_id__functions.h"
// Member `event_position`
#include "ros_etsi_its_msgs/msg/detail/reference_position__functions.h"
// Member `relevance_distance`
#include "ros_etsi_its_msgs/msg/detail/relevance_distance__functions.h"
// Member `relevance_traffic_direction`
#include "ros_etsi_its_msgs/msg/detail/relevance_traffic_direction__functions.h"
// Member `station_type`
#include "ros_etsi_its_msgs/msg/detail/station_type__functions.h"

bool
ros_etsi_its_msgs__msg__ManagementContainer__init(ros_etsi_its_msgs__msg__ManagementContainer * msg)
{
  if (!msg) {
    return false;
  }
  // action_id
  if (!ros_etsi_its_msgs__msg__ActionID__init(&msg->action_id)) {
    ros_etsi_its_msgs__msg__ManagementContainer__fini(msg);
    return false;
  }
  // detection_time
  // reference_time
  // termination
  // event_position
  if (!ros_etsi_its_msgs__msg__ReferencePosition__init(&msg->event_position)) {
    ros_etsi_its_msgs__msg__ManagementContainer__fini(msg);
    return false;
  }
  // relevance_distance
  if (!ros_etsi_its_msgs__msg__RelevanceDistance__init(&msg->relevance_distance)) {
    ros_etsi_its_msgs__msg__ManagementContainer__fini(msg);
    return false;
  }
  // relevance_traffic_direction
  if (!ros_etsi_its_msgs__msg__RelevanceTrafficDirection__init(&msg->relevance_traffic_direction)) {
    ros_etsi_its_msgs__msg__ManagementContainer__fini(msg);
    return false;
  }
  // validity_duration
  // transmission_interval
  // station_type
  if (!ros_etsi_its_msgs__msg__StationType__init(&msg->station_type)) {
    ros_etsi_its_msgs__msg__ManagementContainer__fini(msg);
    return false;
  }
  return true;
}

void
ros_etsi_its_msgs__msg__ManagementContainer__fini(ros_etsi_its_msgs__msg__ManagementContainer * msg)
{
  if (!msg) {
    return;
  }
  // action_id
  ros_etsi_its_msgs__msg__ActionID__fini(&msg->action_id);
  // detection_time
  // reference_time
  // termination
  // event_position
  ros_etsi_its_msgs__msg__ReferencePosition__fini(&msg->event_position);
  // relevance_distance
  ros_etsi_its_msgs__msg__RelevanceDistance__fini(&msg->relevance_distance);
  // relevance_traffic_direction
  ros_etsi_its_msgs__msg__RelevanceTrafficDirection__fini(&msg->relevance_traffic_direction);
  // validity_duration
  // transmission_interval
  // station_type
  ros_etsi_its_msgs__msg__StationType__fini(&msg->station_type);
}

bool
ros_etsi_its_msgs__msg__ManagementContainer__are_equal(const ros_etsi_its_msgs__msg__ManagementContainer * lhs, const ros_etsi_its_msgs__msg__ManagementContainer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action_id
  if (!ros_etsi_its_msgs__msg__ActionID__are_equal(
      &(lhs->action_id), &(rhs->action_id)))
  {
    return false;
  }
  // detection_time
  if (lhs->detection_time != rhs->detection_time) {
    return false;
  }
  // reference_time
  if (lhs->reference_time != rhs->reference_time) {
    return false;
  }
  // termination
  if (lhs->termination != rhs->termination) {
    return false;
  }
  // event_position
  if (!ros_etsi_its_msgs__msg__ReferencePosition__are_equal(
      &(lhs->event_position), &(rhs->event_position)))
  {
    return false;
  }
  // relevance_distance
  if (!ros_etsi_its_msgs__msg__RelevanceDistance__are_equal(
      &(lhs->relevance_distance), &(rhs->relevance_distance)))
  {
    return false;
  }
  // relevance_traffic_direction
  if (!ros_etsi_its_msgs__msg__RelevanceTrafficDirection__are_equal(
      &(lhs->relevance_traffic_direction), &(rhs->relevance_traffic_direction)))
  {
    return false;
  }
  // validity_duration
  if (lhs->validity_duration != rhs->validity_duration) {
    return false;
  }
  // transmission_interval
  if (lhs->transmission_interval != rhs->transmission_interval) {
    return false;
  }
  // station_type
  if (!ros_etsi_its_msgs__msg__StationType__are_equal(
      &(lhs->station_type), &(rhs->station_type)))
  {
    return false;
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__ManagementContainer__copy(
  const ros_etsi_its_msgs__msg__ManagementContainer * input,
  ros_etsi_its_msgs__msg__ManagementContainer * output)
{
  if (!input || !output) {
    return false;
  }
  // action_id
  if (!ros_etsi_its_msgs__msg__ActionID__copy(
      &(input->action_id), &(output->action_id)))
  {
    return false;
  }
  // detection_time
  output->detection_time = input->detection_time;
  // reference_time
  output->reference_time = input->reference_time;
  // termination
  output->termination = input->termination;
  // event_position
  if (!ros_etsi_its_msgs__msg__ReferencePosition__copy(
      &(input->event_position), &(output->event_position)))
  {
    return false;
  }
  // relevance_distance
  if (!ros_etsi_its_msgs__msg__RelevanceDistance__copy(
      &(input->relevance_distance), &(output->relevance_distance)))
  {
    return false;
  }
  // relevance_traffic_direction
  if (!ros_etsi_its_msgs__msg__RelevanceTrafficDirection__copy(
      &(input->relevance_traffic_direction), &(output->relevance_traffic_direction)))
  {
    return false;
  }
  // validity_duration
  output->validity_duration = input->validity_duration;
  // transmission_interval
  output->transmission_interval = input->transmission_interval;
  // station_type
  if (!ros_etsi_its_msgs__msg__StationType__copy(
      &(input->station_type), &(output->station_type)))
  {
    return false;
  }
  return true;
}

ros_etsi_its_msgs__msg__ManagementContainer *
ros_etsi_its_msgs__msg__ManagementContainer__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__ManagementContainer * msg = (ros_etsi_its_msgs__msg__ManagementContainer *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__ManagementContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_etsi_its_msgs__msg__ManagementContainer));
  bool success = ros_etsi_its_msgs__msg__ManagementContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_etsi_its_msgs__msg__ManagementContainer__destroy(ros_etsi_its_msgs__msg__ManagementContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_etsi_its_msgs__msg__ManagementContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_etsi_its_msgs__msg__ManagementContainer__Sequence__init(ros_etsi_its_msgs__msg__ManagementContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__ManagementContainer * data = NULL;

  if (size) {
    data = (ros_etsi_its_msgs__msg__ManagementContainer *)allocator.zero_allocate(size, sizeof(ros_etsi_its_msgs__msg__ManagementContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_etsi_its_msgs__msg__ManagementContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_etsi_its_msgs__msg__ManagementContainer__fini(&data[i - 1]);
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
ros_etsi_its_msgs__msg__ManagementContainer__Sequence__fini(ros_etsi_its_msgs__msg__ManagementContainer__Sequence * array)
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
      ros_etsi_its_msgs__msg__ManagementContainer__fini(&array->data[i]);
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

ros_etsi_its_msgs__msg__ManagementContainer__Sequence *
ros_etsi_its_msgs__msg__ManagementContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__ManagementContainer__Sequence * array = (ros_etsi_its_msgs__msg__ManagementContainer__Sequence *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__ManagementContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_etsi_its_msgs__msg__ManagementContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_etsi_its_msgs__msg__ManagementContainer__Sequence__destroy(ros_etsi_its_msgs__msg__ManagementContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_etsi_its_msgs__msg__ManagementContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_etsi_its_msgs__msg__ManagementContainer__Sequence__are_equal(const ros_etsi_its_msgs__msg__ManagementContainer__Sequence * lhs, const ros_etsi_its_msgs__msg__ManagementContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_etsi_its_msgs__msg__ManagementContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__ManagementContainer__Sequence__copy(
  const ros_etsi_its_msgs__msg__ManagementContainer__Sequence * input,
  ros_etsi_its_msgs__msg__ManagementContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_etsi_its_msgs__msg__ManagementContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_etsi_its_msgs__msg__ManagementContainer * data =
      (ros_etsi_its_msgs__msg__ManagementContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_etsi_its_msgs__msg__ManagementContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_etsi_its_msgs__msg__ManagementContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_etsi_its_msgs__msg__ManagementContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
