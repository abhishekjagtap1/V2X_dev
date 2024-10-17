// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/BasicVehicleContainerLowFrequency.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/basic_vehicle_container_low_frequency.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vehicle_role'
#include "ros_etsi_its_msgs/msg/detail/vehicle_role__struct.hpp"
// Member 'exterior_lights'
#include "ros_etsi_its_msgs/msg/detail/exterior_lights__struct.hpp"
// Member 'path_history'
#include "ros_etsi_its_msgs/msg/detail/path_history__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BasicVehicleContainerLowFrequency_
{
  using Type = BasicVehicleContainerLowFrequency_<ContainerAllocator>;

  explicit BasicVehicleContainerLowFrequency_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vehicle_role(_init),
    exterior_lights(_init),
    path_history(_init)
  {
    (void)_init;
  }

  explicit BasicVehicleContainerLowFrequency_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vehicle_role(_alloc, _init),
    exterior_lights(_alloc, _init),
    path_history(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _vehicle_role_type =
    ros_etsi_its_msgs::msg::VehicleRole_<ContainerAllocator>;
  _vehicle_role_type vehicle_role;
  using _exterior_lights_type =
    ros_etsi_its_msgs::msg::ExteriorLights_<ContainerAllocator>;
  _exterior_lights_type exterior_lights;
  using _path_history_type =
    ros_etsi_its_msgs::msg::PathHistory_<ContainerAllocator>;
  _path_history_type path_history;

  // setters for named parameter idiom
  Type & set__vehicle_role(
    const ros_etsi_its_msgs::msg::VehicleRole_<ContainerAllocator> & _arg)
  {
    this->vehicle_role = _arg;
    return *this;
  }
  Type & set__exterior_lights(
    const ros_etsi_its_msgs::msg::ExteriorLights_<ContainerAllocator> & _arg)
  {
    this->exterior_lights = _arg;
    return *this;
  }
  Type & set__path_history(
    const ros_etsi_its_msgs::msg::PathHistory_<ContainerAllocator> & _arg)
  {
    this->path_history = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency
    std::shared_ptr<ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency
    std::shared_ptr<ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BasicVehicleContainerLowFrequency_ & other) const
  {
    if (this->vehicle_role != other.vehicle_role) {
      return false;
    }
    if (this->exterior_lights != other.exterior_lights) {
      return false;
    }
    if (this->path_history != other.path_history) {
      return false;
    }
    return true;
  }
  bool operator!=(const BasicVehicleContainerLowFrequency_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BasicVehicleContainerLowFrequency_

// alias to use template instance with default allocator
using BasicVehicleContainerLowFrequency =
  ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY__STRUCT_HPP_
