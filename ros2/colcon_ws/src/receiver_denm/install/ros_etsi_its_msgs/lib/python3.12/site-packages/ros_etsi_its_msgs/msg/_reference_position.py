# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/ReferencePosition.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ReferencePosition(type):
    """Metaclass of message 'ReferencePosition'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LATITUDE_UNAVAILABLE': 900000001,
        'LONGITUDE_UNAVAILABLE': 1800000001,
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
                'ros_etsi_its_msgs.msg.ReferencePosition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__reference_position
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__reference_position
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__reference_position
            cls._TYPE_SUPPORT = module.type_support_msg__msg__reference_position
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__reference_position

            from ros_etsi_its_msgs.msg import Altitude
            if Altitude.__class__._TYPE_SUPPORT is None:
                Altitude.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import PositionConfidenceEllipse
            if PositionConfidenceEllipse.__class__._TYPE_SUPPORT is None:
                PositionConfidenceEllipse.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LATITUDE_UNAVAILABLE': cls.__constants['LATITUDE_UNAVAILABLE'],
            'LONGITUDE_UNAVAILABLE': cls.__constants['LONGITUDE_UNAVAILABLE'],
        }

    @property
    def LATITUDE_UNAVAILABLE(self):
        """Message constant 'LATITUDE_UNAVAILABLE'."""
        return Metaclass_ReferencePosition.__constants['LATITUDE_UNAVAILABLE']

    @property
    def LONGITUDE_UNAVAILABLE(self):
        """Message constant 'LONGITUDE_UNAVAILABLE'."""
        return Metaclass_ReferencePosition.__constants['LONGITUDE_UNAVAILABLE']


class ReferencePosition(metaclass=Metaclass_ReferencePosition):
    """
    Message class 'ReferencePosition'.

    Constants:
      LATITUDE_UNAVAILABLE
      LONGITUDE_UNAVAILABLE
    """

    __slots__ = [
        '_latitude',
        '_longitude',
        '_position_confidence',
        '_altitude',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'latitude': 'int64',
        'longitude': 'int64',
        'position_confidence': 'ros_etsi_its_msgs/PositionConfidenceEllipse',
        'altitude': 'ros_etsi_its_msgs/Altitude',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'PositionConfidenceEllipse'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'Altitude'),  # noqa: E501
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
        self.latitude = kwargs.get('latitude', int())
        self.longitude = kwargs.get('longitude', int())
        from ros_etsi_its_msgs.msg import PositionConfidenceEllipse
        self.position_confidence = kwargs.get('position_confidence', PositionConfidenceEllipse())
        from ros_etsi_its_msgs.msg import Altitude
        self.altitude = kwargs.get('altitude', Altitude())

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
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.position_confidence != other.position_confidence:
            return False
        if self.altitude != other.altitude:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'latitude' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'latitude' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._latitude = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'longitude' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'longitude' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._longitude = value

    @builtins.property
    def position_confidence(self):
        """Message field 'position_confidence'."""
        return self._position_confidence

    @position_confidence.setter
    def position_confidence(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import PositionConfidenceEllipse
            assert \
                isinstance(value, PositionConfidenceEllipse), \
                "The 'position_confidence' field must be a sub message of type 'PositionConfidenceEllipse'"
        self._position_confidence = value

    @builtins.property
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import Altitude
            assert \
                isinstance(value, Altitude), \
                "The 'altitude' field must be a sub message of type 'Altitude'"
        self._altitude = value
