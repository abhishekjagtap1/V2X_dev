// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/OriginatingVehicleContainer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/originating_vehicle_container.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__ORIGINATING_VEHICLE_CONTAINER__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__ORIGINATING_VEHICLE_CONTAINER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'heading'
#include "ros_etsi_its_msgs/msg/detail/heading__struct.hpp"
// Member 'speed'
#include "ros_etsi_its_msgs/msg/detail/speed__struct.hpp"
// Member 'vehicle_orientation_angle'
#include "ros_etsi_its_msgs/msg/detail/wgs84_angle__struct.hpp"
// Member 'drive_direction'
#include "ros_etsi_its_msgs/msg/detail/drive_direction__struct.hpp"
// Member 'vehicle_length'
#include "ros_etsi_its_msgs/msg/detail/vehicle_length__struct.hpp"
// Member 'vehicle_width'
#include "ros_etsi_its_msgs/msg/detail/vehicle_width__struct.hpp"
// Member 'longitudinal_acceleration'
#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__struct.hpp"
// Member 'yaw_rate'
#include "ros_etsi_its_msgs/msg/detail/yaw_rate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__OriginatingVehicleContainer __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__OriginatingVehicleContainer __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OriginatingVehicleContainer_
{
  using Type = OriginatingVehicleContainer_<ContainerAllocator>;

  explicit OriginatingVehicleContainer_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : heading(_init),
    speed(_init),
    vehicle_orientation_angle(_init),
    drive_direction(_init),
    vehicle_length(_init),
    vehicle_width(_init),
    longitudinal_acceleration(_init),
    yaw_rate(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_vehicle_orientation_angle = false;
      this->has_vehicle_length = false;
      this->has_vehicle_width = false;
      this->has_vehicle_height = false;
      this->vehicle_height = 0;
      this->has_longitudinal_acceleration = false;
      this->has_yaw_rate = false;
    }
  }

  explicit OriginatingVehicleContainer_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : heading(_alloc, _init),
    speed(_alloc, _init),
    vehicle_orientation_angle(_alloc, _init),
    drive_direction(_alloc, _init),
    vehicle_length(_alloc, _init),
    vehicle_width(_alloc, _init),
    longitudinal_acceleration(_alloc, _init),
    yaw_rate(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_vehicle_orientation_angle = false;
      this->has_vehicle_length = false;
      this->has_vehicle_width = false;
      this->has_vehicle_height = false;
      this->vehicle_height = 0;
      this->has_longitudinal_acceleration = false;
      this->has_yaw_rate = false;
    }
  }

  // field types and members
  using _heading_type =
    ros_etsi_its_msgs::msg::Heading_<ContainerAllocator>;
  _heading_type heading;
  using _speed_type =
    ros_etsi_its_msgs::msg::Speed_<ContainerAllocator>;
  _speed_type speed;
  using _has_vehicle_orientation_angle_type =
    bool;
  _has_vehicle_orientation_angle_type has_vehicle_orientation_angle;
  using _vehicle_orientation_angle_type =
    ros_etsi_its_msgs::msg::WGS84Angle_<ContainerAllocator>;
  _vehicle_orientation_angle_type vehicle_orientation_angle;
  using _drive_direction_type =
    ros_etsi_its_msgs::msg::DriveDirection_<ContainerAllocator>;
  _drive_direction_type drive_direction;
  using _has_vehicle_length_type =
    bool;
  _has_vehicle_length_type has_vehicle_length;
  using _vehicle_length_type =
    ros_etsi_its_msgs::msg::VehicleLength_<ContainerAllocator>;
  _vehicle_length_type vehicle_length;
  using _has_vehicle_width_type =
    bool;
  _has_vehicle_width_type has_vehicle_width;
  using _vehicle_width_type =
    ros_etsi_its_msgs::msg::VehicleWidth_<ContainerAllocator>;
  _vehicle_width_type vehicle_width;
  using _has_vehicle_height_type =
    bool;
  _has_vehicle_height_type has_vehicle_height;
  using _vehicle_height_type =
    uint8_t;
  _vehicle_height_type vehicle_height;
  using _has_longitudinal_acceleration_type =
    bool;
  _has_longitudinal_acceleration_type has_longitudinal_acceleration;
  using _longitudinal_acceleration_type =
    ros_etsi_its_msgs::msg::LongitudinalAcceleration_<ContainerAllocator>;
  _longitudinal_acceleration_type longitudinal_acceleration;
  using _has_yaw_rate_type =
    bool;
  _has_yaw_rate_type has_yaw_rate;
  using _yaw_rate_type =
    ros_etsi_its_msgs::msg::YawRate_<ContainerAllocator>;
  _yaw_rate_type yaw_rate;

  // setters for named parameter idiom
  Type & set__heading(
    const ros_etsi_its_msgs::msg::Heading_<ContainerAllocator> & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__speed(
    const ros_etsi_its_msgs::msg::Speed_<ContainerAllocator> & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__has_vehicle_orientation_angle(
    const bool & _arg)
  {
    this->has_vehicle_orientation_angle = _arg;
    return *this;
  }
  Type & set__vehicle_orientation_angle(
    const ros_etsi_its_msgs::msg::WGS84Angle_<ContainerAllocator> & _arg)
  {
    this->vehicle_orientation_angle = _arg;
    return *this;
  }
  Type & set__drive_direction(
    const ros_etsi_its_msgs::msg::DriveDirection_<ContainerAllocator> & _arg)
  {
    this->drive_direction = _arg;
    return *this;
  }
  Type & set__has_vehicle_length(
    const bool & _arg)
  {
    this->has_vehicle_length = _arg;
    return *this;
  }
  Type & set__vehicle_length(
    const ros_etsi_its_msgs::msg::VehicleLength_<ContainerAllocator> & _arg)
  {
    this->vehicle_length = _arg;
    return *this;
  }
  Type & set__has_vehicle_width(
    const bool & _arg)
  {
    this->has_vehicle_width = _arg;
    return *this;
  }
  Type & set__vehicle_width(
    const ros_etsi_its_msgs::msg::VehicleWidth_<ContainerAllocator> & _arg)
  {
    this->vehicle_width = _arg;
    return *this;
  }
  Type & set__has_vehicle_height(
    const bool & _arg)
  {
    this->has_vehicle_height = _arg;
    return *this;
  }
  Type & set__vehicle_height(
    const uint8_t & _arg)
  {
    this->vehicle_height = _arg;
    return *this;
  }
  Type & set__has_longitudinal_acceleration(
    const bool & _arg)
  {
    this->has_longitudinal_acceleration = _arg;
    return *this;
  }
  Type & set__longitudinal_acceleration(
    const ros_etsi_its_msgs::msg::LongitudinalAcceleration_<ContainerAllocator> & _arg)
  {
    this->longitudinal_acceleration = _arg;
    return *this;
  }
  Type & set__has_yaw_rate(
    const bool & _arg)
  {
    this->has_yaw_rate = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const ros_etsi_its_msgs::msg::YawRate_<ContainerAllocator> & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::OriginatingVehicleContainer_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::OriginatingVehicleContainer_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::OriginatingVehicleContainer_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::OriginatingVehicleContainer_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::OriginatingVehicleContainer_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::OriginatingVehicleContainer_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::OriginatingVehicleContainer_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::OriginatingVehicleContainer_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::OriginatingVehicleContainer_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::OriginatingVehicleContainer_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__OriginatingVehicleContainer
    std::shared_ptr<ros_etsi_its_msgs::msg::OriginatingVehicleContainer_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__OriginatingVehicleContainer
    std::shared_ptr<ros_etsi_its_msgs::msg::OriginatingVehicleContainer_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OriginatingVehicleContainer_ & other) const
  {
    if (this->heading != other.heading) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->has_vehicle_orientation_angle != other.has_vehicle_orientation_angle) {
      return false;
    }
    if (this->vehicle_orientation_angle != other.vehicle_orientation_angle) {
      return false;
    }
    if (this->drive_direction != other.drive_direction) {
      return false;
    }
    if (this->has_vehicle_length != other.has_vehicle_length) {
      return false;
    }
    if (this->vehicle_length != other.vehicle_length) {
      return false;
    }
    if (this->has_vehicle_width != other.has_vehicle_width) {
      return false;
    }
    if (this->vehicle_width != other.vehicle_width) {
      return false;
    }
    if (this->has_vehicle_height != other.has_vehicle_height) {
      return false;
    }
    if (this->vehicle_height != other.vehicle_height) {
      return false;
    }
    if (this->has_longitudinal_acceleration != other.has_longitudinal_acceleration) {
      return false;
    }
    if (this->longitudinal_acceleration != other.longitudinal_acceleration) {
      return false;
    }
    if (this->has_yaw_rate != other.has_yaw_rate) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const OriginatingVehicleContainer_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OriginatingVehicleContainer_

// alias to use template instance with default allocator
using OriginatingVehicleContainer =
  ros_etsi_its_msgs::msg::OriginatingVehicleContainer_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__ORIGINATING_VEHICLE_CONTAINER__STRUCT_HPP_
