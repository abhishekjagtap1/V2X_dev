// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_etsi_its_msgs:msg/PerceivedObject.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/perceived_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sensor_id_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `time_of_detection`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `x_distance`
// Member `y_distance`
// Member `z_distance`
#include "ros_etsi_its_msgs/msg/detail/object_distance_with_confidence__functions.h"
// Member `x_speed`
// Member `y_speed`
// Member `z_speed`
#include "ros_etsi_its_msgs/msg/detail/speed_extended__functions.h"
// Member `x_acceleration`
#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__functions.h"
// Member `y_acceleration`
#include "ros_etsi_its_msgs/msg/detail/lateral_acceleration__functions.h"
// Member `planar_object_dimension1`
// Member `planar_object_dimension2`
// Member `vertical_object_dimension`
#include "ros_etsi_its_msgs/msg/detail/object_dimension__functions.h"
// Member `object_ref_point`
#include "ros_etsi_its_msgs/msg/detail/object_ref_point__functions.h"
// Member `dynamic_status`
#include "ros_etsi_its_msgs/msg/detail/dynamic_status__functions.h"
// Member `classification`
#include "ros_etsi_its_msgs/msg/detail/station_type__functions.h"
// Member `matched_position`
#include "ros_etsi_its_msgs/msg/detail/matched_position__functions.h"

bool
ros_etsi_its_msgs__msg__PerceivedObject__init(ros_etsi_its_msgs__msg__PerceivedObject * msg)
{
  if (!msg) {
    return false;
  }
  // object_id
  // has_sensor_id_list
  // sensor_id_list
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->sensor_id_list, 0)) {
    ros_etsi_its_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // time_of_detection
  if (!builtin_interfaces__msg__Time__init(&msg->time_of_detection)) {
    ros_etsi_its_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // time_of_measurement
  // object_age
  // object_confidence
  // x_distance
  if (!ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__init(&msg->x_distance)) {
    ros_etsi_its_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // y_distance
  if (!ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__init(&msg->y_distance)) {
    ros_etsi_its_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // z_distance
  if (!ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__init(&msg->z_distance)) {
    ros_etsi_its_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // x_speed
  if (!ros_etsi_its_msgs__msg__SpeedExtended__init(&msg->x_speed)) {
    ros_etsi_its_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // y_speed
  if (!ros_etsi_its_msgs__msg__SpeedExtended__init(&msg->y_speed)) {
    ros_etsi_its_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // z_speed
  if (!ros_etsi_its_msgs__msg__SpeedExtended__init(&msg->z_speed)) {
    ros_etsi_its_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // x_acceleration
  if (!ros_etsi_its_msgs__msg__LongitudinalAcceleration__init(&msg->x_acceleration)) {
    ros_etsi_its_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // y_acceleration
  if (!ros_etsi_its_msgs__msg__LateralAcceleration__init(&msg->y_acceleration)) {
    ros_etsi_its_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // has_planar_object_dimension1
  // planar_object_dimension1
  if (!ros_etsi_its_msgs__msg__ObjectDimension__init(&msg->planar_object_dimension1)) {
    ros_etsi_its_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // has_planar_object_dimension2
  // planar_object_dimension2
  if (!ros_etsi_its_msgs__msg__ObjectDimension__init(&msg->planar_object_dimension2)) {
    ros_etsi_its_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // has_vertical_object_dimension
  // vertical_object_dimension
  if (!ros_etsi_its_msgs__msg__ObjectDimension__init(&msg->vertical_object_dimension)) {
    ros_etsi_its_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // object_ref_point
  if (!ros_etsi_its_msgs__msg__ObjectRefPoint__init(&msg->object_ref_point)) {
    ros_etsi_its_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // dynamic_status
  if (!ros_etsi_its_msgs__msg__DynamicStatus__init(&msg->dynamic_status)) {
    ros_etsi_its_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // classification
  if (!ros_etsi_its_msgs__msg__StationType__init(&msg->classification)) {
    ros_etsi_its_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // matched_position
  if (!ros_etsi_its_msgs__msg__MatchedPosition__init(&msg->matched_position)) {
    ros_etsi_its_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // object_angle
  return true;
}

void
ros_etsi_its_msgs__msg__PerceivedObject__fini(ros_etsi_its_msgs__msg__PerceivedObject * msg)
{
  if (!msg) {
    return;
  }
  // object_id
  // has_sensor_id_list
  // sensor_id_list
  rosidl_runtime_c__uint8__Sequence__fini(&msg->sensor_id_list);
  // time_of_detection
  builtin_interfaces__msg__Time__fini(&msg->time_of_detection);
  // time_of_measurement
  // object_age
  // object_confidence
  // x_distance
  ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__fini(&msg->x_distance);
  // y_distance
  ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__fini(&msg->y_distance);
  // z_distance
  ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__fini(&msg->z_distance);
  // x_speed
  ros_etsi_its_msgs__msg__SpeedExtended__fini(&msg->x_speed);
  // y_speed
  ros_etsi_its_msgs__msg__SpeedExtended__fini(&msg->y_speed);
  // z_speed
  ros_etsi_its_msgs__msg__SpeedExtended__fini(&msg->z_speed);
  // x_acceleration
  ros_etsi_its_msgs__msg__LongitudinalAcceleration__fini(&msg->x_acceleration);
  // y_acceleration
  ros_etsi_its_msgs__msg__LateralAcceleration__fini(&msg->y_acceleration);
  // has_planar_object_dimension1
  // planar_object_dimension1
  ros_etsi_its_msgs__msg__ObjectDimension__fini(&msg->planar_object_dimension1);
  // has_planar_object_dimension2
  // planar_object_dimension2
  ros_etsi_its_msgs__msg__ObjectDimension__fini(&msg->planar_object_dimension2);
  // has_vertical_object_dimension
  // vertical_object_dimension
  ros_etsi_its_msgs__msg__ObjectDimension__fini(&msg->vertical_object_dimension);
  // object_ref_point
  ros_etsi_its_msgs__msg__ObjectRefPoint__fini(&msg->object_ref_point);
  // dynamic_status
  ros_etsi_its_msgs__msg__DynamicStatus__fini(&msg->dynamic_status);
  // classification
  ros_etsi_its_msgs__msg__StationType__fini(&msg->classification);
  // matched_position
  ros_etsi_its_msgs__msg__MatchedPosition__fini(&msg->matched_position);
  // object_angle
}

bool
ros_etsi_its_msgs__msg__PerceivedObject__are_equal(const ros_etsi_its_msgs__msg__PerceivedObject * lhs, const ros_etsi_its_msgs__msg__PerceivedObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_id
  if (lhs->object_id != rhs->object_id) {
    return false;
  }
  // has_sensor_id_list
  if (lhs->has_sensor_id_list != rhs->has_sensor_id_list) {
    return false;
  }
  // sensor_id_list
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->sensor_id_list), &(rhs->sensor_id_list)))
  {
    return false;
  }
  // time_of_detection
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->time_of_detection), &(rhs->time_of_detection)))
  {
    return false;
  }
  // time_of_measurement
  if (lhs->time_of_measurement != rhs->time_of_measurement) {
    return false;
  }
  // object_age
  if (lhs->object_age != rhs->object_age) {
    return false;
  }
  // object_confidence
  if (lhs->object_confidence != rhs->object_confidence) {
    return false;
  }
  // x_distance
  if (!ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__are_equal(
      &(lhs->x_distance), &(rhs->x_distance)))
  {
    return false;
  }
  // y_distance
  if (!ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__are_equal(
      &(lhs->y_distance), &(rhs->y_distance)))
  {
    return false;
  }
  // z_distance
  if (!ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__are_equal(
      &(lhs->z_distance), &(rhs->z_distance)))
  {
    return false;
  }
  // x_speed
  if (!ros_etsi_its_msgs__msg__SpeedExtended__are_equal(
      &(lhs->x_speed), &(rhs->x_speed)))
  {
    return false;
  }
  // y_speed
  if (!ros_etsi_its_msgs__msg__SpeedExtended__are_equal(
      &(lhs->y_speed), &(rhs->y_speed)))
  {
    return false;
  }
  // z_speed
  if (!ros_etsi_its_msgs__msg__SpeedExtended__are_equal(
      &(lhs->z_speed), &(rhs->z_speed)))
  {
    return false;
  }
  // x_acceleration
  if (!ros_etsi_its_msgs__msg__LongitudinalAcceleration__are_equal(
      &(lhs->x_acceleration), &(rhs->x_acceleration)))
  {
    return false;
  }
  // y_acceleration
  if (!ros_etsi_its_msgs__msg__LateralAcceleration__are_equal(
      &(lhs->y_acceleration), &(rhs->y_acceleration)))
  {
    return false;
  }
  // has_planar_object_dimension1
  if (lhs->has_planar_object_dimension1 != rhs->has_planar_object_dimension1) {
    return false;
  }
  // planar_object_dimension1
  if (!ros_etsi_its_msgs__msg__ObjectDimension__are_equal(
      &(lhs->planar_object_dimension1), &(rhs->planar_object_dimension1)))
  {
    return false;
  }
  // has_planar_object_dimension2
  if (lhs->has_planar_object_dimension2 != rhs->has_planar_object_dimension2) {
    return false;
  }
  // planar_object_dimension2
  if (!ros_etsi_its_msgs__msg__ObjectDimension__are_equal(
      &(lhs->planar_object_dimension2), &(rhs->planar_object_dimension2)))
  {
    return false;
  }
  // has_vertical_object_dimension
  if (lhs->has_vertical_object_dimension != rhs->has_vertical_object_dimension) {
    return false;
  }
  // vertical_object_dimension
  if (!ros_etsi_its_msgs__msg__ObjectDimension__are_equal(
      &(lhs->vertical_object_dimension), &(rhs->vertical_object_dimension)))
  {
    return false;
  }
  // object_ref_point
  if (!ros_etsi_its_msgs__msg__ObjectRefPoint__are_equal(
      &(lhs->object_ref_point), &(rhs->object_ref_point)))
  {
    return false;
  }
  // dynamic_status
  if (!ros_etsi_its_msgs__msg__DynamicStatus__are_equal(
      &(lhs->dynamic_status), &(rhs->dynamic_status)))
  {
    return false;
  }
  // classification
  if (!ros_etsi_its_msgs__msg__StationType__are_equal(
      &(lhs->classification), &(rhs->classification)))
  {
    return false;
  }
  // matched_position
  if (!ros_etsi_its_msgs__msg__MatchedPosition__are_equal(
      &(lhs->matched_position), &(rhs->matched_position)))
  {
    return false;
  }
  // object_angle
  if (lhs->object_angle != rhs->object_angle) {
    return false;
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__PerceivedObject__copy(
  const ros_etsi_its_msgs__msg__PerceivedObject * input,
  ros_etsi_its_msgs__msg__PerceivedObject * output)
{
  if (!input || !output) {
    return false;
  }
  // object_id
  output->object_id = input->object_id;
  // has_sensor_id_list
  output->has_sensor_id_list = input->has_sensor_id_list;
  // sensor_id_list
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->sensor_id_list), &(output->sensor_id_list)))
  {
    return false;
  }
  // time_of_detection
  if (!builtin_interfaces__msg__Time__copy(
      &(input->time_of_detection), &(output->time_of_detection)))
  {
    return false;
  }
  // time_of_measurement
  output->time_of_measurement = input->time_of_measurement;
  // object_age
  output->object_age = input->object_age;
  // object_confidence
  output->object_confidence = input->object_confidence;
  // x_distance
  if (!ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__copy(
      &(input->x_distance), &(output->x_distance)))
  {
    return false;
  }
  // y_distance
  if (!ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__copy(
      &(input->y_distance), &(output->y_distance)))
  {
    return false;
  }
  // z_distance
  if (!ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__copy(
      &(input->z_distance), &(output->z_distance)))
  {
    return false;
  }
  // x_speed
  if (!ros_etsi_its_msgs__msg__SpeedExtended__copy(
      &(input->x_speed), &(output->x_speed)))
  {
    return false;
  }
  // y_speed
  if (!ros_etsi_its_msgs__msg__SpeedExtended__copy(
      &(input->y_speed), &(output->y_speed)))
  {
    return false;
  }
  // z_speed
  if (!ros_etsi_its_msgs__msg__SpeedExtended__copy(
      &(input->z_speed), &(output->z_speed)))
  {
    return false;
  }
  // x_acceleration
  if (!ros_etsi_its_msgs__msg__LongitudinalAcceleration__copy(
      &(input->x_acceleration), &(output->x_acceleration)))
  {
    return false;
  }
  // y_acceleration
  if (!ros_etsi_its_msgs__msg__LateralAcceleration__copy(
      &(input->y_acceleration), &(output->y_acceleration)))
  {
    return false;
  }
  // has_planar_object_dimension1
  output->has_planar_object_dimension1 = input->has_planar_object_dimension1;
  // planar_object_dimension1
  if (!ros_etsi_its_msgs__msg__ObjectDimension__copy(
      &(input->planar_object_dimension1), &(output->planar_object_dimension1)))
  {
    return false;
  }
  // has_planar_object_dimension2
  output->has_planar_object_dimension2 = input->has_planar_object_dimension2;
  // planar_object_dimension2
  if (!ros_etsi_its_msgs__msg__ObjectDimension__copy(
      &(input->planar_object_dimension2), &(output->planar_object_dimension2)))
  {
    return false;
  }
  // has_vertical_object_dimension
  output->has_vertical_object_dimension = input->has_vertical_object_dimension;
  // vertical_object_dimension
  if (!ros_etsi_its_msgs__msg__ObjectDimension__copy(
      &(input->vertical_object_dimension), &(output->vertical_object_dimension)))
  {
    return false;
  }
  // object_ref_point
  if (!ros_etsi_its_msgs__msg__ObjectRefPoint__copy(
      &(input->object_ref_point), &(output->object_ref_point)))
  {
    return false;
  }
  // dynamic_status
  if (!ros_etsi_its_msgs__msg__DynamicStatus__copy(
      &(input->dynamic_status), &(output->dynamic_status)))
  {
    return false;
  }
  // classification
  if (!ros_etsi_its_msgs__msg__StationType__copy(
      &(input->classification), &(output->classification)))
  {
    return false;
  }
  // matched_position
  if (!ros_etsi_its_msgs__msg__MatchedPosition__copy(
      &(input->matched_position), &(output->matched_position)))
  {
    return false;
  }
  // object_angle
  output->object_angle = input->object_angle;
  return true;
}

ros_etsi_its_msgs__msg__PerceivedObject *
ros_etsi_its_msgs__msg__PerceivedObject__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__PerceivedObject * msg = (ros_etsi_its_msgs__msg__PerceivedObject *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__PerceivedObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_etsi_its_msgs__msg__PerceivedObject));
  bool success = ros_etsi_its_msgs__msg__PerceivedObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_etsi_its_msgs__msg__PerceivedObject__destroy(ros_etsi_its_msgs__msg__PerceivedObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_etsi_its_msgs__msg__PerceivedObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_etsi_its_msgs__msg__PerceivedObject__Sequence__init(ros_etsi_its_msgs__msg__PerceivedObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__PerceivedObject * data = NULL;

  if (size) {
    data = (ros_etsi_its_msgs__msg__PerceivedObject *)allocator.zero_allocate(size, sizeof(ros_etsi_its_msgs__msg__PerceivedObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_etsi_its_msgs__msg__PerceivedObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_etsi_its_msgs__msg__PerceivedObject__fini(&data[i - 1]);
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
ros_etsi_its_msgs__msg__PerceivedObject__Sequence__fini(ros_etsi_its_msgs__msg__PerceivedObject__Sequence * array)
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
      ros_etsi_its_msgs__msg__PerceivedObject__fini(&array->data[i]);
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

ros_etsi_its_msgs__msg__PerceivedObject__Sequence *
ros_etsi_its_msgs__msg__PerceivedObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__PerceivedObject__Sequence * array = (ros_etsi_its_msgs__msg__PerceivedObject__Sequence *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__PerceivedObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_etsi_its_msgs__msg__PerceivedObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_etsi_its_msgs__msg__PerceivedObject__Sequence__destroy(ros_etsi_its_msgs__msg__PerceivedObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_etsi_its_msgs__msg__PerceivedObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_etsi_its_msgs__msg__PerceivedObject__Sequence__are_equal(const ros_etsi_its_msgs__msg__PerceivedObject__Sequence * lhs, const ros_etsi_its_msgs__msg__PerceivedObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_etsi_its_msgs__msg__PerceivedObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__PerceivedObject__Sequence__copy(
  const ros_etsi_its_msgs__msg__PerceivedObject__Sequence * input,
  ros_etsi_its_msgs__msg__PerceivedObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_etsi_its_msgs__msg__PerceivedObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_etsi_its_msgs__msg__PerceivedObject * data =
      (ros_etsi_its_msgs__msg__PerceivedObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_etsi_its_msgs__msg__PerceivedObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_etsi_its_msgs__msg__PerceivedObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_etsi_its_msgs__msg__PerceivedObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
