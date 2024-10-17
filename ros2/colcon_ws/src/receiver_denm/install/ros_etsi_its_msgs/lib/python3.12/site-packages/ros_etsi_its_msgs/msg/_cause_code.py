# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/CauseCode.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CauseCode(type):
    """Metaclass of message 'CauseCode'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESERVED': 0,
        'TRAFFIC_CONDITION': 1,
        'ACCIDENT': 2,
        'ROADWORKS': 3,
        'ADVERSE_WEATHER_CONDITIONS_ADHESION': 4,
        'HAZARDOUS_LOCATION_SURFACE_CONDITION': 9,
        'HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD': 10,
        'HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD': 11,
        'HUMAN_PRESENCE_ON_THE_ROAD': 12,
        'WRONG_WAY_DRIVING': 14,
        'RESCUE_AND_RECOVERY_WORK_IN_PROGRESS': 15,
        'ADVERSE_WEATHER_CONDITIONS_EXTREME_WEATHER_CONDITION': 17,
        'ADVERSE_WEATHER_CONDITIONS_VISIBILITY': 18,
        'ADVERSE_WEATHER_CONDITIONS_PRECIPITATION': 19,
        'SLOW_VEHICLE': 26,
        'DANGEROUS_END_OF_QUEUE': 27,
        'VEHICLE_BREAKDOWN': 91,
        'POST_CRASH': 92,
        'HUMAN_PROBLEM': 93,
        'STATIONARY_VEHICLE': 94,
        'EMERGENCY_VEHICLE_APPROACHING': 95,
        'HAZARDOUS_LOCATION_DANGEROUS_CURVE': 96,
        'COLLISION_RISK': 97,
        'SIGNAL_VIOLATION': 98,
        'DANGEROUS_SITUATION': 99,
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
                'ros_etsi_its_msgs.msg.CauseCode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cause_code
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cause_code
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cause_code
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cause_code
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cause_code

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESERVED': cls.__constants['RESERVED'],
            'TRAFFIC_CONDITION': cls.__constants['TRAFFIC_CONDITION'],
            'ACCIDENT': cls.__constants['ACCIDENT'],
            'ROADWORKS': cls.__constants['ROADWORKS'],
            'ADVERSE_WEATHER_CONDITIONS_ADHESION': cls.__constants['ADVERSE_WEATHER_CONDITIONS_ADHESION'],
            'HAZARDOUS_LOCATION_SURFACE_CONDITION': cls.__constants['HAZARDOUS_LOCATION_SURFACE_CONDITION'],
            'HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD': cls.__constants['HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD'],
            'HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD': cls.__constants['HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD'],
            'HUMAN_PRESENCE_ON_THE_ROAD': cls.__constants['HUMAN_PRESENCE_ON_THE_ROAD'],
            'WRONG_WAY_DRIVING': cls.__constants['WRONG_WAY_DRIVING'],
            'RESCUE_AND_RECOVERY_WORK_IN_PROGRESS': cls.__constants['RESCUE_AND_RECOVERY_WORK_IN_PROGRESS'],
            'ADVERSE_WEATHER_CONDITIONS_EXTREME_WEATHER_CONDITION': cls.__constants['ADVERSE_WEATHER_CONDITIONS_EXTREME_WEATHER_CONDITION'],
            'ADVERSE_WEATHER_CONDITIONS_VISIBILITY': cls.__constants['ADVERSE_WEATHER_CONDITIONS_VISIBILITY'],
            'ADVERSE_WEATHER_CONDITIONS_PRECIPITATION': cls.__constants['ADVERSE_WEATHER_CONDITIONS_PRECIPITATION'],
            'SLOW_VEHICLE': cls.__constants['SLOW_VEHICLE'],
            'DANGEROUS_END_OF_QUEUE': cls.__constants['DANGEROUS_END_OF_QUEUE'],
            'VEHICLE_BREAKDOWN': cls.__constants['VEHICLE_BREAKDOWN'],
            'POST_CRASH': cls.__constants['POST_CRASH'],
            'HUMAN_PROBLEM': cls.__constants['HUMAN_PROBLEM'],
            'STATIONARY_VEHICLE': cls.__constants['STATIONARY_VEHICLE'],
            'EMERGENCY_VEHICLE_APPROACHING': cls.__constants['EMERGENCY_VEHICLE_APPROACHING'],
            'HAZARDOUS_LOCATION_DANGEROUS_CURVE': cls.__constants['HAZARDOUS_LOCATION_DANGEROUS_CURVE'],
            'COLLISION_RISK': cls.__constants['COLLISION_RISK'],
            'SIGNAL_VIOLATION': cls.__constants['SIGNAL_VIOLATION'],
            'DANGEROUS_SITUATION': cls.__constants['DANGEROUS_SITUATION'],
        }

    @property
    def RESERVED(self):
        """Message constant 'RESERVED'."""
        return Metaclass_CauseCode.__constants['RESERVED']

    @property
    def TRAFFIC_CONDITION(self):
        """Message constant 'TRAFFIC_CONDITION'."""
        return Metaclass_CauseCode.__constants['TRAFFIC_CONDITION']

    @property
    def ACCIDENT(self):
        """Message constant 'ACCIDENT'."""
        return Metaclass_CauseCode.__constants['ACCIDENT']

    @property
    def ROADWORKS(self):
        """Message constant 'ROADWORKS'."""
        return Metaclass_CauseCode.__constants['ROADWORKS']

    @property
    def ADVERSE_WEATHER_CONDITIONS_ADHESION(self):
        """Message constant 'ADVERSE_WEATHER_CONDITIONS_ADHESION'."""
        return Metaclass_CauseCode.__constants['ADVERSE_WEATHER_CONDITIONS_ADHESION']

    @property
    def HAZARDOUS_LOCATION_SURFACE_CONDITION(self):
        """Message constant 'HAZARDOUS_LOCATION_SURFACE_CONDITION'."""
        return Metaclass_CauseCode.__constants['HAZARDOUS_LOCATION_SURFACE_CONDITION']

    @property
    def HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD(self):
        """Message constant 'HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD'."""
        return Metaclass_CauseCode.__constants['HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD']

    @property
    def HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD(self):
        """Message constant 'HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD'."""
        return Metaclass_CauseCode.__constants['HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD']

    @property
    def HUMAN_PRESENCE_ON_THE_ROAD(self):
        """Message constant 'HUMAN_PRESENCE_ON_THE_ROAD'."""
        return Metaclass_CauseCode.__constants['HUMAN_PRESENCE_ON_THE_ROAD']

    @property
    def WRONG_WAY_DRIVING(self):
        """Message constant 'WRONG_WAY_DRIVING'."""
        return Metaclass_CauseCode.__constants['WRONG_WAY_DRIVING']

    @property
    def RESCUE_AND_RECOVERY_WORK_IN_PROGRESS(self):
        """Message constant 'RESCUE_AND_RECOVERY_WORK_IN_PROGRESS'."""
        return Metaclass_CauseCode.__constants['RESCUE_AND_RECOVERY_WORK_IN_PROGRESS']

    @property
    def ADVERSE_WEATHER_CONDITIONS_EXTREME_WEATHER_CONDITION(self):
        """Message constant 'ADVERSE_WEATHER_CONDITIONS_EXTREME_WEATHER_CONDITION'."""
        return Metaclass_CauseCode.__constants['ADVERSE_WEATHER_CONDITIONS_EXTREME_WEATHER_CONDITION']

    @property
    def ADVERSE_WEATHER_CONDITIONS_VISIBILITY(self):
        """Message constant 'ADVERSE_WEATHER_CONDITIONS_VISIBILITY'."""
        return Metaclass_CauseCode.__constants['ADVERSE_WEATHER_CONDITIONS_VISIBILITY']

    @property
    def ADVERSE_WEATHER_CONDITIONS_PRECIPITATION(self):
        """Message constant 'ADVERSE_WEATHER_CONDITIONS_PRECIPITATION'."""
        return Metaclass_CauseCode.__constants['ADVERSE_WEATHER_CONDITIONS_PRECIPITATION']

    @property
    def SLOW_VEHICLE(self):
        """Message constant 'SLOW_VEHICLE'."""
        return Metaclass_CauseCode.__constants['SLOW_VEHICLE']

    @property
    def DANGEROUS_END_OF_QUEUE(self):
        """Message constant 'DANGEROUS_END_OF_QUEUE'."""
        return Metaclass_CauseCode.__constants['DANGEROUS_END_OF_QUEUE']

    @property
    def VEHICLE_BREAKDOWN(self):
        """Message constant 'VEHICLE_BREAKDOWN'."""
        return Metaclass_CauseCode.__constants['VEHICLE_BREAKDOWN']

    @property
    def POST_CRASH(self):
        """Message constant 'POST_CRASH'."""
        return Metaclass_CauseCode.__constants['POST_CRASH']

    @property
    def HUMAN_PROBLEM(self):
        """Message constant 'HUMAN_PROBLEM'."""
        return Metaclass_CauseCode.__constants['HUMAN_PROBLEM']

    @property
    def STATIONARY_VEHICLE(self):
        """Message constant 'STATIONARY_VEHICLE'."""
        return Metaclass_CauseCode.__constants['STATIONARY_VEHICLE']

    @property
    def EMERGENCY_VEHICLE_APPROACHING(self):
        """Message constant 'EMERGENCY_VEHICLE_APPROACHING'."""
        return Metaclass_CauseCode.__constants['EMERGENCY_VEHICLE_APPROACHING']

    @property
    def HAZARDOUS_LOCATION_DANGEROUS_CURVE(self):
        """Message constant 'HAZARDOUS_LOCATION_DANGEROUS_CURVE'."""
        return Metaclass_CauseCode.__constants['HAZARDOUS_LOCATION_DANGEROUS_CURVE']

    @property
    def COLLISION_RISK(self):
        """Message constant 'COLLISION_RISK'."""
        return Metaclass_CauseCode.__constants['COLLISION_RISK']

    @property
    def SIGNAL_VIOLATION(self):
        """Message constant 'SIGNAL_VIOLATION'."""
        return Metaclass_CauseCode.__constants['SIGNAL_VIOLATION']

    @property
    def DANGEROUS_SITUATION(self):
        """Message constant 'DANGEROUS_SITUATION'."""
        return Metaclass_CauseCode.__constants['DANGEROUS_SITUATION']


class CauseCode(metaclass=Metaclass_CauseCode):
    """
    Message class 'CauseCode'.

    Constants:
      RESERVED
      TRAFFIC_CONDITION
      ACCIDENT
      ROADWORKS
      ADVERSE_WEATHER_CONDITIONS_ADHESION
      HAZARDOUS_LOCATION_SURFACE_CONDITION
      HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD
      HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD
      HUMAN_PRESENCE_ON_THE_ROAD
      WRONG_WAY_DRIVING
      RESCUE_AND_RECOVERY_WORK_IN_PROGRESS
      ADVERSE_WEATHER_CONDITIONS_EXTREME_WEATHER_CONDITION
      ADVERSE_WEATHER_CONDITIONS_VISIBILITY
      ADVERSE_WEATHER_CONDITIONS_PRECIPITATION
      SLOW_VEHICLE
      DANGEROUS_END_OF_QUEUE
      VEHICLE_BREAKDOWN
      POST_CRASH
      HUMAN_PROBLEM
      STATIONARY_VEHICLE
      EMERGENCY_VEHICLE_APPROACHING
      HAZARDOUS_LOCATION_DANGEROUS_CURVE
      COLLISION_RISK
      SIGNAL_VIOLATION
      DANGEROUS_SITUATION
    """

    __slots__ = [
        '_cause_code',
        '_sub_cause_code',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'cause_code': 'uint8',
        'sub_cause_code': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.cause_code = kwargs.get('cause_code', int())
        self.sub_cause_code = kwargs.get('sub_cause_code', int())

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
        if self.cause_code != other.cause_code:
            return False
        if self.sub_cause_code != other.sub_cause_code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cause_code(self):
        """Message field 'cause_code'."""
        return self._cause_code

    @cause_code.setter
    def cause_code(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'cause_code' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cause_code' field must be an unsigned integer in [0, 255]"
        self._cause_code = value

    @builtins.property
    def sub_cause_code(self):
        """Message field 'sub_cause_code'."""
        return self._sub_cause_code

    @sub_cause_code.setter
    def sub_cause_code(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sub_cause_code' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sub_cause_code' field must be an unsigned integer in [0, 255]"
        self._sub_cause_code = value
