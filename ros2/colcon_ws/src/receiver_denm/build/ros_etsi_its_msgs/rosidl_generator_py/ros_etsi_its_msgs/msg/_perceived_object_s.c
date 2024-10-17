// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros_etsi_its_msgs:msg/PerceivedObject.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ros_etsi_its_msgs/msg/detail/perceived_object__struct.h"
#include "ros_etsi_its_msgs/msg/detail/perceived_object__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__object_distance_with_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__object_distance_with_confidence__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__object_distance_with_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__object_distance_with_confidence__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__object_distance_with_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__object_distance_with_confidence__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__speed_extended__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__speed_extended__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__speed_extended__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__speed_extended__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__speed_extended__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__speed_extended__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__longitudinal_acceleration__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__longitudinal_acceleration__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__lateral_acceleration__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__lateral_acceleration__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__object_dimension__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__object_dimension__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__object_dimension__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__object_dimension__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__object_dimension__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__object_dimension__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__object_ref_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__object_ref_point__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__dynamic_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__dynamic_status__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__station_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__station_type__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__matched_position__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__matched_position__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros_etsi_its_msgs__msg__perceived_object__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ros_etsi_its_msgs.msg._perceived_object.PerceivedObject", full_classname_dest, 55) == 0);
  }
  ros_etsi_its_msgs__msg__PerceivedObject * ros_message = _ros_message;
  {  // object_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // has_sensor_id_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_sensor_id_list");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_sensor_id_list = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sensor_id_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_id_list");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(uint8_t);
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->sensor_id_list), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->sensor_id_list.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'sensor_id_list'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->sensor_id_list), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->sensor_id_list.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint8_t tmp = (uint8_t)PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // time_of_detection
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_of_detection");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->time_of_detection)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // time_of_measurement
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_of_measurement");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_of_measurement = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // object_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_age = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // object_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_confidence");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_confidence = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // x_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_distance");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__object_distance_with_confidence__convert_from_py(field, &ros_message->x_distance)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // y_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_distance");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__object_distance_with_confidence__convert_from_py(field, &ros_message->y_distance)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // z_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_distance");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__object_distance_with_confidence__convert_from_py(field, &ros_message->z_distance)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // x_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_speed");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__speed_extended__convert_from_py(field, &ros_message->x_speed)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // y_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_speed");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__speed_extended__convert_from_py(field, &ros_message->y_speed)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // z_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_speed");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__speed_extended__convert_from_py(field, &ros_message->z_speed)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // x_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_acceleration");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__longitudinal_acceleration__convert_from_py(field, &ros_message->x_acceleration)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // y_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_acceleration");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__lateral_acceleration__convert_from_py(field, &ros_message->y_acceleration)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // has_planar_object_dimension1
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_planar_object_dimension1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_planar_object_dimension1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // planar_object_dimension1
    PyObject * field = PyObject_GetAttrString(_pymsg, "planar_object_dimension1");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__object_dimension__convert_from_py(field, &ros_message->planar_object_dimension1)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // has_planar_object_dimension2
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_planar_object_dimension2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_planar_object_dimension2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // planar_object_dimension2
    PyObject * field = PyObject_GetAttrString(_pymsg, "planar_object_dimension2");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__object_dimension__convert_from_py(field, &ros_message->planar_object_dimension2)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // has_vertical_object_dimension
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_vertical_object_dimension");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_vertical_object_dimension = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vertical_object_dimension
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_object_dimension");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__object_dimension__convert_from_py(field, &ros_message->vertical_object_dimension)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_ref_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_ref_point");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__object_ref_point__convert_from_py(field, &ros_message->object_ref_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // dynamic_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "dynamic_status");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__dynamic_status__convert_from_py(field, &ros_message->dynamic_status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // classification
    PyObject * field = PyObject_GetAttrString(_pymsg, "classification");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__station_type__convert_from_py(field, &ros_message->classification)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // matched_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "matched_position");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__matched_position__convert_from_py(field, &ros_message->matched_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->object_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros_etsi_its_msgs__msg__perceived_object__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PerceivedObject */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros_etsi_its_msgs.msg._perceived_object");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PerceivedObject");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros_etsi_its_msgs__msg__PerceivedObject * ros_message = (ros_etsi_its_msgs__msg__PerceivedObject *)raw_ros_message;
  {  // object_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->object_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_sensor_id_list
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_sensor_id_list ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_sensor_id_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_id_list
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "sensor_id_list");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(uint8_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->sensor_id_list.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint8_t * src = &(ros_message->sensor_id_list.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->sensor_id_list.size * sizeof(uint8_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // time_of_detection
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->time_of_detection);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_of_detection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_of_measurement
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->time_of_measurement);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_of_measurement", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_age
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->object_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_confidence
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->object_confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_distance
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__object_distance_with_confidence__convert_to_py(&ros_message->x_distance);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_distance
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__object_distance_with_confidence__convert_to_py(&ros_message->y_distance);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_distance
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__object_distance_with_confidence__convert_to_py(&ros_message->z_distance);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_speed
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__speed_extended__convert_to_py(&ros_message->x_speed);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_speed
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__speed_extended__convert_to_py(&ros_message->y_speed);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_speed
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__speed_extended__convert_to_py(&ros_message->z_speed);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_acceleration
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__longitudinal_acceleration__convert_to_py(&ros_message->x_acceleration);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_acceleration
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__lateral_acceleration__convert_to_py(&ros_message->y_acceleration);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_planar_object_dimension1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_planar_object_dimension1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_planar_object_dimension1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // planar_object_dimension1
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__object_dimension__convert_to_py(&ros_message->planar_object_dimension1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "planar_object_dimension1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_planar_object_dimension2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_planar_object_dimension2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_planar_object_dimension2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // planar_object_dimension2
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__object_dimension__convert_to_py(&ros_message->planar_object_dimension2);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "planar_object_dimension2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_vertical_object_dimension
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_vertical_object_dimension ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_vertical_object_dimension", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_object_dimension
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__object_dimension__convert_to_py(&ros_message->vertical_object_dimension);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_object_dimension", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_ref_point
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__object_ref_point__convert_to_py(&ros_message->object_ref_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_ref_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dynamic_status
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__dynamic_status__convert_to_py(&ros_message->dynamic_status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "dynamic_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // classification
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__station_type__convert_to_py(&ros_message->classification);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "classification", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matched_position
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__matched_position__convert_to_py(&ros_message->matched_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "matched_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->object_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
