# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/SPATEM.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SPATEM(type):
    """Metaclass of message 'SPATEM'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ros_etsi_its_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_etsi_its_msgs.msg.SPATEM')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__spatem
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__spatem
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__spatem
            cls._TYPE_SUPPORT = module.type_support_msg__msg__spatem
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__spatem

            from ros_etsi_its_msgs.msg import IntersectionState
            if IntersectionState.__class__._TYPE_SUPPORT is None:
                IntersectionState.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import ItsPduHeader
            if ItsPduHeader.__class__._TYPE_SUPPORT is None:
                ItsPduHeader.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SPATEM(metaclass=Metaclass_SPATEM):
    """Message class 'SPATEM'."""

    __slots__ = [
        '_header',
        '_its_header',
        '_intersections',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'its_header': 'ros_etsi_its_msgs/ItsPduHeader',
        'intersections': 'sequence<ros_etsi_its_msgs/IntersectionState>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'ItsPduHeader'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'IntersectionState')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from ros_etsi_its_msgs.msg import ItsPduHeader
        self.its_header = kwargs.get('its_header', ItsPduHeader())
        self.intersections = kwargs.get('intersections', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.its_header != other.its_header:
            return False
        if self.intersections != other.intersections:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def its_header(self):
        """Message field 'its_header'."""
        return self._its_header

    @its_header.setter
    def its_header(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import ItsPduHeader
            assert \
                isinstance(value, ItsPduHeader), \
                "The 'its_header' field must be a sub message of type 'ItsPduHeader'"
        self._its_header = value

    @builtins.property
    def intersections(self):
        """Message field 'intersections'."""
        return self._intersections

    @intersections.setter
    def intersections(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import IntersectionState
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, IntersectionState) for v in value) and
                 True), \
                "The 'intersections' field must be a set or sequence and each value of type 'IntersectionState'"
        self._intersections = value
