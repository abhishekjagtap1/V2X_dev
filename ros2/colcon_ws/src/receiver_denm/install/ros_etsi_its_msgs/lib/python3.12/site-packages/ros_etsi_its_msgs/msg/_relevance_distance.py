# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/RelevanceDistance.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RelevanceDistance(type):
    """Metaclass of message 'RelevanceDistance'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LESS_THAN_50M': 0,
        'LESS_THAN_100M': 1,
        'LESS_THAN_200M': 2,
        'LESS_THAN_500M': 3,
        'LESS_THAN_1000M': 4,
        'LESS_THAN_5KM': 5,
        'LESS_THAN_10KM': 6,
        'OVER_10KM': 7,
        'UNAVAILABLE': 255,
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
                'ros_etsi_its_msgs.msg.RelevanceDistance')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__relevance_distance
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__relevance_distance
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__relevance_distance
            cls._TYPE_SUPPORT = module.type_support_msg__msg__relevance_distance
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__relevance_distance

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LESS_THAN_50M': cls.__constants['LESS_THAN_50M'],
            'LESS_THAN_100M': cls.__constants['LESS_THAN_100M'],
            'LESS_THAN_200M': cls.__constants['LESS_THAN_200M'],
            'LESS_THAN_500M': cls.__constants['LESS_THAN_500M'],
            'LESS_THAN_1000M': cls.__constants['LESS_THAN_1000M'],
            'LESS_THAN_5KM': cls.__constants['LESS_THAN_5KM'],
            'LESS_THAN_10KM': cls.__constants['LESS_THAN_10KM'],
            'OVER_10KM': cls.__constants['OVER_10KM'],
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
        }

    @property
    def LESS_THAN_50M(self):
        """Message constant 'LESS_THAN_50M'."""
        return Metaclass_RelevanceDistance.__constants['LESS_THAN_50M']

    @property
    def LESS_THAN_100M(self):
        """Message constant 'LESS_THAN_100M'."""
        return Metaclass_RelevanceDistance.__constants['LESS_THAN_100M']

    @property
    def LESS_THAN_200M(self):
        """Message constant 'LESS_THAN_200M'."""
        return Metaclass_RelevanceDistance.__constants['LESS_THAN_200M']

    @property
    def LESS_THAN_500M(self):
        """Message constant 'LESS_THAN_500M'."""
        return Metaclass_RelevanceDistance.__constants['LESS_THAN_500M']

    @property
    def LESS_THAN_1000M(self):
        """Message constant 'LESS_THAN_1000M'."""
        return Metaclass_RelevanceDistance.__constants['LESS_THAN_1000M']

    @property
    def LESS_THAN_5KM(self):
        """Message constant 'LESS_THAN_5KM'."""
        return Metaclass_RelevanceDistance.__constants['LESS_THAN_5KM']

    @property
    def LESS_THAN_10KM(self):
        """Message constant 'LESS_THAN_10KM'."""
        return Metaclass_RelevanceDistance.__constants['LESS_THAN_10KM']

    @property
    def OVER_10KM(self):
        """Message constant 'OVER_10KM'."""
        return Metaclass_RelevanceDistance.__constants['OVER_10KM']

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_RelevanceDistance.__constants['UNAVAILABLE']


class RelevanceDistance(metaclass=Metaclass_RelevanceDistance):
    """
    Message class 'RelevanceDistance'.

    Constants:
      LESS_THAN_50M
      LESS_THAN_100M
      LESS_THAN_200M
      LESS_THAN_500M
      LESS_THAN_1000M
      LESS_THAN_5KM
      LESS_THAN_10KM
      OVER_10KM
      UNAVAILABLE
    """

    __slots__ = [
        '_value',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'value': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
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
            assert value >= 0 and value < 256, \
                "The 'value' field must be an unsigned integer in [0, 255]"
        self._value = value
