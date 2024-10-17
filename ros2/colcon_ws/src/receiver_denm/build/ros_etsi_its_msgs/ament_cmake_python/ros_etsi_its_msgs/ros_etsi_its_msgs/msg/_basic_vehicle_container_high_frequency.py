# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/BasicVehicleContainerHighFrequency.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BasicVehicleContainerHighFrequency(type):
    """Metaclass of message 'BasicVehicleContainerHighFrequency'."""

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
                'ros_etsi_its_msgs.msg.BasicVehicleContainerHighFrequency')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__basic_vehicle_container_high_frequency
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__basic_vehicle_container_high_frequency
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__basic_vehicle_container_high_frequency
            cls._TYPE_SUPPORT = module.type_support_msg__msg__basic_vehicle_container_high_frequency
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__basic_vehicle_container_high_frequency

            from ros_etsi_its_msgs.msg import AccelerationControl
            if AccelerationControl.__class__._TYPE_SUPPORT is None:
                AccelerationControl.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import Curvature
            if Curvature.__class__._TYPE_SUPPORT is None:
                Curvature.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import CurvatureCalculationMode
            if CurvatureCalculationMode.__class__._TYPE_SUPPORT is None:
                CurvatureCalculationMode.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import DriveDirection
            if DriveDirection.__class__._TYPE_SUPPORT is None:
                DriveDirection.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import Heading
            if Heading.__class__._TYPE_SUPPORT is None:
                Heading.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import LongitudinalAcceleration
            if LongitudinalAcceleration.__class__._TYPE_SUPPORT is None:
                LongitudinalAcceleration.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import Speed
            if Speed.__class__._TYPE_SUPPORT is None:
                Speed.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import VehicleLength
            if VehicleLength.__class__._TYPE_SUPPORT is None:
                VehicleLength.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import VehicleWidth
            if VehicleWidth.__class__._TYPE_SUPPORT is None:
                VehicleWidth.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import YawRate
            if YawRate.__class__._TYPE_SUPPORT is None:
                YawRate.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BasicVehicleContainerHighFrequency(metaclass=Metaclass_BasicVehicleContainerHighFrequency):
    """Message class 'BasicVehicleContainerHighFrequency'."""

    __slots__ = [
        '_heading',
        '_speed',
        '_drive_direction',
        '_vehicle_length',
        '_vehicle_width',
        '_longitudinal_acceleration',
        '_curvature',
        '_curvature_calculation_mode',
        '_yaw_rate',
        '_has_acceleration_control',
        '_acceleration_control',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'heading': 'ros_etsi_its_msgs/Heading',
        'speed': 'ros_etsi_its_msgs/Speed',
        'drive_direction': 'ros_etsi_its_msgs/DriveDirection',
        'vehicle_length': 'ros_etsi_its_msgs/VehicleLength',
        'vehicle_width': 'ros_etsi_its_msgs/VehicleWidth',
        'longitudinal_acceleration': 'ros_etsi_its_msgs/LongitudinalAcceleration',
        'curvature': 'ros_etsi_its_msgs/Curvature',
        'curvature_calculation_mode': 'ros_etsi_its_msgs/CurvatureCalculationMode',
        'yaw_rate': 'ros_etsi_its_msgs/YawRate',
        'has_acceleration_control': 'boolean',
        'acceleration_control': 'ros_etsi_its_msgs/AccelerationControl',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'Heading'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'Speed'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'DriveDirection'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'VehicleLength'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'VehicleWidth'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'LongitudinalAcceleration'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'Curvature'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'CurvatureCalculationMode'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'YawRate'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'AccelerationControl'),  # noqa: E501
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
        from ros_etsi_its_msgs.msg import Heading
        self.heading = kwargs.get('heading', Heading())
        from ros_etsi_its_msgs.msg import Speed
        self.speed = kwargs.get('speed', Speed())
        from ros_etsi_its_msgs.msg import DriveDirection
        self.drive_direction = kwargs.get('drive_direction', DriveDirection())
        from ros_etsi_its_msgs.msg import VehicleLength
        self.vehicle_length = kwargs.get('vehicle_length', VehicleLength())
        from ros_etsi_its_msgs.msg import VehicleWidth
        self.vehicle_width = kwargs.get('vehicle_width', VehicleWidth())
        from ros_etsi_its_msgs.msg import LongitudinalAcceleration
        self.longitudinal_acceleration = kwargs.get('longitudinal_acceleration', LongitudinalAcceleration())
        from ros_etsi_its_msgs.msg import Curvature
        self.curvature = kwargs.get('curvature', Curvature())
        from ros_etsi_its_msgs.msg import CurvatureCalculationMode
        self.curvature_calculation_mode = kwargs.get('curvature_calculation_mode', CurvatureCalculationMode())
        from ros_etsi_its_msgs.msg import YawRate
        self.yaw_rate = kwargs.get('yaw_rate', YawRate())
        self.has_acceleration_control = kwargs.get('has_acceleration_control', bool())
        from ros_etsi_its_msgs.msg import AccelerationControl
        self.acceleration_control = kwargs.get('acceleration_control', AccelerationControl())

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
        if self.heading != other.heading:
            return False
        if self.speed != other.speed:
            return False
        if self.drive_direction != other.drive_direction:
            return False
        if self.vehicle_length != other.vehicle_length:
            return False
        if self.vehicle_width != other.vehicle_width:
            return False
        if self.longitudinal_acceleration != other.longitudinal_acceleration:
            return False
        if self.curvature != other.curvature:
            return False
        if self.curvature_calculation_mode != other.curvature_calculation_mode:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.has_acceleration_control != other.has_acceleration_control:
            return False
        if self.acceleration_control != other.acceleration_control:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import Heading
            assert \
                isinstance(value, Heading), \
                "The 'heading' field must be a sub message of type 'Heading'"
        self._heading = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import Speed
            assert \
                isinstance(value, Speed), \
                "The 'speed' field must be a sub message of type 'Speed'"
        self._speed = value

    @builtins.property
    def drive_direction(self):
        """Message field 'drive_direction'."""
        return self._drive_direction

    @drive_direction.setter
    def drive_direction(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import DriveDirection
            assert \
                isinstance(value, DriveDirection), \
                "The 'drive_direction' field must be a sub message of type 'DriveDirection'"
        self._drive_direction = value

    @builtins.property
    def vehicle_length(self):
        """Message field 'vehicle_length'."""
        return self._vehicle_length

    @vehicle_length.setter
    def vehicle_length(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import VehicleLength
            assert \
                isinstance(value, VehicleLength), \
                "The 'vehicle_length' field must be a sub message of type 'VehicleLength'"
        self._vehicle_length = value

    @builtins.property
    def vehicle_width(self):
        """Message field 'vehicle_width'."""
        return self._vehicle_width

    @vehicle_width.setter
    def vehicle_width(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import VehicleWidth
            assert \
                isinstance(value, VehicleWidth), \
                "The 'vehicle_width' field must be a sub message of type 'VehicleWidth'"
        self._vehicle_width = value

    @builtins.property
    def longitudinal_acceleration(self):
        """Message field 'longitudinal_acceleration'."""
        return self._longitudinal_acceleration

    @longitudinal_acceleration.setter
    def longitudinal_acceleration(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import LongitudinalAcceleration
            assert \
                isinstance(value, LongitudinalAcceleration), \
                "The 'longitudinal_acceleration' field must be a sub message of type 'LongitudinalAcceleration'"
        self._longitudinal_acceleration = value

    @builtins.property
    def curvature(self):
        """Message field 'curvature'."""
        return self._curvature

    @curvature.setter
    def curvature(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import Curvature
            assert \
                isinstance(value, Curvature), \
                "The 'curvature' field must be a sub message of type 'Curvature'"
        self._curvature = value

    @builtins.property
    def curvature_calculation_mode(self):
        """Message field 'curvature_calculation_mode'."""
        return self._curvature_calculation_mode

    @curvature_calculation_mode.setter
    def curvature_calculation_mode(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import CurvatureCalculationMode
            assert \
                isinstance(value, CurvatureCalculationMode), \
                "The 'curvature_calculation_mode' field must be a sub message of type 'CurvatureCalculationMode'"
        self._curvature_calculation_mode = value

    @builtins.property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import YawRate
            assert \
                isinstance(value, YawRate), \
                "The 'yaw_rate' field must be a sub message of type 'YawRate'"
        self._yaw_rate = value

    @builtins.property
    def has_acceleration_control(self):
        """Message field 'has_acceleration_control'."""
        return self._has_acceleration_control

    @has_acceleration_control.setter
    def has_acceleration_control(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_acceleration_control' field must be of type 'bool'"
        self._has_acceleration_control = value

    @builtins.property
    def acceleration_control(self):
        """Message field 'acceleration_control'."""
        return self._acceleration_control

    @acceleration_control.setter
    def acceleration_control(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import AccelerationControl
            assert \
                isinstance(value, AccelerationControl), \
                "The 'acceleration_control' field must be a sub message of type 'AccelerationControl'"
        self._acceleration_control = value
