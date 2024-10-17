# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/Curvature.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Curvature(type):
    """Metaclass of message 'Curvature'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'VALUE_RIGHTMOST': -1023,
        'VALUE_LEFTMOST': 1022,
        'VALUE_MIN': -1023,
        'VALUE_MAX': 1022,
        'VALUE_STRAIGHT': 0,
        'VALUE_UNAVAILABLE': 1023,
        'CONFIDENCE_OUT_OF_RANGE': 6,
        'CONFIDENCE_UNAVAILABLE': 7,
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
                'ros_etsi_its_msgs.msg.Curvature')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__curvature
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__curvature
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__curvature
            cls._TYPE_SUPPORT = module.type_support_msg__msg__curvature
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__curvature

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'VALUE_RIGHTMOST': cls.__constants['VALUE_RIGHTMOST'],
            'VALUE_LEFTMOST': cls.__constants['VALUE_LEFTMOST'],
            'VALUE_MIN': cls.__constants['VALUE_MIN'],
            'VALUE_MAX': cls.__constants['VALUE_MAX'],
            'VALUE_STRAIGHT': cls.__constants['VALUE_STRAIGHT'],
            'VALUE_UNAVAILABLE': cls.__constants['VALUE_UNAVAILABLE'],
            'CONFIDENCE_OUT_OF_RANGE': cls.__constants['CONFIDENCE_OUT_OF_RANGE'],
            'CONFIDENCE_UNAVAILABLE': cls.__constants['CONFIDENCE_UNAVAILABLE'],
        }

    @property
    def VALUE_RIGHTMOST(self):
        """Message constant 'VALUE_RIGHTMOST'."""
        return Metaclass_Curvature.__constants['VALUE_RIGHTMOST']

    @property
    def VALUE_LEFTMOST(self):
        """Message constant 'VALUE_LEFTMOST'."""
        return Metaclass_Curvature.__constants['VALUE_LEFTMOST']

    @property
    def VALUE_MIN(self):
        """Message constant 'VALUE_MIN'."""
        return Metaclass_Curvature.__constants['VALUE_MIN']

    @property
    def VALUE_MAX(self):
        """Message constant 'VALUE_MAX'."""
        return Metaclass_Curvature.__constants['VALUE_MAX']

    @property
    def VALUE_STRAIGHT(self):
        """Message constant 'VALUE_STRAIGHT'."""
        return Metaclass_Curvature.__constants['VALUE_STRAIGHT']

    @property
    def VALUE_UNAVAILABLE(self):
        """Message constant 'VALUE_UNAVAILABLE'."""
        return Metaclass_Curvature.__constants['VALUE_UNAVAILABLE']

    @property
    def CONFIDENCE_OUT_OF_RANGE(self):
        """Message constant 'CONFIDENCE_OUT_OF_RANGE'."""
        return Metaclass_Curvature.__constants['CONFIDENCE_OUT_OF_RANGE']

    @property
    def CONFIDENCE_UNAVAILABLE(self):
        """Message constant 'CONFIDENCE_UNAVAILABLE'."""
        return Metaclass_Curvature.__constants['CONFIDENCE_UNAVAILABLE']


class Curvature(metaclass=Metaclass_Curvature):
    """
    Message class 'Curvature'.

    Constants:
      VALUE_RIGHTMOST
      VALUE_LEFTMOST
      VALUE_MIN
      VALUE_MAX
      VALUE_STRAIGHT
      VALUE_UNAVAILABLE
      CONFIDENCE_OUT_OF_RANGE
      CONFIDENCE_UNAVAILABLE
    """

    __slots__ = [
        '_value',
        '_confidence',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'value': 'int16',
        'confidence': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.confidence = kwargs.get('confidence', int())

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
        if self.confidence != other.confidence:
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
            assert value >= -32768 and value < 32768, \
                "The 'value' field must be an integer in [-32768, 32767]"
        self._value = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'confidence' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'confidence' field must be an unsigned integer in [0, 255]"
        self._confidence = value
