// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/CPM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/cpm.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CPM__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CPM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'its_header'
#include "ros_etsi_its_msgs/msg/detail/its_pdu_header__struct.hpp"
// Member 'station_type'
#include "ros_etsi_its_msgs/msg/detail/station_type__struct.hpp"
// Member 'reference_position'
#include "ros_etsi_its_msgs/msg/detail/reference_position__struct.hpp"
// Member 'originating_vehicle_container'
#include "ros_etsi_its_msgs/msg/detail/originating_vehicle_container__struct.hpp"
// Member 'sensor_information_container'
#include "ros_etsi_its_msgs/msg/detail/sensor_information_container__struct.hpp"
// Member 'list_of_perceived_objects'
#include "ros_etsi_its_msgs/msg/detail/list_of_perceived_objects__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__CPM __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__CPM __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CPM_
{
  using Type = CPM_<ContainerAllocator>;

  explicit CPM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    its_header(_init),
    station_type(_init),
    reference_position(_init),
    originating_vehicle_container(_init),
    sensor_information_container(_init),
    list_of_perceived_objects(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->generation_delta_time = 0;
      this->has_sensor_information_container = false;
      this->has_list_of_perceived_object = false;
      this->number_of_perceived_objects = 0l;
    }
  }

  explicit CPM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    its_header(_alloc, _init),
    station_type(_alloc, _init),
    reference_position(_alloc, _init),
    originating_vehicle_container(_alloc, _init),
    sensor_information_container(_alloc, _init),
    list_of_perceived_objects(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->generation_delta_time = 0;
      this->has_sensor_information_container = false;
      this->has_list_of_perceived_object = false;
      this->number_of_perceived_objects = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _its_header_type =
    ros_etsi_its_msgs::msg::ItsPduHeader_<ContainerAllocator>;
  _its_header_type its_header;
  using _generation_delta_time_type =
    uint16_t;
  _generation_delta_time_type generation_delta_time;
  using _station_type_type =
    ros_etsi_its_msgs::msg::StationType_<ContainerAllocator>;
  _station_type_type station_type;
  using _reference_position_type =
    ros_etsi_its_msgs::msg::ReferencePosition_<ContainerAllocator>;
  _reference_position_type reference_position;
  using _originating_vehicle_container_type =
    ros_etsi_its_msgs::msg::OriginatingVehicleContainer_<ContainerAllocator>;
  _originating_vehicle_container_type originating_vehicle_container;
  using _has_sensor_information_container_type =
    bool;
  _has_sensor_information_container_type has_sensor_information_container;
  using _sensor_information_container_type =
    ros_etsi_its_msgs::msg::SensorInformationContainer_<ContainerAllocator>;
  _sensor_information_container_type sensor_information_container;
  using _has_list_of_perceived_object_type =
    bool;
  _has_list_of_perceived_object_type has_list_of_perceived_object;
  using _list_of_perceived_objects_type =
    ros_etsi_its_msgs::msg::ListOfPerceivedObjects_<ContainerAllocator>;
  _list_of_perceived_objects_type list_of_perceived_objects;
  using _number_of_perceived_objects_type =
    int32_t;
  _number_of_perceived_objects_type number_of_perceived_objects;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__its_header(
    const ros_etsi_its_msgs::msg::ItsPduHeader_<ContainerAllocator> & _arg)
  {
    this->its_header = _arg;
    return *this;
  }
  Type & set__generation_delta_time(
    const uint16_t & _arg)
  {
    this->generation_delta_time = _arg;
    return *this;
  }
  Type & set__station_type(
    const ros_etsi_its_msgs::msg::StationType_<ContainerAllocator> & _arg)
  {
    this->station_type = _arg;
    return *this;
  }
  Type & set__reference_position(
    const ros_etsi_its_msgs::msg::ReferencePosition_<ContainerAllocator> & _arg)
  {
    this->reference_position = _arg;
    return *this;
  }
  Type & set__originating_vehicle_container(
    const ros_etsi_its_msgs::msg::OriginatingVehicleContainer_<ContainerAllocator> & _arg)
  {
    this->originating_vehicle_container = _arg;
    return *this;
  }
  Type & set__has_sensor_information_container(
    const bool & _arg)
  {
    this->has_sensor_information_container = _arg;
    return *this;
  }
  Type & set__sensor_information_container(
    const ros_etsi_its_msgs::msg::SensorInformationContainer_<ContainerAllocator> & _arg)
  {
    this->sensor_information_container = _arg;
    return *this;
  }
  Type & set__has_list_of_perceived_object(
    const bool & _arg)
  {
    this->has_list_of_perceived_object = _arg;
    return *this;
  }
  Type & set__list_of_perceived_objects(
    const ros_etsi_its_msgs::msg::ListOfPerceivedObjects_<ContainerAllocator> & _arg)
  {
    this->list_of_perceived_objects = _arg;
    return *this;
  }
  Type & set__number_of_perceived_objects(
    const int32_t & _arg)
  {
    this->number_of_perceived_objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::CPM_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::CPM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::CPM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::CPM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::CPM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::CPM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::CPM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::CPM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::CPM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::CPM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__CPM
    std::shared_ptr<ros_etsi_its_msgs::msg::CPM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__CPM
    std::shared_ptr<ros_etsi_its_msgs::msg::CPM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CPM_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->its_header != other.its_header) {
      return false;
    }
    if (this->generation_delta_time != other.generation_delta_time) {
      return false;
    }
    if (this->station_type != other.station_type) {
      return false;
    }
    if (this->reference_position != other.reference_position) {
      return false;
    }
    if (this->originating_vehicle_container != other.originating_vehicle_container) {
      return false;
    }
    if (this->has_sensor_information_container != other.has_sensor_information_container) {
      return false;
    }
    if (this->sensor_information_container != other.sensor_information_container) {
      return false;
    }
    if (this->has_list_of_perceived_object != other.has_list_of_perceived_object) {
      return false;
    }
    if (this->list_of_perceived_objects != other.list_of_perceived_objects) {
      return false;
    }
    if (this->number_of_perceived_objects != other.number_of_perceived_objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const CPM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CPM_

// alias to use template instance with default allocator
using CPM =
  ros_etsi_its_msgs::msg::CPM_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CPM__STRUCT_HPP_
