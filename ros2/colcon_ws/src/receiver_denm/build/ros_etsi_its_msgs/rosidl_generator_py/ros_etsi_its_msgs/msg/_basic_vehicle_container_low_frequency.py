# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/BasicVehicleContainerLowFrequency.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BasicVehicleContainerLowFrequency(type):
    """Metaclass of message 'BasicVehicleContainerLowFrequency'."""

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
                'ros_etsi_its_msgs.msg.BasicVehicleContainerLowFrequency')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__basic_vehicle_container_low_frequency
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__basic_vehicle_container_low_frequency
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__basic_vehicle_container_low_frequency
            cls._TYPE_SUPPORT = module.type_support_msg__msg__basic_vehicle_container_low_frequency
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__basic_vehicle_container_low_frequency

            from ros_etsi_its_msgs.msg import ExteriorLights
            if ExteriorLights.__class__._TYPE_SUPPORT is None:
                ExteriorLights.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import PathHistory
            if PathHistory.__class__._TYPE_SUPPORT is None:
                PathHistory.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import VehicleRole
            if VehicleRole.__class__._TYPE_SUPPORT is None:
                VehicleRole.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BasicVehicleContainerLowFrequency(metaclass=Metaclass_BasicVehicleContainerLowFrequency):
    """Message class 'BasicVehicleContainerLowFrequency'."""

    __slots__ = [
        '_vehicle_role',
        '_exterior_lights',
        '_path_history',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'vehicle_role': 'ros_etsi_its_msgs/VehicleRole',
        'exterior_lights': 'ros_etsi_its_msgs/ExteriorLights',
        'path_history': 'ros_etsi_its_msgs/PathHistory',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'VehicleRole'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'ExteriorLights'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'PathHistory'),  # noqa: E501
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
        from ros_etsi_its_msgs.msg import VehicleRole
        self.vehicle_role = kwargs.get('vehicle_role', VehicleRole())
        from ros_etsi_its_msgs.msg import ExteriorLights
        self.exterior_lights = kwargs.get('exterior_lights', ExteriorLights())
        from ros_etsi_its_msgs.msg import PathHistory
        self.path_history = kwargs.get('path_history', PathHistory())

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
        if self.vehicle_role != other.vehicle_role:
            return False
        if self.exterior_lights != other.exterior_lights:
            return False
        if self.path_history != other.path_history:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def vehicle_role(self):
        """Message field 'vehicle_role'."""
        return self._vehicle_role

    @vehicle_role.setter
    def vehicle_role(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import VehicleRole
            assert \
                isinstance(value, VehicleRole), \
                "The 'vehicle_role' field must be a sub message of type 'VehicleRole'"
        self._vehicle_role = value

    @builtins.property
    def exterior_lights(self):
        """Message field 'exterior_lights'."""
        return self._exterior_lights

    @exterior_lights.setter
    def exterior_lights(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import ExteriorLights
            assert \
                isinstance(value, ExteriorLights), \
                "The 'exterior_lights' field must be a sub message of type 'ExteriorLights'"
        self._exterior_lights = value

    @builtins.property
    def path_history(self):
        """Message field 'path_history'."""
        return self._path_history

    @path_history.setter
    def path_history(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import PathHistory
            assert \
                isinstance(value, PathHistory), \
                "The 'path_history' field must be a sub message of type 'PathHistory'"
        self._path_history = value
