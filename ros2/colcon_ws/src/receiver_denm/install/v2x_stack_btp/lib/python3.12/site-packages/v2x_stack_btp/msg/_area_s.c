// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_stack_btp:msg/Area.idl
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
#include "v2x_stack_btp/msg/detail/area__struct.h"
#include "v2x_stack_btp/msg/detail/area__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool v2x_stack_btp__msg__area__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[29];
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
    assert(strncmp("v2x_stack_btp.msg._area.Area", full_classname_dest, 28) == 0);
  }
  v2x_stack_btp__msg__Area * ros_message = _ros_message;
  {  // latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->latitude = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->longitude = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // distance_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_a");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->distance_a = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // distance_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_b");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->distance_b = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->angle = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shape
    PyObject * field = PyObject_GetAttrString(_pymsg, "shape");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shape = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // unused
    PyObject * field = PyObject_GetAttrString(_pymsg, "unused");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->unused = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_stack_btp__msg__area__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Area */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_stack_btp.msg._area");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Area");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_stack_btp__msg__Area * ros_message = (v2x_stack_btp__msg__Area *)raw_ros_message;
  {  // latitude
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->latitude);
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
    field = PyLong_FromLong(ros_message->longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_a
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->distance_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_b
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->distance_b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shape
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shape);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shape", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unused
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->unused);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unused", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
