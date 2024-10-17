// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros_etsi_its_msgs:msg/VehicleSensor.idl
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
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor__struct.h"
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor_property__functions.h"
// end nested array functions include
bool ros_etsi_its_msgs__msg__vehicle_sensor_property__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__vehicle_sensor_property__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros_etsi_its_msgs__msg__vehicle_sensor__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("ros_etsi_its_msgs.msg._vehicle_sensor.VehicleSensor", full_classname_dest, 51) == 0);
  }
  ros_etsi_its_msgs__msg__VehicleSensor * ros_message = _ros_message;
  {  // ref_point_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_point_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ref_point_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // x_sensor_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_sensor_offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->x_sensor_offset = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // y_sensor_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_sensor_offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->y_sensor_offset = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // z_sensor_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_sensor_offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->z_sensor_offset = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vehicle_sensor_property_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_sensor_property_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'vehicle_sensor_property_list'");
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
    if (!ros_etsi_its_msgs__msg__VehicleSensorProperty__Sequence__init(&(ros_message->vehicle_sensor_property_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros_etsi_its_msgs__msg__VehicleSensorProperty__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros_etsi_its_msgs__msg__VehicleSensorProperty * dest = ros_message->vehicle_sensor_property_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros_etsi_its_msgs__msg__vehicle_sensor_property__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros_etsi_its_msgs__msg__vehicle_sensor__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleSensor */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros_etsi_its_msgs.msg._vehicle_sensor");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleSensor");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros_etsi_its_msgs__msg__VehicleSensor * ros_message = (ros_etsi_its_msgs__msg__VehicleSensor *)raw_ros_message;
  {  // ref_point_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ref_point_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_point_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_sensor_offset
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->x_sensor_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_sensor_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_sensor_offset
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->y_sensor_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_sensor_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_sensor_offset
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->z_sensor_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_sensor_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_sensor_property_list
    PyObject * field = NULL;
    size_t size = ros_message->vehicle_sensor_property_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros_etsi_its_msgs__msg__VehicleSensorProperty * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->vehicle_sensor_property_list.data[i]);
      PyObject * pyitem = ros_etsi_its_msgs__msg__vehicle_sensor_property__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_sensor_property_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
