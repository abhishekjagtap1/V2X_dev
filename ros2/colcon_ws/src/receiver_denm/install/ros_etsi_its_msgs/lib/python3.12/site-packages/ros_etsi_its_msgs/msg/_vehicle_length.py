# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/VehicleLength.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleLength(type):
    """Metaclass of message 'VehicleLength'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'VALUE_TEN_CENTIMETERS': 1,
        'VALUE_OUT_OF_RANGE': 1022,
        'VALUE_UNAVAILABLE': 1023,
        'CONFIDENCE_INDICATION_NO_TRAILER': 0,
        'CONFIDENCE_INDICATION_TRAILER_WITH_KNOWN_LENGTH': 1,
        'CONFIDENCE_INDICATION_TRAILER_WITH_UNKNOWN_LENGTH': 2,
        'CONFIDENCE_INDICATION_UNKNOWN_TRAILER_PRESENCE': 3,
        'CONFIDENCE_INDICATION_UNAVAILABLE': 4,
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
                'ros_etsi_its_msgs.msg.VehicleLength')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_length
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_length
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_length
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_length
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_length

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'VALUE_TEN_CENTIMETERS': cls.__constants['VALUE_TEN_CENTIMETERS'],
            'VALUE_OUT_OF_RANGE': cls.__constants['VALUE_OUT_OF_RANGE'],
            'VALUE_UNAVAILABLE': cls.__constants['VALUE_UNAVAILABLE'],
            'CONFIDENCE_INDICATION_NO_TRAILER': cls.__constants['CONFIDENCE_INDICATION_NO_TRAILER'],
            'CONFIDENCE_INDICATION_TRAILER_WITH_KNOWN_LENGTH': cls.__constants['CONFIDENCE_INDICATION_TRAILER_WITH_KNOWN_LENGTH'],
            'CONFIDENCE_INDICATION_TRAILER_WITH_UNKNOWN_LENGTH': cls.__constants['CONFIDENCE_INDICATION_TRAILER_WITH_UNKNOWN_LENGTH'],
            'CONFIDENCE_INDICATION_UNKNOWN_TRAILER_PRESENCE': cls.__constants['CONFIDENCE_INDICATION_UNKNOWN_TRAILER_PRESENCE'],
            'CONFIDENCE_INDICATION_UNAVAILABLE': cls.__constants['CONFIDENCE_INDICATION_UNAVAILABLE'],
        }

    @property
    def VALUE_TEN_CENTIMETERS(self):
        """Message constant 'VALUE_TEN_CENTIMETERS'."""
        return Metaclass_VehicleLength.__constants['VALUE_TEN_CENTIMETERS']

    @property
    def VALUE_OUT_OF_RANGE(self):
        """Message constant 'VALUE_OUT_OF_RANGE'."""
        return Metaclass_VehicleLength.__constants['VALUE_OUT_OF_RANGE']

    @property
    def VALUE_UNAVAILABLE(self):
        """Message constant 'VALUE_UNAVAILABLE'."""
        return Metaclass_VehicleLength.__constants['VALUE_UNAVAILABLE']

    @property
    def CONFIDENCE_INDICATION_NO_TRAILER(self):
        """Message constant 'CONFIDENCE_INDICATION_NO_TRAILER'."""
        return Metaclass_VehicleLength.__constants['CONFIDENCE_INDICATION_NO_TRAILER']

    @property
    def CONFIDENCE_INDICATION_TRAILER_WITH_KNOWN_LENGTH(self):
        """Message constant 'CONFIDENCE_INDICATION_TRAILER_WITH_KNOWN_LENGTH'."""
        return Metaclass_VehicleLength.__constants['CONFIDENCE_INDICATION_TRAILER_WITH_KNOWN_LENGTH']

    @property
    def CONFIDENCE_INDICATION_TRAILER_WITH_UNKNOWN_LENGTH(self):
        """Message constant 'CONFIDENCE_INDICATION_TRAILER_WITH_UNKNOWN_LENGTH'."""
        return Metaclass_VehicleLength.__constants['CONFIDENCE_INDICATION_TRAILER_WITH_UNKNOWN_LENGTH']

    @property
    def CONFIDENCE_INDICATION_UNKNOWN_TRAILER_PRESENCE(self):
        """Message constant 'CONFIDENCE_INDICATION_UNKNOWN_TRAILER_PRESENCE'."""
        return Metaclass_VehicleLength.__constants['CONFIDENCE_INDICATION_UNKNOWN_TRAILER_PRESENCE']

    @property
    def CONFIDENCE_INDICATION_UNAVAILABLE(self):
        """Message constant 'CONFIDENCE_INDICATION_UNAVAILABLE'."""
        return Metaclass_VehicleLength.__constants['CONFIDENCE_INDICATION_UNAVAILABLE']


class VehicleLength(metaclass=Metaclass_VehicleLength):
    """
    Message class 'VehicleLength'.

    Constants:
      VALUE_TEN_CENTIMETERS
      VALUE_OUT_OF_RANGE
      VALUE_UNAVAILABLE
      CONFIDENCE_INDICATION_NO_TRAILER
      CONFIDENCE_INDICATION_TRAILER_WITH_KNOWN_LENGTH
      CONFIDENCE_INDICATION_TRAILER_WITH_UNKNOWN_LENGTH
      CONFIDENCE_INDICATION_UNKNOWN_TRAILER_PRESENCE
      CONFIDENCE_INDICATION_UNAVAILABLE
    """

    __slots__ = [
        '_value',
        '_confidence_indication',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'value': 'uint16',
        'confidence_indication': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        self.confidence_indication = kwargs.get('confidence_indication', int())

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
        if self.confidence_indication != other.confidence_indication:
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
            assert value >= 0 and value < 65536, \
                "The 'value' field must be an unsigned integer in [0, 65535]"
        self._value = value

    @builtins.property
    def confidence_indication(self):
        """Message field 'confidence_indication'."""
        return self._confidence_indication

    @confidence_indication.setter
    def confidence_indication(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'confidence_indication' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'confidence_indication' field must be an unsigned integer in [0, 255]"
        self._confidence_indication = value
