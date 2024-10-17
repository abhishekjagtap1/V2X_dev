// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_stack:msg/GeoNetArea.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/geo_net_area.hpp"


#ifndef V2X_STACK__MSG__DETAIL__GEO_NET_AREA__STRUCT_HPP_
#define V2X_STACK__MSG__DETAIL__GEO_NET_AREA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_stack__msg__GeoNetArea __attribute__((deprecated))
#else
# define DEPRECATED__v2x_stack__msg__GeoNetArea __declspec(deprecated)
#endif

namespace v2x_stack
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GeoNetArea_
{
  using Type = GeoNetArea_<ContainerAllocator>;

  explicit GeoNetArea_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->distance_a = 0.0f;
      this->distance_b = 0.0f;
      this->angle = 0.0f;
    }
  }

  explicit GeoNetArea_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->distance_a = 0.0f;
      this->distance_b = 0.0f;
      this->angle = 0.0f;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _distance_a_type =
    float;
  _distance_a_type distance_a;
  using _distance_b_type =
    float;
  _distance_b_type distance_b;
  using _angle_type =
    float;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__distance_a(
    const float & _arg)
  {
    this->distance_a = _arg;
    return *this;
  }
  Type & set__distance_b(
    const float & _arg)
  {
    this->distance_b = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TYPE_CIRCLE =
    1u;
  static constexpr uint8_t TYPE_RECTANGLE =
    2u;
  static constexpr uint8_t TYPE_ELLIPSE =
    3u;

  // pointer types
  using RawPtr =
    v2x_stack::msg::GeoNetArea_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_stack::msg::GeoNetArea_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_stack::msg::GeoNetArea_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_stack::msg::GeoNetArea_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_stack::msg::GeoNetArea_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_stack::msg::GeoNetArea_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_stack::msg::GeoNetArea_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_stack::msg::GeoNetArea_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_stack::msg::GeoNetArea_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_stack::msg::GeoNetArea_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_stack__msg__GeoNetArea
    std::shared_ptr<v2x_stack::msg::GeoNetArea_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_stack__msg__GeoNetArea
    std::shared_ptr<v2x_stack::msg::GeoNetArea_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeoNetArea_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
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
    return true;
  }
  bool operator!=(const GeoNetArea_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeoNetArea_

// alias to use template instance with default allocator
using GeoNetArea =
  v2x_stack::msg::GeoNetArea_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GeoNetArea_<ContainerAllocator>::TYPE_CIRCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GeoNetArea_<ContainerAllocator>::TYPE_RECTANGLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GeoNetArea_<ContainerAllocator>::TYPE_ELLIPSE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace v2x_stack

#endif  // V2X_STACK__MSG__DETAIL__GEO_NET_AREA__STRUCT_HPP_
