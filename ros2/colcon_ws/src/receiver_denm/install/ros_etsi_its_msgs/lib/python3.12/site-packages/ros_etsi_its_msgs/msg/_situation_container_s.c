// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros_etsi_its_msgs:msg/SituationContainer.idl
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
#include "ros_etsi_its_msgs/msg/detail/situation_container__struct.h"
#include "ros_etsi_its_msgs/msg/detail/situation_container__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ros_etsi_its_msgs/msg/detail/event_point__functions.h"
// end nested array functions include
bool ros_etsi_its_msgs__msg__information_quality__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__information_quality__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__cause_code__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__cause_code__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__cause_code__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__cause_code__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__event_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__event_point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros_etsi_its_msgs__msg__situation_container__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("ros_etsi_its_msgs.msg._situation_container.SituationContainer", full_classname_dest, 61) == 0);
  }
  ros_etsi_its_msgs__msg__SituationContainer * ros_message = _ros_message;
  {  // information_quality
    PyObject * field = PyObject_GetAttrString(_pymsg, "information_quality");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__information_quality__convert_from_py(field, &ros_message->information_quality)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // event_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "event_type");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__cause_code__convert_from_py(field, &ros_message->event_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // has_linked_cause
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_linked_cause");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_linked_cause = (Py_True == field);
    Py_DECREF(field);
  }
  {  // linked_cause
    PyObject * field = PyObject_GetAttrString(_pymsg, "linked_cause");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__cause_code__convert_from_py(field, &ros_message->linked_cause)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // event_history
    PyObject * field = PyObject_GetAttrString(_pymsg, "event_history");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'event_history'");
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
    if (!ros_etsi_its_msgs__msg__EventPoint__Sequence__init(&(ros_message->event_history), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros_etsi_its_msgs__msg__EventPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros_etsi_its_msgs__msg__EventPoint * dest = ros_message->event_history.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros_etsi_its_msgs__msg__event_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * ros_etsi_its_msgs__msg__situation_container__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SituationContainer */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros_etsi_its_msgs.msg._situation_container");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SituationContainer");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros_etsi_its_msgs__msg__SituationContainer * ros_message = (ros_etsi_its_msgs__msg__SituationContainer *)raw_ros_message;
  {  // information_quality
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__information_quality__convert_to_py(&ros_message->information_quality);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "information_quality", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // event_type
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__cause_code__convert_to_py(&ros_message->event_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "event_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_linked_cause
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_linked_cause ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_linked_cause", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // linked_cause
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__cause_code__convert_to_py(&ros_message->linked_cause);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "linked_cause", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // event_history
    PyObject * field = NULL;
    size_t size = ros_message->event_history.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros_etsi_its_msgs__msg__EventPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->event_history.data[i]);
      PyObject * pyitem = ros_etsi_its_msgs__msg__event_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "event_history", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
