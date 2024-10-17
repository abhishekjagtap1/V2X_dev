// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_stack:msg/UDPDataIndHdr.idl
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
#include "v2x_stack/msg/detail/udp_data_ind_hdr__struct.h"
#include "v2x_stack/msg/detail/udp_data_ind_hdr__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool v2x_stack__msg__location__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_stack__msg__location__convert_to_py(void * raw_ros_message);
bool v2x_stack__msg__area__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_stack__msg__area__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_stack__msg__udp_data_ind_hdr__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("v2x_stack.msg._udp_data_ind_hdr.UDPDataIndHdr", full_classname_dest, 45) == 0);
  }
  v2x_stack__msg__UDPDataIndHdr * ros_message = _ros_message;
  {  // btp_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "btp_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->btp_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pkt_transport
    PyObject * field = PyObject_GetAttrString(_pymsg, "pkt_transport");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pkt_transport = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // traffic_class
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_class");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->traffic_class = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // max_pkt_life_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_pkt_life_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_pkt_life_time = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dest_port
    PyObject * field = PyObject_GetAttrString(_pymsg, "dest_port");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dest_port = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // src_port
    PyObject * field = PyObject_GetAttrString(_pymsg, "src_port");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->src_port = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dest_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "dest_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dest_info = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // location
    PyObject * field = PyObject_GetAttrString(_pymsg, "location");
    if (!field) {
      return false;
    }
    if (!v2x_stack__msg__location__convert_from_py(field, &ros_message->location)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // area
    PyObject * field = PyObject_GetAttrString(_pymsg, "area");
    if (!field) {
      return false;
    }
    if (!v2x_stack__msg__area__convert_from_py(field, &ros_message->area)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // sec_profile
    PyObject * field = PyObject_GetAttrString(_pymsg, "sec_profile");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sec_profile = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // parser_result
    PyObject * field = PyObject_GetAttrString(_pymsg, "parser_result");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->parser_result = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // verification_result
    PyObject * field = PyObject_GetAttrString(_pymsg, "verification_result");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->verification_result = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ssp_len
    PyObject * field = PyObject_GetAttrString(_pymsg, "ssp_len");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ssp_len = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aid
    PyObject * field = PyObject_GetAttrString(_pymsg, "aid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aid = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ssp_bits
    PyObject * field = PyObject_GetAttrString(_pymsg, "ssp_bits");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 32;
      uint8_t * dest = ros_message->ssp_bits;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // cert_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "cert_id");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 32;
      uint8_t * dest = ros_message->cert_id;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // length
    PyObject * field = PyObject_GetAttrString(_pymsg, "length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->length = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_stack__msg__udp_data_ind_hdr__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UDPDataIndHdr */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_stack.msg._udp_data_ind_hdr");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UDPDataIndHdr");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_stack__msg__UDPDataIndHdr * ros_message = (v2x_stack__msg__UDPDataIndHdr *)raw_ros_message;
  {  // btp_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->btp_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btp_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pkt_transport
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pkt_transport);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pkt_transport", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traffic_class
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->traffic_class);
    {
      int rc = PyObject_SetAttrString(_pymessage, "traffic_class", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_pkt_life_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->max_pkt_life_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_pkt_life_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dest_port
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dest_port);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dest_port", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // src_port
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->src_port);
    {
      int rc = PyObject_SetAttrString(_pymessage, "src_port", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dest_info
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dest_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dest_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // location
    PyObject * field = NULL;
    field = v2x_stack__msg__location__convert_to_py(&ros_message->location);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "location", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // area
    PyObject * field = NULL;
    field = v2x_stack__msg__area__convert_to_py(&ros_message->area);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "area", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sec_profile
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sec_profile);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sec_profile", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parser_result
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->parser_result);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parser_result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // verification_result
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->verification_result);
    {
      int rc = PyObject_SetAttrString(_pymessage, "verification_result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ssp_len
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ssp_len);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ssp_len", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ssp_bits
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "ssp_bits");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->ssp_bits[0]);
    memcpy(dst, src, 32 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // cert_id
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "cert_id");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->cert_id[0]);
    memcpy(dst, src, 32 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // length
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
