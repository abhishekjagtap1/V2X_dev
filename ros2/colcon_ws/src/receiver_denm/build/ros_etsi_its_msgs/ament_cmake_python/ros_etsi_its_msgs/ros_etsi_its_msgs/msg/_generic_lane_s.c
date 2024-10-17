// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros_etsi_its_msgs:msg/GenericLane.idl
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
#include "ros_etsi_its_msgs/msg/detail/generic_lane__struct.h"
#include "ros_etsi_its_msgs/msg/detail/generic_lane__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ros_etsi_its_msgs/msg/detail/connection__functions.h"
#include "ros_etsi_its_msgs/msg/detail/node_set_xy__functions.h"
// end nested array functions include
bool ros_etsi_its_msgs__msg__node_set_xy__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__node_set_xy__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__connection__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__connection__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros_etsi_its_msgs__msg__generic_lane__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("ros_etsi_its_msgs.msg._generic_lane.GenericLane", full_classname_dest, 47) == 0);
  }
  ros_etsi_its_msgs__msg__GenericLane * ros_message = _ros_message;
  {  // lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // ingress_approach
    PyObject * field = PyObject_GetAttrString(_pymsg, "ingress_approach");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ingress_approach = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // egress_approach
    PyObject * field = PyObject_GetAttrString(_pymsg, "egress_approach");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->egress_approach = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_direction = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // node_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'node_list'");
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
    if (!ros_etsi_its_msgs__msg__NodeSetXY__Sequence__init(&(ros_message->node_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros_etsi_its_msgs__msg__NodeSetXY__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros_etsi_its_msgs__msg__NodeSetXY * dest = ros_message->node_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros_etsi_its_msgs__msg__node_set_xy__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // connects_to
    PyObject * field = PyObject_GetAttrString(_pymsg, "connects_to");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'connects_to'");
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
    if (!ros_etsi_its_msgs__msg__Connection__Sequence__init(&(ros_message->connects_to), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros_etsi_its_msgs__msg__Connection__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros_etsi_its_msgs__msg__Connection * dest = ros_message->connects_to.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros_etsi_its_msgs__msg__connection__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * ros_etsi_its_msgs__msg__generic_lane__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GenericLane */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros_etsi_its_msgs.msg._generic_lane");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GenericLane");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros_etsi_its_msgs__msg__GenericLane * ros_message = (ros_etsi_its_msgs__msg__GenericLane *)raw_ros_message;
  {  // lane_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ingress_approach
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ingress_approach);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ingress_approach", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // egress_approach
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->egress_approach);
    {
      int rc = PyObject_SetAttrString(_pymessage, "egress_approach", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_direction
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // node_list
    PyObject * field = NULL;
    size_t size = ros_message->node_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros_etsi_its_msgs__msg__NodeSetXY * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->node_list.data[i]);
      PyObject * pyitem = ros_etsi_its_msgs__msg__node_set_xy__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "node_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connects_to
    PyObject * field = NULL;
    size_t size = ros_message->connects_to.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros_etsi_its_msgs__msg__Connection * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->connects_to.data[i]);
      PyObject * pyitem = ros_etsi_its_msgs__msg__connection__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "connects_to", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
