# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/PerceivedObject.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'sensor_id_list'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PerceivedObject(type):
    """Metaclass of message 'PerceivedObject'."""

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
                'ros_etsi_its_msgs.msg.PerceivedObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__perceived_object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__perceived_object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__perceived_object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__perceived_object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__perceived_object

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import DynamicStatus
            if DynamicStatus.__class__._TYPE_SUPPORT is None:
                DynamicStatus.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import LateralAcceleration
            if LateralAcceleration.__class__._TYPE_SUPPORT is None:
                LateralAcceleration.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import LongitudinalAcceleration
            if LongitudinalAcceleration.__class__._TYPE_SUPPORT is None:
                LongitudinalAcceleration.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import MatchedPosition
            if MatchedPosition.__class__._TYPE_SUPPORT is None:
                MatchedPosition.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import ObjectDimension
            if ObjectDimension.__class__._TYPE_SUPPORT is None:
                ObjectDimension.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import ObjectDistanceWithConfidence
            if ObjectDistanceWithConfidence.__class__._TYPE_SUPPORT is None:
                ObjectDistanceWithConfidence.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import ObjectRefPoint
            if ObjectRefPoint.__class__._TYPE_SUPPORT is None:
                ObjectRefPoint.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import SpeedExtended
            if SpeedExtended.__class__._TYPE_SUPPORT is None:
                SpeedExtended.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import StationType
            if StationType.__class__._TYPE_SUPPORT is None:
                StationType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PerceivedObject(metaclass=Metaclass_PerceivedObject):
    """Message class 'PerceivedObject'."""

    __slots__ = [
        '_object_id',
        '_has_sensor_id_list',
        '_sensor_id_list',
        '_time_of_detection',
        '_time_of_measurement',
        '_object_age',
        '_object_confidence',
        '_x_distance',
        '_y_distance',
        '_z_distance',
        '_x_speed',
        '_y_speed',
        '_z_speed',
        '_x_acceleration',
        '_y_acceleration',
        '_has_planar_object_dimension1',
        '_planar_object_dimension1',
        '_has_planar_object_dimension2',
        '_planar_object_dimension2',
        '_has_vertical_object_dimension',
        '_vertical_object_dimension',
        '_object_ref_point',
        '_dynamic_status',
        '_classification',
        '_matched_position',
        '_object_angle',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'object_id': 'uint8',
        'has_sensor_id_list': 'boolean',
        'sensor_id_list': 'sequence<uint8>',
        'time_of_detection': 'builtin_interfaces/Time',
        'time_of_measurement': 'int32',
        'object_age': 'int32',
        'object_confidence': 'int32',
        'x_distance': 'ros_etsi_its_msgs/ObjectDistanceWithConfidence',
        'y_distance': 'ros_etsi_its_msgs/ObjectDistanceWithConfidence',
        'z_distance': 'ros_etsi_its_msgs/ObjectDistanceWithConfidence',
        'x_speed': 'ros_etsi_its_msgs/SpeedExtended',
        'y_speed': 'ros_etsi_its_msgs/SpeedExtended',
        'z_speed': 'ros_etsi_its_msgs/SpeedExtended',
        'x_acceleration': 'ros_etsi_its_msgs/LongitudinalAcceleration',
        'y_acceleration': 'ros_etsi_its_msgs/LateralAcceleration',
        'has_planar_object_dimension1': 'boolean',
        'planar_object_dimension1': 'ros_etsi_its_msgs/ObjectDimension',
        'has_planar_object_dimension2': 'boolean',
        'planar_object_dimension2': 'ros_etsi_its_msgs/ObjectDimension',
        'has_vertical_object_dimension': 'boolean',
        'vertical_object_dimension': 'ros_etsi_its_msgs/ObjectDimension',
        'object_ref_point': 'ros_etsi_its_msgs/ObjectRefPoint',
        'dynamic_status': 'ros_etsi_its_msgs/DynamicStatus',
        'classification': 'ros_etsi_its_msgs/StationType',
        'matched_position': 'ros_etsi_its_msgs/MatchedPosition',
        'object_angle': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'ObjectDistanceWithConfidence'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'ObjectDistanceWithConfidence'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'ObjectDistanceWithConfidence'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'SpeedExtended'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'SpeedExtended'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'SpeedExtended'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'LongitudinalAcceleration'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'LateralAcceleration'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'ObjectDimension'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'ObjectDimension'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'ObjectDimension'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'ObjectRefPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'DynamicStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'StationType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'MatchedPosition'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.object_id = kwargs.get('object_id', int())
        self.has_sensor_id_list = kwargs.get('has_sensor_id_list', bool())
        self.sensor_id_list = array.array('B', kwargs.get('sensor_id_list', []))
        from builtin_interfaces.msg import Time
        self.time_of_detection = kwargs.get('time_of_detection', Time())
        self.time_of_measurement = kwargs.get('time_of_measurement', int())
        self.object_age = kwargs.get('object_age', int())
        self.object_confidence = kwargs.get('object_confidence', int())
        from ros_etsi_its_msgs.msg import ObjectDistanceWithConfidence
        self.x_distance = kwargs.get('x_distance', ObjectDistanceWithConfidence())
        from ros_etsi_its_msgs.msg import ObjectDistanceWithConfidence
        self.y_distance = kwargs.get('y_distance', ObjectDistanceWithConfidence())
        from ros_etsi_its_msgs.msg import ObjectDistanceWithConfidence
        self.z_distance = kwargs.get('z_distance', ObjectDistanceWithConfidence())
        from ros_etsi_its_msgs.msg import SpeedExtended
        self.x_speed = kwargs.get('x_speed', SpeedExtended())
        from ros_etsi_its_msgs.msg import SpeedExtended
        self.y_speed = kwargs.get('y_speed', SpeedExtended())
        from ros_etsi_its_msgs.msg import SpeedExtended
        self.z_speed = kwargs.get('z_speed', SpeedExtended())
        from ros_etsi_its_msgs.msg import LongitudinalAcceleration
        self.x_acceleration = kwargs.get('x_acceleration', LongitudinalAcceleration())
        from ros_etsi_its_msgs.msg import LateralAcceleration
        self.y_acceleration = kwargs.get('y_acceleration', LateralAcceleration())
        self.has_planar_object_dimension1 = kwargs.get('has_planar_object_dimension1', bool())
        from ros_etsi_its_msgs.msg import ObjectDimension
        self.planar_object_dimension1 = kwargs.get('planar_object_dimension1', ObjectDimension())
        self.has_planar_object_dimension2 = kwargs.get('has_planar_object_dimension2', bool())
        from ros_etsi_its_msgs.msg import ObjectDimension
        self.planar_object_dimension2 = kwargs.get('planar_object_dimension2', ObjectDimension())
        self.has_vertical_object_dimension = kwargs.get('has_vertical_object_dimension', bool())
        from ros_etsi_its_msgs.msg import ObjectDimension
        self.vertical_object_dimension = kwargs.get('vertical_object_dimension', ObjectDimension())
        from ros_etsi_its_msgs.msg import ObjectRefPoint
        self.object_ref_point = kwargs.get('object_ref_point', ObjectRefPoint())
        from ros_etsi_its_msgs.msg import DynamicStatus
        self.dynamic_status = kwargs.get('dynamic_status', DynamicStatus())
        from ros_etsi_its_msgs.msg import StationType
        self.classification = kwargs.get('classification', StationType())
        from ros_etsi_its_msgs.msg import MatchedPosition
        self.matched_position = kwargs.get('matched_position', MatchedPosition())
        self.object_angle = kwargs.get('object_angle', float())

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
        if self.object_id != other.object_id:
            return False
        if self.has_sensor_id_list != other.has_sensor_id_list:
            return False
        if self.sensor_id_list != other.sensor_id_list:
            return False
        if self.time_of_detection != other.time_of_detection:
            return False
        if self.time_of_measurement != other.time_of_measurement:
            return False
        if self.object_age != other.object_age:
            return False
        if self.object_confidence != other.object_confidence:
            return False
        if self.x_distance != other.x_distance:
            return False
        if self.y_distance != other.y_distance:
            return False
        if self.z_distance != other.z_distance:
            return False
        if self.x_speed != other.x_speed:
            return False
        if self.y_speed != other.y_speed:
            return False
        if self.z_speed != other.z_speed:
            return False
        if self.x_acceleration != other.x_acceleration:
            return False
        if self.y_acceleration != other.y_acceleration:
            return False
        if self.has_planar_object_dimension1 != other.has_planar_object_dimension1:
            return False
        if self.planar_object_dimension1 != other.planar_object_dimension1:
            return False
        if self.has_planar_object_dimension2 != other.has_planar_object_dimension2:
            return False
        if self.planar_object_dimension2 != other.planar_object_dimension2:
            return False
        if self.has_vertical_object_dimension != other.has_vertical_object_dimension:
            return False
        if self.vertical_object_dimension != other.vertical_object_dimension:
            return False
        if self.object_ref_point != other.object_ref_point:
            return False
        if self.dynamic_status != other.dynamic_status:
            return False
        if self.classification != other.classification:
            return False
        if self.matched_position != other.matched_position:
            return False
        if self.object_angle != other.object_angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def object_id(self):
        """Message field 'object_id'."""
        return self._object_id

    @object_id.setter
    def object_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'object_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'object_id' field must be an unsigned integer in [0, 255]"
        self._object_id = value

    @builtins.property
    def has_sensor_id_list(self):
        """Message field 'has_sensor_id_list'."""
        return self._has_sensor_id_list

    @has_sensor_id_list.setter
    def has_sensor_id_list(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_sensor_id_list' field must be of type 'bool'"
        self._has_sensor_id_list = value

    @builtins.property
    def sensor_id_list(self):
        """Message field 'sensor_id_list'."""
        return self._sensor_id_list

    @sensor_id_list.setter
    def sensor_id_list(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'B', \
                    "The 'sensor_id_list' array.array() must have the type code of 'B'"
                self._sensor_id_list = value
                return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'sensor_id_list' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._sensor_id_list = array.array('B', value)

    @builtins.property
    def time_of_detection(self):
        """Message field 'time_of_detection'."""
        return self._time_of_detection

    @time_of_detection.setter
    def time_of_detection(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'time_of_detection' field must be a sub message of type 'Time'"
        self._time_of_detection = value

    @builtins.property
    def time_of_measurement(self):
        """Message field 'time_of_measurement'."""
        return self._time_of_measurement

    @time_of_measurement.setter
    def time_of_measurement(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'time_of_measurement' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'time_of_measurement' field must be an integer in [-2147483648, 2147483647]"
        self._time_of_measurement = value

    @builtins.property
    def object_age(self):
        """Message field 'object_age'."""
        return self._object_age

    @object_age.setter
    def object_age(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'object_age' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'object_age' field must be an integer in [-2147483648, 2147483647]"
        self._object_age = value

    @builtins.property
    def object_confidence(self):
        """Message field 'object_confidence'."""
        return self._object_confidence

    @object_confidence.setter
    def object_confidence(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'object_confidence' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'object_confidence' field must be an integer in [-2147483648, 2147483647]"
        self._object_confidence = value

    @builtins.property
    def x_distance(self):
        """Message field 'x_distance'."""
        return self._x_distance

    @x_distance.setter
    def x_distance(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import ObjectDistanceWithConfidence
            assert \
                isinstance(value, ObjectDistanceWithConfidence), \
                "The 'x_distance' field must be a sub message of type 'ObjectDistanceWithConfidence'"
        self._x_distance = value

    @builtins.property
    def y_distance(self):
        """Message field 'y_distance'."""
        return self._y_distance

    @y_distance.setter
    def y_distance(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import ObjectDistanceWithConfidence
            assert \
                isinstance(value, ObjectDistanceWithConfidence), \
                "The 'y_distance' field must be a sub message of type 'ObjectDistanceWithConfidence'"
        self._y_distance = value

    @builtins.property
    def z_distance(self):
        """Message field 'z_distance'."""
        return self._z_distance

    @z_distance.setter
    def z_distance(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import ObjectDistanceWithConfidence
            assert \
                isinstance(value, ObjectDistanceWithConfidence), \
                "The 'z_distance' field must be a sub message of type 'ObjectDistanceWithConfidence'"
        self._z_distance = value

    @builtins.property
    def x_speed(self):
        """Message field 'x_speed'."""
        return self._x_speed

    @x_speed.setter
    def x_speed(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import SpeedExtended
            assert \
                isinstance(value, SpeedExtended), \
                "The 'x_speed' field must be a sub message of type 'SpeedExtended'"
        self._x_speed = value

    @builtins.property
    def y_speed(self):
        """Message field 'y_speed'."""
        return self._y_speed

    @y_speed.setter
    def y_speed(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import SpeedExtended
            assert \
                isinstance(value, SpeedExtended), \
                "The 'y_speed' field must be a sub message of type 'SpeedExtended'"
        self._y_speed = value

    @builtins.property
    def z_speed(self):
        """Message field 'z_speed'."""
        return self._z_speed

    @z_speed.setter
    def z_speed(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import SpeedExtended
            assert \
                isinstance(value, SpeedExtended), \
                "The 'z_speed' field must be a sub message of type 'SpeedExtended'"
        self._z_speed = value

    @builtins.property
    def x_acceleration(self):
        """Message field 'x_acceleration'."""
        return self._x_acceleration

    @x_acceleration.setter
    def x_acceleration(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import LongitudinalAcceleration
            assert \
                isinstance(value, LongitudinalAcceleration), \
                "The 'x_acceleration' field must be a sub message of type 'LongitudinalAcceleration'"
        self._x_acceleration = value

    @builtins.property
    def y_acceleration(self):
        """Message field 'y_acceleration'."""
        return self._y_acceleration

    @y_acceleration.setter
    def y_acceleration(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import LateralAcceleration
            assert \
                isinstance(value, LateralAcceleration), \
                "The 'y_acceleration' field must be a sub message of type 'LateralAcceleration'"
        self._y_acceleration = value

    @builtins.property
    def has_planar_object_dimension1(self):
        """Message field 'has_planar_object_dimension1'."""
        return self._has_planar_object_dimension1

    @has_planar_object_dimension1.setter
    def has_planar_object_dimension1(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_planar_object_dimension1' field must be of type 'bool'"
        self._has_planar_object_dimension1 = value

    @builtins.property
    def planar_object_dimension1(self):
        """Message field 'planar_object_dimension1'."""
        return self._planar_object_dimension1

    @planar_object_dimension1.setter
    def planar_object_dimension1(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import ObjectDimension
            assert \
                isinstance(value, ObjectDimension), \
                "The 'planar_object_dimension1' field must be a sub message of type 'ObjectDimension'"
        self._planar_object_dimension1 = value

    @builtins.property
    def has_planar_object_dimension2(self):
        """Message field 'has_planar_object_dimension2'."""
        return self._has_planar_object_dimension2

    @has_planar_object_dimension2.setter
    def has_planar_object_dimension2(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_planar_object_dimension2' field must be of type 'bool'"
        self._has_planar_object_dimension2 = value

    @builtins.property
    def planar_object_dimension2(self):
        """Message field 'planar_object_dimension2'."""
        return self._planar_object_dimension2

    @planar_object_dimension2.setter
    def planar_object_dimension2(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import ObjectDimension
            assert \
                isinstance(value, ObjectDimension), \
                "The 'planar_object_dimension2' field must be a sub message of type 'ObjectDimension'"
        self._planar_object_dimension2 = value

    @builtins.property
    def has_vertical_object_dimension(self):
        """Message field 'has_vertical_object_dimension'."""
        return self._has_vertical_object_dimension

    @has_vertical_object_dimension.setter
    def has_vertical_object_dimension(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_vertical_object_dimension' field must be of type 'bool'"
        self._has_vertical_object_dimension = value

    @builtins.property
    def vertical_object_dimension(self):
        """Message field 'vertical_object_dimension'."""
        return self._vertical_object_dimension

    @vertical_object_dimension.setter
    def vertical_object_dimension(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import ObjectDimension
            assert \
                isinstance(value, ObjectDimension), \
                "The 'vertical_object_dimension' field must be a sub message of type 'ObjectDimension'"
        self._vertical_object_dimension = value

    @builtins.property
    def object_ref_point(self):
        """Message field 'object_ref_point'."""
        return self._object_ref_point

    @object_ref_point.setter
    def object_ref_point(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import ObjectRefPoint
            assert \
                isinstance(value, ObjectRefPoint), \
                "The 'object_ref_point' field must be a sub message of type 'ObjectRefPoint'"
        self._object_ref_point = value

    @builtins.property
    def dynamic_status(self):
        """Message field 'dynamic_status'."""
        return self._dynamic_status

    @dynamic_status.setter
    def dynamic_status(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import DynamicStatus
            assert \
                isinstance(value, DynamicStatus), \
                "The 'dynamic_status' field must be a sub message of type 'DynamicStatus'"
        self._dynamic_status = value

    @builtins.property
    def classification(self):
        """Message field 'classification'."""
        return self._classification

    @classification.setter
    def classification(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import StationType
            assert \
                isinstance(value, StationType), \
                "The 'classification' field must be a sub message of type 'StationType'"
        self._classification = value

    @builtins.property
    def matched_position(self):
        """Message field 'matched_position'."""
        return self._matched_position

    @matched_position.setter
    def matched_position(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import MatchedPosition
            assert \
                isinstance(value, MatchedPosition), \
                "The 'matched_position' field must be a sub message of type 'MatchedPosition'"
        self._matched_position = value

    @builtins.property
    def object_angle(self):
        """Message field 'object_angle'."""
        return self._object_angle

    @object_angle.setter
    def object_angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'object_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'object_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._object_angle = value
