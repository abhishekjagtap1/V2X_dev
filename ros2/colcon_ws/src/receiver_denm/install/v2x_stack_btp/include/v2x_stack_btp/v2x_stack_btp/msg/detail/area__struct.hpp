// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_stack_btp:msg/Area.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack_btp/msg/area.hpp"


#ifndef V2X_STACK_BTP__MSG__DETAIL__AREA__STRUCT_HPP_
#define V2X_STACK_BTP__MSG__DETAIL__AREA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_stack_btp__msg__Area __attribute__((deprecated))
#else
# define DEPRECATED__v2x_stack_btp__msg__Area __declspec(deprecated)
#endif

namespace v2x_stack_btp
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Area_
{
  using Type = Area_<ContainerAllocator>;

  explicit Area_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0l;
      this->longitude = 0l;
      this->distance_a = 0;
      this->distance_b = 0;
      this->angle = 0;
      this->shape = 0;
      this->unused = 0;
    }
  }

  explicit Area_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0l;
      this->longitude = 0l;
      this->distance_a = 0;
      this->distance_b = 0;
      this->angle = 0;
      this->shape = 0;
      this->unused = 0;
    }
  }

  // field types and members
  using _latitude_type =
    int32_t;
  _latitude_type latitude;
  using _longitude_type =
    int32_t;
  _longitude_type longitude;
  using _distance_a_type =
    uint16_t;
  _distance_a_type distance_a;
  using _distance_b_type =
    uint16_t;
  _distance_b_type distance_b;
  using _angle_type =
    uint16_t;
  _angle_type angle;
  using _shape_type =
    uint8_t;
  _shape_type shape;
  using _unused_type =
    uint8_t;
  _unused_type unused;

  // setters for named parameter idiom
  Type & set__latitude(
    const int32_t & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const int32_t & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__distance_a(
    const uint16_t & _arg)
  {
    this->distance_a = _arg;
    return *this;
  }
  Type & set__distance_b(
    const uint16_t & _arg)
  {
    this->distance_b = _arg;
    return *this;
  }
  Type & set__angle(
    const uint16_t & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__shape(
    const uint8_t & _arg)
  {
    this->shape = _arg;
    return *this;
  }
  Type & set__unused(
    const uint8_t & _arg)
  {
    this->unused = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_stack_btp::msg::Area_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_stack_btp::msg::Area_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_stack_btp::msg::Area_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_stack_btp::msg::Area_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_stack_btp::msg::Area_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_stack_btp::msg::Area_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_stack_btp::msg::Area_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_stack_btp::msg::Area_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_stack_btp::msg::Area_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_stack_btp::msg::Area_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_stack_btp__msg__Area
    std::shared_ptr<v2x_stack_btp::msg::Area_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_stack_btp__msg__Area
    std::shared_ptr<v2x_stack_btp::msg::Area_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Area_ & other) const
  {
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->distance_a != other.distance_a) {
      return false;
    }
    if (this->distance_b != other.distance_b) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->shape != other.shape) {
      return false;
    }
    if (this->unused != other.unused) {
      return false;
    }
    return true;
  }
  bool operator!=(const Area_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Area_

// alias to use template instance with default allocator
using Area =
  v2x_stack_btp::msg::Area_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_stack_btp

#endif  // V2X_STACK_BTP__MSG__DETAIL__AREA__STRUCT_HPP_
