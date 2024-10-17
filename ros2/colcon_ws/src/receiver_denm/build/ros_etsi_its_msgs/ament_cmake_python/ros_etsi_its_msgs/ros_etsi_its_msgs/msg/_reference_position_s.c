// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros_etsi_its_msgs:msg/ReferencePosition.idl
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
#include "ros_etsi_its_msgs/msg/detail/reference_position__struct.h"
#include "ros_etsi_its_msgs/msg/detail/reference_position__functions.h"

bool ros_etsi_its_msgs__msg__position_confidence_ellipse__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__position_confidence_ellipse__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__altitude__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__altitude__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros_etsi_its_msgs__msg__reference_position__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("ros_etsi_its_msgs.msg._reference_position.ReferencePosition", full_classname_dest, 59) == 0);
  }
  ros_etsi_its_msgs__msg__ReferencePosition * ros_message = _ros_message;
  {  // latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->latitude = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->longitude = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // position_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_confidence");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__position_confidence_ellipse__convert_from_py(field, &ros_message->position_confidence)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // altitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__altitude__convert_from_py(field, &ros_message->altitude)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros_etsi_its_msgs__msg__reference_position__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ReferencePosition */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros_etsi_its_msgs.msg._reference_position");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ReferencePosition");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros_etsi_its_msgs__msg__ReferencePosition * ros_message = (ros_etsi_its_msgs__msg__ReferencePosition *)raw_ros_message;
  {  // latitude
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_confidence
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__position_confidence_ellipse__convert_to_py(&ros_message->position_confidence);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altitude
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__altitude__convert_to_py(&ros_message->altitude);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
