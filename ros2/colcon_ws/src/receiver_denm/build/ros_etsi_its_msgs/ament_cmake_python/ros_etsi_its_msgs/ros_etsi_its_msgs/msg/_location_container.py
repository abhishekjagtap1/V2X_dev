# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/LocationContainer.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LocationContainer(type):
    """Metaclass of message 'LocationContainer'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ROAD_TYPE_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES': 0,
        'ROAD_TYPE_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES': 1,
        'ROAD_TYPE_NON_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES': 2,
        'ROAD_TYPE_NON_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES': 3,
        'ROAD_TYPE_UNAVAILABLE': 255,
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
                'ros_etsi_its_msgs.msg.LocationContainer')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__location_container
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__location_container
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__location_container
            cls._TYPE_SUPPORT = module.type_support_msg__msg__location_container
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__location_container

            from ros_etsi_its_msgs.msg import Heading
            if Heading.__class__._TYPE_SUPPORT is None:
                Heading.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import PathHistory
            if PathHistory.__class__._TYPE_SUPPORT is None:
                PathHistory.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import Speed
            if Speed.__class__._TYPE_SUPPORT is None:
                Speed.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ROAD_TYPE_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES': cls.__constants['ROAD_TYPE_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES'],
            'ROAD_TYPE_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES': cls.__constants['ROAD_TYPE_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES'],
            'ROAD_TYPE_NON_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES': cls.__constants['ROAD_TYPE_NON_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES'],
            'ROAD_TYPE_NON_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES': cls.__constants['ROAD_TYPE_NON_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES'],
            'ROAD_TYPE_UNAVAILABLE': cls.__constants['ROAD_TYPE_UNAVAILABLE'],
        }

    @property
    def ROAD_TYPE_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES(self):
        """Message constant 'ROAD_TYPE_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES'."""
        return Metaclass_LocationContainer.__constants['ROAD_TYPE_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES']

    @property
    def ROAD_TYPE_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES(self):
        """Message constant 'ROAD_TYPE_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES'."""
        return Metaclass_LocationContainer.__constants['ROAD_TYPE_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES']

    @property
    def ROAD_TYPE_NON_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES(self):
        """Message constant 'ROAD_TYPE_NON_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES'."""
        return Metaclass_LocationContainer.__constants['ROAD_TYPE_NON_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES']

    @property
    def ROAD_TYPE_NON_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES(self):
        """Message constant 'ROAD_TYPE_NON_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES'."""
        return Metaclass_LocationContainer.__constants['ROAD_TYPE_NON_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES']

    @property
    def ROAD_TYPE_UNAVAILABLE(self):
        """Message constant 'ROAD_TYPE_UNAVAILABLE'."""
        return Metaclass_LocationContainer.__constants['ROAD_TYPE_UNAVAILABLE']


class LocationContainer(metaclass=Metaclass_LocationContainer):
    """
    Message class 'LocationContainer'.

    Constants:
      ROAD_TYPE_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES
      ROAD_TYPE_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES
      ROAD_TYPE_NON_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES
      ROAD_TYPE_NON_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES
      ROAD_TYPE_UNAVAILABLE
    """

    __slots__ = [
        '_event_speed',
        '_event_position_heading',
        '_traces',
        '_road_type',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'event_speed': 'ros_etsi_its_msgs/Speed',
        'event_position_heading': 'ros_etsi_its_msgs/Heading',
        'traces': 'sequence<ros_etsi_its_msgs/PathHistory>',
        'road_type': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'Speed'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'Heading'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'PathHistory')),  # noqa: E501
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
        from ros_etsi_its_msgs.msg import Speed
        self.event_speed = kwargs.get('event_speed', Speed())
        from ros_etsi_its_msgs.msg import Heading
        self.event_position_heading = kwargs.get('event_position_heading', Heading())
        self.traces = kwargs.get('traces', [])
        self.road_type = kwargs.get('road_type', int())

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
        if self.event_speed != other.event_speed:
            return False
        if self.event_position_heading != other.event_position_heading:
            return False
        if self.traces != other.traces:
            return False
        if self.road_type != other.road_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def event_speed(self):
        """Message field 'event_speed'."""
        return self._event_speed

    @event_speed.setter
    def event_speed(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import Speed
            assert \
                isinstance(value, Speed), \
                "The 'event_speed' field must be a sub message of type 'Speed'"
        self._event_speed = value

    @builtins.property
    def event_position_heading(self):
        """Message field 'event_position_heading'."""
        return self._event_position_heading

    @event_position_heading.setter
    def event_position_heading(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import Heading
            assert \
                isinstance(value, Heading), \
                "The 'event_position_heading' field must be a sub message of type 'Heading'"
        self._event_position_heading = value

    @builtins.property
    def traces(self):
        """Message field 'traces'."""
        return self._traces

    @traces.setter
    def traces(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import PathHistory
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
                 all(isinstance(v, PathHistory) for v in value) and
                 True), \
                "The 'traces' field must be a set or sequence and each value of type 'PathHistory'"
        self._traces = value

    @builtins.property
    def road_type(self):
        """Message field 'road_type'."""
        return self._road_type

    @road_type.setter
    def road_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'road_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'road_type' field must be an unsigned integer in [0, 255]"
        self._road_type = value
