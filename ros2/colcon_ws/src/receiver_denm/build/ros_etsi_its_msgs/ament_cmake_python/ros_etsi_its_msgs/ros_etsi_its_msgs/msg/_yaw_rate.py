# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/YawRate.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_YawRate(type):
    """Metaclass of message 'YawRate'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'VALUE_UNAVAILABLE': 32767,
        'CONFIDENCE_0DOT01_DEGSEC': 0,
        'CONFIDENCE_0DOT05_DEGSEC': 1,
        'CONFIDENCE_0DOT1_DEGSEC': 2,
        'CONFIDENCE_1_DEGSEC': 3,
        'CONFIDENCE_5_DEGSEC': 4,
        'CONFIDENCE_10_DEGSEC': 5,
        'CONFIDENCE_100_DEGSEC': 6,
        'CONFIDENCE_OUT_OF_RANGE': 7,
        'CONFIDENCE_UNAVAILABLE': 8,
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
                'ros_etsi_its_msgs.msg.YawRate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__yaw_rate
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__yaw_rate
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__yaw_rate
            cls._TYPE_SUPPORT = module.type_support_msg__msg__yaw_rate
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__yaw_rate

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'VALUE_UNAVAILABLE': cls.__constants['VALUE_UNAVAILABLE'],
            'CONFIDENCE_0DOT01_DEGSEC': cls.__constants['CONFIDENCE_0DOT01_DEGSEC'],
            'CONFIDENCE_0DOT05_DEGSEC': cls.__constants['CONFIDENCE_0DOT05_DEGSEC'],
            'CONFIDENCE_0DOT1_DEGSEC': cls.__constants['CONFIDENCE_0DOT1_DEGSEC'],
            'CONFIDENCE_1_DEGSEC': cls.__constants['CONFIDENCE_1_DEGSEC'],
            'CONFIDENCE_5_DEGSEC': cls.__constants['CONFIDENCE_5_DEGSEC'],
            'CONFIDENCE_10_DEGSEC': cls.__constants['CONFIDENCE_10_DEGSEC'],
            'CONFIDENCE_100_DEGSEC': cls.__constants['CONFIDENCE_100_DEGSEC'],
            'CONFIDENCE_OUT_OF_RANGE': cls.__constants['CONFIDENCE_OUT_OF_RANGE'],
            'CONFIDENCE_UNAVAILABLE': cls.__constants['CONFIDENCE_UNAVAILABLE'],
        }

    @property
    def VALUE_UNAVAILABLE(self):
        """Message constant 'VALUE_UNAVAILABLE'."""
        return Metaclass_YawRate.__constants['VALUE_UNAVAILABLE']

    @property
    def CONFIDENCE_0DOT01_DEGSEC(self):
        """Message constant 'CONFIDENCE_0DOT01_DEGSEC'."""
        return Metaclass_YawRate.__constants['CONFIDENCE_0DOT01_DEGSEC']

    @property
    def CONFIDENCE_0DOT05_DEGSEC(self):
        """Message constant 'CONFIDENCE_0DOT05_DEGSEC'."""
        return Metaclass_YawRate.__constants['CONFIDENCE_0DOT05_DEGSEC']

    @property
    def CONFIDENCE_0DOT1_DEGSEC(self):
        """Message constant 'CONFIDENCE_0DOT1_DEGSEC'."""
        return Metaclass_YawRate.__constants['CONFIDENCE_0DOT1_DEGSEC']

    @property
    def CONFIDENCE_1_DEGSEC(self):
        """Message constant 'CONFIDENCE_1_DEGSEC'."""
        return Metaclass_YawRate.__constants['CONFIDENCE_1_DEGSEC']

    @property
    def CONFIDENCE_5_DEGSEC(self):
        """Message constant 'CONFIDENCE_5_DEGSEC'."""
        return Metaclass_YawRate.__constants['CONFIDENCE_5_DEGSEC']

    @property
    def CONFIDENCE_10_DEGSEC(self):
        """Message constant 'CONFIDENCE_10_DEGSEC'."""
        return Metaclass_YawRate.__constants['CONFIDENCE_10_DEGSEC']

    @property
    def CONFIDENCE_100_DEGSEC(self):
        """Message constant 'CONFIDENCE_100_DEGSEC'."""
        return Metaclass_YawRate.__constants['CONFIDENCE_100_DEGSEC']

    @property
    def CONFIDENCE_OUT_OF_RANGE(self):
        """Message constant 'CONFIDENCE_OUT_OF_RANGE'."""
        return Metaclass_YawRate.__constants['CONFIDENCE_OUT_OF_RANGE']

    @property
    def CONFIDENCE_UNAVAILABLE(self):
        """Message constant 'CONFIDENCE_UNAVAILABLE'."""
        return Metaclass_YawRate.__constants['CONFIDENCE_UNAVAILABLE']


class YawRate(metaclass=Metaclass_YawRate):
    """
    Message class 'YawRate'.

    Constants:
      VALUE_UNAVAILABLE
      CONFIDENCE_0DOT01_DEGSEC
      CONFIDENCE_0DOT05_DEGSEC
      CONFIDENCE_0DOT1_DEGSEC
      CONFIDENCE_1_DEGSEC
      CONFIDENCE_5_DEGSEC
      CONFIDENCE_10_DEGSEC
      CONFIDENCE_100_DEGSEC
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
