// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_stack_btp:msg/BtpDataIndication.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack_btp/msg/btp_data_indication.hpp"


#ifndef V2X_STACK_BTP__MSG__DETAIL__BTP_DATA_INDICATION__STRUCT_HPP_
#define V2X_STACK_BTP__MSG__DETAIL__BTP_DATA_INDICATION__STRUCT_HPP_

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
// Member 'destination'
#include "v2x_stack_btp/msg/detail/geo_net_destination__struct.hpp"
// Member 'traffic_class'
#include "v2x_stack_btp/msg/detail/traffic_class__struct.hpp"
// Member 'remaining_packet_lifetime'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_stack_btp__msg__BtpDataIndication __attribute__((deprecated))
#else
# define DEPRECATED__v2x_stack_btp__msg__BtpDataIndication __declspec(deprecated)
#endif

namespace v2x_stack_btp
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BtpDataIndication_
{
  using Type = BtpDataIndication_<ContainerAllocator>;

  explicit BtpDataIndication_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    destination(_init),
    traffic_class(_init),
    remaining_packet_lifetime(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->btp_type = 0;
      this->source_port = 0;
      this->destination_port = 0;
      this->destination_port_info = 0;
      this->its_aid = 0ul;
    }
  }

  explicit BtpDataIndication_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    destination(_alloc, _init),
    traffic_class(_alloc, _init),
    remaining_packet_lifetime(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->btp_type = 0;
      this->source_port = 0;
      this->destination_port = 0;
      this->destination_port_info = 0;
      this->its_aid = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _btp_type_type =
    uint8_t;
  _btp_type_type btp_type;
  using _source_port_type =
    uint16_t;
  _source_port_type source_port;
  using _destination_port_type =
    uint16_t;
  _destination_port_type destination_port;
  using _destination_port_info_type =
    uint16_t;
  _destination_port_info_type destination_port_info;
  using _destination_type =
    v2x_stack_btp::msg::GeoNetDestination_<ContainerAllocator>;
  _destination_type destination;
  using _its_aid_type =
    uint32_t;
  _its_aid_type its_aid;
  using _permissions_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _permissions_type permissions;
  using _traffic_class_type =
    v2x_stack_btp::msg::TrafficClass_<ContainerAllocator>;
  _traffic_class_type traffic_class;
  using _remaining_packet_lifetime_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _remaining_packet_lifetime_type remaining_packet_lifetime;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__btp_type(
    const uint8_t & _arg)
  {
    this->btp_type = _arg;
    return *this;
  }
  Type & set__source_port(
    const uint16_t & _arg)
  {
    this->source_port = _arg;
    return *this;
  }
  Type & set__destination_port(
    const uint16_t & _arg)
  {
    this->destination_port = _arg;
    return *this;
  }
  Type & set__destination_port_info(
    const uint16_t & _arg)
  {
    this->destination_port_info = _arg;
    return *this;
  }
  Type & set__destination(
    const v2x_stack_btp::msg::GeoNetDestination_<ContainerAllocator> & _arg)
  {
    this->destination = _arg;
    return *this;
  }
  Type & set__its_aid(
    const uint32_t & _arg)
  {
    this->its_aid = _arg;
    return *this;
  }
  Type & set__permissions(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->permissions = _arg;
    return *this;
  }
  Type & set__traffic_class(
    const v2x_stack_btp::msg::TrafficClass_<ContainerAllocator> & _arg)
  {
    this->traffic_class = _arg;
    return *this;
  }
  Type & set__remaining_packet_lifetime(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->remaining_packet_lifetime = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BTP_TYPE_A =
    1u;
  static constexpr uint8_t BTP_TYPE_INTERACTIVE =
    1u;
  static constexpr uint8_t BTP_TYPE_B =
    2u;
  static constexpr uint8_t BTP_TYPE_NON_INTERACTIVE =
    2u;

  // pointer types
  using RawPtr =
    v2x_stack_btp::msg::BtpDataIndication_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_stack_btp::msg::BtpDataIndication_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_stack_btp::msg::BtpDataIndication_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_stack_btp::msg::BtpDataIndication_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_stack_btp::msg::BtpDataIndication_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_stack_btp::msg::BtpDataIndication_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_stack_btp::msg::BtpDataIndication_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_stack_btp::msg::BtpDataIndication_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_stack_btp::msg::BtpDataIndication_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_stack_btp::msg::BtpDataIndication_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_stack_btp__msg__BtpDataIndication
    std::shared_ptr<v2x_stack_btp::msg::BtpDataIndication_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_stack_btp__msg__BtpDataIndication
    std::shared_ptr<v2x_stack_btp::msg::BtpDataIndication_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BtpDataIndication_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->btp_type != other.btp_type) {
      return false;
    }
    if (this->source_port != other.source_port) {
      return false;
    }
    if (this->destination_port != other.destination_port) {
      return false;
    }
    if (this->destination_port_info != other.destination_port_info) {
      return false;
    }
    if (this->destination != other.destination) {
      return false;
    }
    if (this->its_aid != other.its_aid) {
      return false;
    }
    if (this->permissions != other.permissions) {
      return false;
    }
    if (this->traffic_class != other.traffic_class) {
      return false;
    }
    if (this->remaining_packet_lifetime != other.remaining_packet_lifetime) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const BtpDataIndication_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BtpDataIndication_

// alias to use template instance with default allocator
using BtpDataIndication =
  v2x_stack_btp::msg::BtpDataIndication_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BtpDataIndication_<ContainerAllocator>::BTP_TYPE_A;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BtpDataIndication_<ContainerAllocator>::BTP_TYPE_INTERACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BtpDataIndication_<ContainerAllocator>::BTP_TYPE_B;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BtpDataIndication_<ContainerAllocator>::BTP_TYPE_NON_INTERACTIVE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace v2x_stack_btp

#endif  // V2X_STACK_BTP__MSG__DETAIL__BTP_DATA_INDICATION__STRUCT_HPP_
