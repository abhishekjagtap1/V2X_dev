# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/CPM.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CPM(type):
    """Metaclass of message 'CPM'."""

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
                'ros_etsi_its_msgs.msg.CPM')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cpm
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cpm
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cpm
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cpm
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cpm

            from ros_etsi_its_msgs.msg import ItsPduHeader
            if ItsPduHeader.__class__._TYPE_SUPPORT is None:
                ItsPduHeader.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import ListOfPerceivedObjects
            if ListOfPerceivedObjects.__class__._TYPE_SUPPORT is None:
                ListOfPerceivedObjects.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import OriginatingVehicleContainer
            if OriginatingVehicleContainer.__class__._TYPE_SUPPORT is None:
                OriginatingVehicleContainer.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import ReferencePosition
            if ReferencePosition.__class__._TYPE_SUPPORT is None:
                ReferencePosition.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import SensorInformationContainer
            if SensorInformationContainer.__class__._TYPE_SUPPORT is None:
                SensorInformationContainer.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import StationType
            if StationType.__class__._TYPE_SUPPORT is None:
                StationType.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CPM(metaclass=Metaclass_CPM):
    """Message class 'CPM'."""

    __slots__ = [
        '_header',
        '_its_header',
        '_generation_delta_time',
        '_station_type',
        '_reference_position',
        '_originating_vehicle_container',
        '_has_sensor_information_container',
        '_sensor_information_container',
        '_has_list_of_perceived_object',
        '_list_of_perceived_objects',
        '_number_of_perceived_objects',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'its_header': 'ros_etsi_its_msgs/ItsPduHeader',
        'generation_delta_time': 'uint16',
        'station_type': 'ros_etsi_its_msgs/StationType',
        'reference_position': 'ros_etsi_its_msgs/ReferencePosition',
        'originating_vehicle_container': 'ros_etsi_its_msgs/OriginatingVehicleContainer',
        'has_sensor_information_container': 'boolean',
        'sensor_information_container': 'ros_etsi_its_msgs/SensorInformationContainer',
        'has_list_of_perceived_object': 'boolean',
        'list_of_perceived_objects': 'ros_etsi_its_msgs/ListOfPerceivedObjects',
        'number_of_perceived_objects': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'ItsPduHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'StationType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'ReferencePosition'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'OriginatingVehicleContainer'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'SensorInformationContainer'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'ListOfPerceivedObjects'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from ros_etsi_its_msgs.msg import ItsPduHeader
        self.its_header = kwargs.get('its_header', ItsPduHeader())
        self.generation_delta_time = kwargs.get('generation_delta_time', int())
        from ros_etsi_its_msgs.msg import StationType
        self.station_type = kwargs.get('station_type', StationType())
        from ros_etsi_its_msgs.msg import ReferencePosition
        self.reference_position = kwargs.get('reference_position', ReferencePosition())
        from ros_etsi_its_msgs.msg import OriginatingVehicleContainer
        self.originating_vehicle_container = kwargs.get('originating_vehicle_container', OriginatingVehicleContainer())
        self.has_sensor_information_container = kwargs.get('has_sensor_information_container', bool())
        from ros_etsi_its_msgs.msg import SensorInformationContainer
        self.sensor_information_container = kwargs.get('sensor_information_container', SensorInformationContainer())
        self.has_list_of_perceived_object = kwargs.get('has_list_of_perceived_object', bool())
        from ros_etsi_its_msgs.msg import ListOfPerceivedObjects
        self.list_of_perceived_objects = kwargs.get('list_of_perceived_objects', ListOfPerceivedObjects())
        self.number_of_perceived_objects = kwargs.get('number_of_perceived_objects', int())

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
        if self.header != other.header:
            return False
        if self.its_header != other.its_header:
            return False
        if self.generation_delta_time != other.generation_delta_time:
            return False
        if self.station_type != other.station_type:
            return False
        if self.reference_position != other.reference_position:
            return False
        if self.originating_vehicle_container != other.originating_vehicle_container:
            return False
        if self.has_sensor_information_container != other.has_sensor_information_container:
            return False
        if self.sensor_information_container != other.sensor_information_container:
            return False
        if self.has_list_of_perceived_object != other.has_list_of_perceived_object:
            return False
        if self.list_of_perceived_objects != other.list_of_perceived_objects:
            return False
        if self.number_of_perceived_objects != other.number_of_perceived_objects:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def its_header(self):
        """Message field 'its_header'."""
        return self._its_header

    @its_header.setter
    def its_header(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import ItsPduHeader
            assert \
                isinstance(value, ItsPduHeader), \
                "The 'its_header' field must be a sub message of type 'ItsPduHeader'"
        self._its_header = value

    @builtins.property
    def generation_delta_time(self):
        """Message field 'generation_delta_time'."""
        return self._generation_delta_time

    @generation_delta_time.setter
    def generation_delta_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'generation_delta_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'generation_delta_time' field must be an unsigned integer in [0, 65535]"
        self._generation_delta_time = value

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

    @builtins.property
    def reference_position(self):
        """Message field 'reference_position'."""
        return self._reference_position

    @reference_position.setter
    def reference_position(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import ReferencePosition
            assert \
                isinstance(value, ReferencePosition), \
                "The 'reference_position' field must be a sub message of type 'ReferencePosition'"
        self._reference_position = value

    @builtins.property
    def originating_vehicle_container(self):
        """Message field 'originating_vehicle_container'."""
        return self._originating_vehicle_container

    @originating_vehicle_container.setter
    def originating_vehicle_container(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import OriginatingVehicleContainer
            assert \
                isinstance(value, OriginatingVehicleContainer), \
                "The 'originating_vehicle_container' field must be a sub message of type 'OriginatingVehicleContainer'"
        self._originating_vehicle_container = value

    @builtins.property
    def has_sensor_information_container(self):
        """Message field 'has_sensor_information_container'."""
        return self._has_sensor_information_container

    @has_sensor_information_container.setter
    def has_sensor_information_container(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_sensor_information_container' field must be of type 'bool'"
        self._has_sensor_information_container = value

    @builtins.property
    def sensor_information_container(self):
        """Message field 'sensor_information_container'."""
        return self._sensor_information_container

    @sensor_information_container.setter
    def sensor_information_container(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import SensorInformationContainer
            assert \
                isinstance(value, SensorInformationContainer), \
                "The 'sensor_information_container' field must be a sub message of type 'SensorInformationContainer'"
        self._sensor_information_container = value

    @builtins.property
    def has_list_of_perceived_object(self):
        """Message field 'has_list_of_perceived_object'."""
        return self._has_list_of_perceived_object

    @has_list_of_perceived_object.setter
    def has_list_of_perceived_object(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_list_of_perceived_object' field must be of type 'bool'"
        self._has_list_of_perceived_object = value

    @builtins.property
    def list_of_perceived_objects(self):
        """Message field 'list_of_perceived_objects'."""
        return self._list_of_perceived_objects

    @list_of_perceived_objects.setter
    def list_of_perceived_objects(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import ListOfPerceivedObjects
            assert \
                isinstance(value, ListOfPerceivedObjects), \
                "The 'list_of_perceived_objects' field must be a sub message of type 'ListOfPerceivedObjects'"
        self._list_of_perceived_objects = value

    @builtins.property
    def number_of_perceived_objects(self):
        """Message field 'number_of_perceived_objects'."""
        return self._number_of_perceived_objects

    @number_of_perceived_objects.setter
    def number_of_perceived_objects(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'number_of_perceived_objects' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'number_of_perceived_objects' field must be an integer in [-2147483648, 2147483647]"
        self._number_of_perceived_objects = value
