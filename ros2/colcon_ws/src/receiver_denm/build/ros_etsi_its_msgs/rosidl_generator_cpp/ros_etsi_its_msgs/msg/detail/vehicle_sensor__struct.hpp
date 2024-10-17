// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/VehicleSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/vehicle_sensor.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vehicle_sensor_property_list'
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor_property__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__VehicleSensor __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__VehicleSensor __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleSensor_
{
  using Type = VehicleSensor_<ContainerAllocator>;

  explicit VehicleSensor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ref_point_id = 0;
      this->x_sensor_offset = 0l;
      this->y_sensor_offset = 0l;
      this->z_sensor_offset = 0l;
    }
  }

  explicit VehicleSensor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ref_point_id = 0;
      this->x_sensor_offset = 0l;
      this->y_sensor_offset = 0l;
      this->z_sensor_offset = 0l;
    }
  }

  // field types and members
  using _ref_point_id_type =
    uint8_t;
  _ref_point_id_type ref_point_id;
  using _x_sensor_offset_type =
    int32_t;
  _x_sensor_offset_type x_sensor_offset;
  using _y_sensor_offset_type =
    int32_t;
  _y_sensor_offset_type y_sensor_offset;
  using _z_sensor_offset_type =
    int32_t;
  _z_sensor_offset_type z_sensor_offset;
  using _vehicle_sensor_property_list_type =
    std::vector<ros_etsi_its_msgs::msg::VehicleSensorProperty_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_etsi_its_msgs::msg::VehicleSensorProperty_<ContainerAllocator>>>;
  _vehicle_sensor_property_list_type vehicle_sensor_property_list;

  // setters for named parameter idiom
  Type & set__ref_point_id(
    const uint8_t & _arg)
  {
    this->ref_point_id = _arg;
    return *this;
  }
  Type & set__x_sensor_offset(
    const int32_t & _arg)
  {
    this->x_sensor_offset = _arg;
    return *this;
  }
  Type & set__y_sensor_offset(
    const int32_t & _arg)
  {
    this->y_sensor_offset = _arg;
    return *this;
  }
  Type & set__z_sensor_offset(
    const int32_t & _arg)
  {
    this->z_sensor_offset = _arg;
    return *this;
  }
  Type & set__vehicle_sensor_property_list(
    const std::vector<ros_etsi_its_msgs::msg::VehicleSensorProperty_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_etsi_its_msgs::msg::VehicleSensorProperty_<ContainerAllocator>>> & _arg)
  {
    this->vehicle_sensor_property_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::VehicleSensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::VehicleSensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::VehicleSensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::VehicleSensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::VehicleSensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::VehicleSensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::VehicleSensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::VehicleSensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::VehicleSensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::VehicleSensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__VehicleSensor
    std::shared_ptr<ros_etsi_its_msgs::msg::VehicleSensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__VehicleSensor
    std::shared_ptr<ros_etsi_its_msgs::msg::VehicleSensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleSensor_ & other) const
  {
    if (this->ref_point_id != other.ref_point_id) {
      return false;
    }
    if (this->x_sensor_offset != other.x_sensor_offset) {
      return false;
    }
    if (this->y_sensor_offset != other.y_sensor_offset) {
      return false;
    }
    if (this->z_sensor_offset != other.z_sensor_offset) {
      return false;
    }
    if (this->vehicle_sensor_property_list != other.vehicle_sensor_property_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleSensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleSensor_

// alias to use template instance with default allocator
using VehicleSensor =
  ros_etsi_its_msgs::msg::VehicleSensor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR__STRUCT_HPP_
