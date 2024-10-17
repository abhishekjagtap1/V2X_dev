# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/ManagementContainer.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ManagementContainer(type):
    """Metaclass of message 'ManagementContainer'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TERMINATION_CANCELLATION': 0,
        'TERMINATION_NEGATION': 1,
        'TERMINATION_UNAVAILABLE': 255,
        'TRANSMISSION_INTERVAL_ONE_MILLISECOND': 1,
        'TRANSMISSION_INTERVAL_TEN_SECONDS': 10000,
        'TRANSMISSION_INTERVAL_UNAVAILABLE': 0,
        'VALIDITY_DURATION_DEFAULT': 600,
        'VALIDITY_DURATION_TIME_OF_DETECTION': 0,
        'VALIDITY_DURATION_ONE_SECOND_AFTER_DETECTION': 1,
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
                'ros_etsi_its_msgs.msg.ManagementContainer')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__management_container
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__management_container
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__management_container
            cls._TYPE_SUPPORT = module.type_support_msg__msg__management_container
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__management_container

            from ros_etsi_its_msgs.msg import ActionID
            if ActionID.__class__._TYPE_SUPPORT is None:
                ActionID.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import ReferencePosition
            if ReferencePosition.__class__._TYPE_SUPPORT is None:
                ReferencePosition.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import RelevanceDistance
            if RelevanceDistance.__class__._TYPE_SUPPORT is None:
                RelevanceDistance.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import RelevanceTrafficDirection
            if RelevanceTrafficDirection.__class__._TYPE_SUPPORT is None:
                RelevanceTrafficDirection.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import StationType
            if StationType.__class__._TYPE_SUPPORT is None:
                StationType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TERMINATION_CANCELLATION': cls.__constants['TERMINATION_CANCELLATION'],
            'TERMINATION_NEGATION': cls.__constants['TERMINATION_NEGATION'],
            'TERMINATION_UNAVAILABLE': cls.__constants['TERMINATION_UNAVAILABLE'],
            'TRANSMISSION_INTERVAL_ONE_MILLISECOND': cls.__constants['TRANSMISSION_INTERVAL_ONE_MILLISECOND'],
            'TRANSMISSION_INTERVAL_TEN_SECONDS': cls.__constants['TRANSMISSION_INTERVAL_TEN_SECONDS'],
            'TRANSMISSION_INTERVAL_UNAVAILABLE': cls.__constants['TRANSMISSION_INTERVAL_UNAVAILABLE'],
            'VALIDITY_DURATION_DEFAULT': cls.__constants['VALIDITY_DURATION_DEFAULT'],
            'VALIDITY_DURATION_TIME_OF_DETECTION': cls.__constants['VALIDITY_DURATION_TIME_OF_DETECTION'],
            'VALIDITY_DURATION_ONE_SECOND_AFTER_DETECTION': cls.__constants['VALIDITY_DURATION_ONE_SECOND_AFTER_DETECTION'],
        }

    @property
    def TERMINATION_CANCELLATION(self):
        """Message constant 'TERMINATION_CANCELLATION'."""
        return Metaclass_ManagementContainer.__constants['TERMINATION_CANCELLATION']

    @property
    def TERMINATION_NEGATION(self):
        """Message constant 'TERMINATION_NEGATION'."""
        return Metaclass_ManagementContainer.__constants['TERMINATION_NEGATION']

    @property
    def TERMINATION_UNAVAILABLE(self):
        """Message constant 'TERMINATION_UNAVAILABLE'."""
        return Metaclass_ManagementContainer.__constants['TERMINATION_UNAVAILABLE']

    @property
    def TRANSMISSION_INTERVAL_ONE_MILLISECOND(self):
        """Message constant 'TRANSMISSION_INTERVAL_ONE_MILLISECOND'."""
        return Metaclass_ManagementContainer.__constants['TRANSMISSION_INTERVAL_ONE_MILLISECOND']

    @property
    def TRANSMISSION_INTERVAL_TEN_SECONDS(self):
        """Message constant 'TRANSMISSION_INTERVAL_TEN_SECONDS'."""
        return Metaclass_ManagementContainer.__constants['TRANSMISSION_INTERVAL_TEN_SECONDS']

    @property
    def TRANSMISSION_INTERVAL_UNAVAILABLE(self):
        """Message constant 'TRANSMISSION_INTERVAL_UNAVAILABLE'."""
        return Metaclass_ManagementContainer.__constants['TRANSMISSION_INTERVAL_UNAVAILABLE']

    @property
    def VALIDITY_DURATION_DEFAULT(self):
        """Message constant 'VALIDITY_DURATION_DEFAULT'."""
        return Metaclass_ManagementContainer.__constants['VALIDITY_DURATION_DEFAULT']

    @property
    def VALIDITY_DURATION_TIME_OF_DETECTION(self):
        """Message constant 'VALIDITY_DURATION_TIME_OF_DETECTION'."""
        return Metaclass_ManagementContainer.__constants['VALIDITY_DURATION_TIME_OF_DETECTION']

    @property
    def VALIDITY_DURATION_ONE_SECOND_AFTER_DETECTION(self):
        """Message constant 'VALIDITY_DURATION_ONE_SECOND_AFTER_DETECTION'."""
        return Metaclass_ManagementContainer.__constants['VALIDITY_DURATION_ONE_SECOND_AFTER_DETECTION']


class ManagementContainer(metaclass=Metaclass_ManagementContainer):
    """
    Message class 'ManagementContainer'.

    Constants:
      TERMINATION_CANCELLATION
      TERMINATION_NEGATION
      TERMINATION_UNAVAILABLE
      TRANSMISSION_INTERVAL_ONE_MILLISECOND
      TRANSMISSION_INTERVAL_TEN_SECONDS
      TRANSMISSION_INTERVAL_UNAVAILABLE
      VALIDITY_DURATION_DEFAULT
      VALIDITY_DURATION_TIME_OF_DETECTION
      VALIDITY_DURATION_ONE_SECOND_AFTER_DETECTION
    """

    __slots__ = [
        '_action_id',
        '_detection_time',
        '_reference_time',
        '_termination',
        '_event_position',
        '_relevance_distance',
        '_relevance_traffic_direction',
        '_validity_duration',
        '_transmission_interval',
        '_station_type',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'action_id': 'ros_etsi_its_msgs/ActionID',
        'detection_time': 'uint64',
        'reference_time': 'uint64',
        'termination': 'uint8',
        'event_position': 'ros_etsi_its_msgs/ReferencePosition',
        'relevance_distance': 'ros_etsi_its_msgs/RelevanceDistance',
        'relevance_traffic_direction': 'ros_etsi_its_msgs/RelevanceTrafficDirection',
        'validity_duration': 'uint32',
        'transmission_interval': 'uint32',
        'station_type': 'ros_etsi_its_msgs/StationType',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'ActionID'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'ReferencePosition'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'RelevanceDistance'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'RelevanceTrafficDirection'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'StationType'),  # noqa: E501
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
        from ros_etsi_its_msgs.msg import ActionID
        self.action_id = kwargs.get('action_id', ActionID())
        self.detection_time = kwargs.get('detection_time', int())
        self.reference_time = kwargs.get('reference_time', int())
        self.termination = kwargs.get('termination', int())
        from ros_etsi_its_msgs.msg import ReferencePosition
        self.event_position = kwargs.get('event_position', ReferencePosition())
        from ros_etsi_its_msgs.msg import RelevanceDistance
        self.relevance_distance = kwargs.get('relevance_distance', RelevanceDistance())
        from ros_etsi_its_msgs.msg import RelevanceTrafficDirection
        self.relevance_traffic_direction = kwargs.get('relevance_traffic_direction', RelevanceTrafficDirection())
        self.validity_duration = kwargs.get('validity_duration', int())
        self.transmission_interval = kwargs.get('transmission_interval', int())
        from ros_etsi_its_msgs.msg import StationType
        self.station_type = kwargs.get('station_type', StationType())

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
        if self.action_id != other.action_id:
            return False
        if self.detection_time != other.detection_time:
            return False
        if self.reference_time != other.reference_time:
            return False
        if self.termination != other.termination:
            return False
        if self.event_position != other.event_position:
            return False
        if self.relevance_distance != other.relevance_distance:
            return False
        if self.relevance_traffic_direction != other.relevance_traffic_direction:
            return False
        if self.validity_duration != other.validity_duration:
            return False
        if self.transmission_interval != other.transmission_interval:
            return False
        if self.station_type != other.station_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def action_id(self):
        """Message field 'action_id'."""
        return self._action_id

    @action_id.setter
    def action_id(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import ActionID
            assert \
                isinstance(value, ActionID), \
                "The 'action_id' field must be a sub message of type 'ActionID'"
        self._action_id = value

    @builtins.property
    def detection_time(self):
        """Message field 'detection_time'."""
        return self._detection_time

    @detection_time.setter
    def detection_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'detection_time' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'detection_time' field must be an unsigned integer in [0, 18446744073709551615]"
        self._detection_time = value

    @builtins.property
    def reference_time(self):
        """Message field 'reference_time'."""
        return self._reference_time

    @reference_time.setter
    def reference_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'reference_time' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'reference_time' field must be an unsigned integer in [0, 18446744073709551615]"
        self._reference_time = value

    @builtins.property
    def termination(self):
        """Message field 'termination'."""
        return self._termination

    @termination.setter
    def termination(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'termination' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'termination' field must be an unsigned integer in [0, 255]"
        self._termination = value

    @builtins.property
    def event_position(self):
        """Message field 'event_position'."""
        return self._event_position

    @event_position.setter
    def event_position(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import ReferencePosition
            assert \
                isinstance(value, ReferencePosition), \
                "The 'event_position' field must be a sub message of type 'ReferencePosition'"
        self._event_position = value

    @builtins.property
    def relevance_distance(self):
        """Message field 'relevance_distance'."""
        return self._relevance_distance

    @relevance_distance.setter
    def relevance_distance(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import RelevanceDistance
            assert \
                isinstance(value, RelevanceDistance), \
                "The 'relevance_distance' field must be a sub message of type 'RelevanceDistance'"
        self._relevance_distance = value

    @builtins.property
    def relevance_traffic_direction(self):
        """Message field 'relevance_traffic_direction'."""
        return self._relevance_traffic_direction

    @relevance_traffic_direction.setter
    def relevance_traffic_direction(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import RelevanceTrafficDirection
            assert \
                isinstance(value, RelevanceTrafficDirection), \
                "The 'relevance_traffic_direction' field must be a sub message of type 'RelevanceTrafficDirection'"
        self._relevance_traffic_direction = value

    @builtins.property
    def validity_duration(self):
        """Message field 'validity_duration'."""
        return self._validity_duration

    @validity_duration.setter
    def validity_duration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'validity_duration' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'validity_duration' field must be an unsigned integer in [0, 4294967295]"
        self._validity_duration = value

    @builtins.property
    def transmission_interval(self):
        """Message field 'transmission_interval'."""
        return self._transmission_interval

    @transmission_interval.setter
    def transmission_interval(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'transmission_interval' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'transmission_interval' field must be an unsigned integer in [0, 4294967295]"
        self._transmission_interval = value

    @builtins.property
    def station_type(self):
        """Message field 'station_type'."""
        return self._station_type

    @station_type.setter
    def station_type(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import StationType
            assert \
                isinstance(value, StationType), \
                "The 'station_type' field must be a sub message of type 'StationType'"
        self._station_type = value
