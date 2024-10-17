// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/BasicVehicleContainerHighFrequency.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/basic_vehicle_container_high_frequency.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_HIGH_FREQUENCY__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_HIGH_FREQUENCY__STRUCT_HPP_

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
// Member 'drive_direction'
#include "ros_etsi_its_msgs/msg/detail/drive_direction__struct.hpp"
// Member 'vehicle_length'
#include "ros_etsi_its_msgs/msg/detail/vehicle_length__struct.hpp"
// Member 'vehicle_width'
#include "ros_etsi_its_msgs/msg/detail/vehicle_width__struct.hpp"
// Member 'longitudinal_acceleration'
#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__struct.hpp"
// Member 'curvature'
#include "ros_etsi_its_msgs/msg/detail/curvature__struct.hpp"
// Member 'curvature_calculation_mode'
#include "ros_etsi_its_msgs/msg/detail/curvature_calculation_mode__struct.hpp"
// Member 'yaw_rate'
#include "ros_etsi_its_msgs/msg/detail/yaw_rate__struct.hpp"
// Member 'acceleration_control'
#include "ros_etsi_its_msgs/msg/detail/acceleration_control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BasicVehicleContainerHighFrequency_
{
  using Type = BasicVehicleContainerHighFrequency_<ContainerAllocator>;

  explicit BasicVehicleContainerHighFrequency_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : heading(_init),
    speed(_init),
    drive_direction(_init),
    vehicle_length(_init),
    vehicle_width(_init),
    longitudinal_acceleration(_init),
    curvature(_init),
    curvature_calculation_mode(_init),
    yaw_rate(_init),
    acceleration_control(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_acceleration_control = false;
    }
  }

  explicit BasicVehicleContainerHighFrequency_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : heading(_alloc, _init),
    speed(_alloc, _init),
    drive_direction(_alloc, _init),
    vehicle_length(_alloc, _init),
    vehicle_width(_alloc, _init),
    longitudinal_acceleration(_alloc, _init),
    curvature(_alloc, _init),
    curvature_calculation_mode(_alloc, _init),
    yaw_rate(_alloc, _init),
    acceleration_control(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_acceleration_control = false;
    }
  }

  // field types and members
  using _heading_type =
    ros_etsi_its_msgs::msg::Heading_<ContainerAllocator>;
  _heading_type heading;
  using _speed_type =
    ros_etsi_its_msgs::msg::Speed_<ContainerAllocator>;
  _speed_type speed;
  using _drive_direction_type =
    ros_etsi_its_msgs::msg::DriveDirection_<ContainerAllocator>;
  _drive_direction_type drive_direction;
  using _vehicle_length_type =
    ros_etsi_its_msgs::msg::VehicleLength_<ContainerAllocator>;
  _vehicle_length_type vehicle_length;
  using _vehicle_width_type =
    ros_etsi_its_msgs::msg::VehicleWidth_<ContainerAllocator>;
  _vehicle_width_type vehicle_width;
  using _longitudinal_acceleration_type =
    ros_etsi_its_msgs::msg::LongitudinalAcceleration_<ContainerAllocator>;
  _longitudinal_acceleration_type longitudinal_acceleration;
  using _curvature_type =
    ros_etsi_its_msgs::msg::Curvature_<ContainerAllocator>;
  _curvature_type curvature;
  using _curvature_calculation_mode_type =
    ros_etsi_its_msgs::msg::CurvatureCalculationMode_<ContainerAllocator>;
  _curvature_calculation_mode_type curvature_calculation_mode;
  using _yaw_rate_type =
    ros_etsi_its_msgs::msg::YawRate_<ContainerAllocator>;
  _yaw_rate_type yaw_rate;
  using _has_acceleration_control_type =
    bool;
  _has_acceleration_control_type has_acceleration_control;
  using _acceleration_control_type =
    ros_etsi_its_msgs::msg::AccelerationControl_<ContainerAllocator>;
  _acceleration_control_type acceleration_control;

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
  Type & set__drive_direction(
    const ros_etsi_its_msgs::msg::DriveDirection_<ContainerAllocator> & _arg)
  {
    this->drive_direction = _arg;
    return *this;
  }
  Type & set__vehicle_length(
    const ros_etsi_its_msgs::msg::VehicleLength_<ContainerAllocator> & _arg)
  {
    this->vehicle_length = _arg;
    return *this;
  }
  Type & set__vehicle_width(
    const ros_etsi_its_msgs::msg::VehicleWidth_<ContainerAllocator> & _arg)
  {
    this->vehicle_width = _arg;
    return *this;
  }
  Type & set__longitudinal_acceleration(
    const ros_etsi_its_msgs::msg::LongitudinalAcceleration_<ContainerAllocator> & _arg)
  {
    this->longitudinal_acceleration = _arg;
    return *this;
  }
  Type & set__curvature(
    const ros_etsi_its_msgs::msg::Curvature_<ContainerAllocator> & _arg)
  {
    this->curvature = _arg;
    return *this;
  }
  Type & set__curvature_calculation_mode(
    const ros_etsi_its_msgs::msg::CurvatureCalculationMode_<ContainerAllocator> & _arg)
  {
    this->curvature_calculation_mode = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const ros_etsi_its_msgs::msg::YawRate_<ContainerAllocator> & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__has_acceleration_control(
    const bool & _arg)
  {
    this->has_acceleration_control = _arg;
    return *this;
  }
  Type & set__acceleration_control(
    const ros_etsi_its_msgs::msg::AccelerationControl_<ContainerAllocator> & _arg)
  {
    this->acceleration_control = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency
    std::shared_ptr<ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency
    std::shared_ptr<ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BasicVehicleContainerHighFrequency_ & other) const
  {
    if (this->heading != other.heading) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->drive_direction != other.drive_direction) {
      return false;
    }
    if (this->vehicle_length != other.vehicle_length) {
      return false;
    }
    if (this->vehicle_width != other.vehicle_width) {
      return false;
    }
    if (this->longitudinal_acceleration != other.longitudinal_acceleration) {
      return false;
    }
    if (this->curvature != other.curvature) {
      return false;
    }
    if (this->curvature_calculation_mode != other.curvature_calculation_mode) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->has_acceleration_control != other.has_acceleration_control) {
      return false;
    }
    if (this->acceleration_control != other.acceleration_control) {
      return false;
    }
    return true;
  }
  bool operator!=(const BasicVehicleContainerHighFrequency_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BasicVehicleContainerHighFrequency_

// alias to use template instance with default allocator
using BasicVehicleContainerHighFrequency =
  ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_HIGH_FREQUENCY__STRUCT_HPP_
