# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/ObjectRefPoint.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectRefPoint(type):
    """Metaclass of message 'ObjectRefPoint'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'VALUE_MID': 0,
        'VALUE_BOTTOMLEFT': 1,
        'VALUE_MIDLEFT': 2,
        'VALUE_TOPLEFT': 3,
        'VALUE_BOTTOMMID': 4,
        'VALUE_TOPMID': 5,
        'VALUE_BOTTOMRIGHT': 6,
        'VALUE_MIDRIGHT': 7,
        'VALUE_TOPRIGHT': 8,
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
                'ros_etsi_its_msgs.msg.ObjectRefPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_ref_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_ref_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_ref_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_ref_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_ref_point

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'VALUE_MID': cls.__constants['VALUE_MID'],
            'VALUE_BOTTOMLEFT': cls.__constants['VALUE_BOTTOMLEFT'],
            'VALUE_MIDLEFT': cls.__constants['VALUE_MIDLEFT'],
            'VALUE_TOPLEFT': cls.__constants['VALUE_TOPLEFT'],
            'VALUE_BOTTOMMID': cls.__constants['VALUE_BOTTOMMID'],
            'VALUE_TOPMID': cls.__constants['VALUE_TOPMID'],
            'VALUE_BOTTOMRIGHT': cls.__constants['VALUE_BOTTOMRIGHT'],
            'VALUE_MIDRIGHT': cls.__constants['VALUE_MIDRIGHT'],
            'VALUE_TOPRIGHT': cls.__constants['VALUE_TOPRIGHT'],
        }

    @property
    def VALUE_MID(self):
        """Message constant 'VALUE_MID'."""
        return Metaclass_ObjectRefPoint.__constants['VALUE_MID']

    @property
    def VALUE_BOTTOMLEFT(self):
        """Message constant 'VALUE_BOTTOMLEFT'."""
        return Metaclass_ObjectRefPoint.__constants['VALUE_BOTTOMLEFT']

    @property
    def VALUE_MIDLEFT(self):
        """Message constant 'VALUE_MIDLEFT'."""
        return Metaclass_ObjectRefPoint.__constants['VALUE_MIDLEFT']

    @property
    def VALUE_TOPLEFT(self):
        """Message constant 'VALUE_TOPLEFT'."""
        return Metaclass_ObjectRefPoint.__constants['VALUE_TOPLEFT']

    @property
    def VALUE_BOTTOMMID(self):
        """Message constant 'VALUE_BOTTOMMID'."""
        return Metaclass_ObjectRefPoint.__constants['VALUE_BOTTOMMID']

    @property
    def VALUE_TOPMID(self):
        """Message constant 'VALUE_TOPMID'."""
        return Metaclass_ObjectRefPoint.__constants['VALUE_TOPMID']

    @property
    def VALUE_BOTTOMRIGHT(self):
        """Message constant 'VALUE_BOTTOMRIGHT'."""
        return Metaclass_ObjectRefPoint.__constants['VALUE_BOTTOMRIGHT']

    @property
    def VALUE_MIDRIGHT(self):
        """Message constant 'VALUE_MIDRIGHT'."""
        return Metaclass_ObjectRefPoint.__constants['VALUE_MIDRIGHT']

    @property
    def VALUE_TOPRIGHT(self):
        """Message constant 'VALUE_TOPRIGHT'."""
        return Metaclass_ObjectRefPoint.__constants['VALUE_TOPRIGHT']


class ObjectRefPoint(metaclass=Metaclass_ObjectRefPoint):
    """
    Message class 'ObjectRefPoint'.

    Constants:
      VALUE_MID
      VALUE_BOTTOMLEFT
      VALUE_MIDLEFT
      VALUE_TOPLEFT
      VALUE_BOTTOMMID
      VALUE_TOPMID
      VALUE_BOTTOMRIGHT
      VALUE_MIDRIGHT
      VALUE_TOPRIGHT
    """

    __slots__ = [
        '_value',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'value': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        self.value = kwargs.get('value', int())

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
        if self.value != other.value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'value' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'value' field must be an integer in [-2147483648, 2147483647]"
        self._value = value
