// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/VehicleSensorProperty.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/vehicle_sensor_property.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR_PROPERTY__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR_PROPERTY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__VehicleSensorProperty __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__VehicleSensorProperty __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleSensorProperty_
{
  using Type = VehicleSensorProperty_<ContainerAllocator>;

  explicit VehicleSensorProperty_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range = 0l;
      this->horizontal_opening_angle_start = 0l;
      this->horizontal_opening_angle_end = 0l;
      this->has_vertical_opening_angle_start = false;
      this->vertical_opening_angle_start = 0l;
      this->has_vertical_opening_angle_end = false;
      this->vertical_opening_angle_end = 0l;
    }
  }

  explicit VehicleSensorProperty_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range = 0l;
      this->horizontal_opening_angle_start = 0l;
      this->horizontal_opening_angle_end = 0l;
      this->has_vertical_opening_angle_start = false;
      this->vertical_opening_angle_start = 0l;
      this->has_vertical_opening_angle_end = false;
      this->vertical_opening_angle_end = 0l;
    }
  }

  // field types and members
  using _range_type =
    int32_t;
  _range_type range;
  using _horizontal_opening_angle_start_type =
    int32_t;
  _horizontal_opening_angle_start_type horizontal_opening_angle_start;
  using _horizontal_opening_angle_end_type =
    int32_t;
  _horizontal_opening_angle_end_type horizontal_opening_angle_end;
  using _has_vertical_opening_angle_start_type =
    bool;
  _has_vertical_opening_angle_start_type has_vertical_opening_angle_start;
  using _vertical_opening_angle_start_type =
    int32_t;
  _vertical_opening_angle_start_type vertical_opening_angle_start;
  using _has_vertical_opening_angle_end_type =
    bool;
  _has_vertical_opening_angle_end_type has_vertical_opening_angle_end;
  using _vertical_opening_angle_end_type =
    int32_t;
  _vertical_opening_angle_end_type vertical_opening_angle_end;

  // setters for named parameter idiom
  Type & set__range(
    const int32_t & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__horizontal_opening_angle_start(
    const int32_t & _arg)
  {
    this->horizontal_opening_angle_start = _arg;
    return *this;
  }
  Type & set__horizontal_opening_angle_end(
    const int32_t & _arg)
  {
    this->horizontal_opening_angle_end = _arg;
    return *this;
  }
  Type & set__has_vertical_opening_angle_start(
    const bool & _arg)
  {
    this->has_vertical_opening_angle_start = _arg;
    return *this;
  }
  Type & set__vertical_opening_angle_start(
    const int32_t & _arg)
  {
    this->vertical_opening_angle_start = _arg;
    return *this;
  }
  Type & set__has_vertical_opening_angle_end(
    const bool & _arg)
  {
    this->has_vertical_opening_angle_end = _arg;
    return *this;
  }
  Type & set__vertical_opening_angle_end(
    const int32_t & _arg)
  {
    this->vertical_opening_angle_end = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::VehicleSensorProperty_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::VehicleSensorProperty_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::VehicleSensorProperty_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::VehicleSensorProperty_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::VehicleSensorProperty_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::VehicleSensorProperty_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::VehicleSensorProperty_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::VehicleSensorProperty_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::VehicleSensorProperty_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::VehicleSensorProperty_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__VehicleSensorProperty
    std::shared_ptr<ros_etsi_its_msgs::msg::VehicleSensorProperty_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__VehicleSensorProperty
    std::shared_ptr<ros_etsi_its_msgs::msg::VehicleSensorProperty_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleSensorProperty_ & other) const
  {
    if (this->range != other.range) {
      return false;
    }
    if (this->horizontal_opening_angle_start != other.horizontal_opening_angle_start) {
      return false;
    }
    if (this->horizontal_opening_angle_end != other.horizontal_opening_angle_end) {
      return false;
    }
    if (this->has_vertical_opening_angle_start != other.has_vertical_opening_angle_start) {
      return false;
    }
    if (this->vertical_opening_angle_start != other.vertical_opening_angle_start) {
      return false;
    }
    if (this->has_vertical_opening_angle_end != other.has_vertical_opening_angle_end) {
      return false;
    }
    if (this->vertical_opening_angle_end != other.vertical_opening_angle_end) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleSensorProperty_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleSensorProperty_

// alias to use template instance with default allocator
using VehicleSensorProperty =
  ros_etsi_its_msgs::msg::VehicleSensorProperty_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR_PROPERTY__STRUCT_HPP_
