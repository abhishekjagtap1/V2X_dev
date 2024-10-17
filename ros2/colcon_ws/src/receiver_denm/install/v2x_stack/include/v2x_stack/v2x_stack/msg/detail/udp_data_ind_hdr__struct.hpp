// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_stack:msg/UDPDataIndHdr.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/udp_data_ind_hdr.hpp"


#ifndef V2X_STACK__MSG__DETAIL__UDP_DATA_IND_HDR__STRUCT_HPP_
#define V2X_STACK__MSG__DETAIL__UDP_DATA_IND_HDR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'location'
#include "v2x_stack/msg/detail/location__struct.hpp"
// Member 'area'
#include "v2x_stack/msg/detail/area__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_stack__msg__UDPDataIndHdr __attribute__((deprecated))
#else
# define DEPRECATED__v2x_stack__msg__UDPDataIndHdr __declspec(deprecated)
#endif

namespace v2x_stack
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UDPDataIndHdr_
{
  using Type = UDPDataIndHdr_<ContainerAllocator>;

  explicit UDPDataIndHdr_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : location(_init),
    area(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->btp_type = 0;
      this->pkt_transport = 0;
      this->traffic_class = 0;
      this->max_pkt_life_time = 0;
      this->dest_port = 0;
      this->src_port = 0;
      this->dest_info = 0;
      this->sec_profile = 0;
      this->parser_result = 0;
      this->verification_result = 0;
      this->ssp_len = 0;
      this->aid = 0ul;
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->ssp_bits.begin(), this->ssp_bits.end(), 0);
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->cert_id.begin(), this->cert_id.end(), 0);
      this->length = 0;
    }
  }

  explicit UDPDataIndHdr_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : location(_alloc, _init),
    area(_alloc, _init),
    ssp_bits(_alloc),
    cert_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->btp_type = 0;
      this->pkt_transport = 0;
      this->traffic_class = 0;
      this->max_pkt_life_time = 0;
      this->dest_port = 0;
      this->src_port = 0;
      this->dest_info = 0;
      this->sec_profile = 0;
      this->parser_result = 0;
      this->verification_result = 0;
      this->ssp_len = 0;
      this->aid = 0ul;
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->ssp_bits.begin(), this->ssp_bits.end(), 0);
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->cert_id.begin(), this->cert_id.end(), 0);
      this->length = 0;
    }
  }

  // field types and members
  using _btp_type_type =
    uint8_t;
  _btp_type_type btp_type;
  using _pkt_transport_type =
    uint8_t;
  _pkt_transport_type pkt_transport;
  using _traffic_class_type =
    uint8_t;
  _traffic_class_type traffic_class;
  using _max_pkt_life_time_type =
    uint8_t;
  _max_pkt_life_time_type max_pkt_life_time;
  using _dest_port_type =
    uint16_t;
  _dest_port_type dest_port;
  using _src_port_type =
    uint16_t;
  _src_port_type src_port;
  using _dest_info_type =
    uint16_t;
  _dest_info_type dest_info;
  using _location_type =
    v2x_stack::msg::Location_<ContainerAllocator>;
  _location_type location;
  using _area_type =
    v2x_stack::msg::Area_<ContainerAllocator>;
  _area_type area;
  using _sec_profile_type =
    uint8_t;
  _sec_profile_type sec_profile;
  using _parser_result_type =
    uint8_t;
  _parser_result_type parser_result;
  using _verification_result_type =
    uint8_t;
  _verification_result_type verification_result;
  using _ssp_len_type =
    uint8_t;
  _ssp_len_type ssp_len;
  using _aid_type =
    uint32_t;
  _aid_type aid;
  using _ssp_bits_type =
    std::array<uint8_t, 32>;
  _ssp_bits_type ssp_bits;
  using _cert_id_type =
    std::array<uint8_t, 32>;
  _cert_id_type cert_id;
  using _length_type =
    uint16_t;
  _length_type length;

  // setters for named parameter idiom
  Type & set__btp_type(
    const uint8_t & _arg)
  {
    this->btp_type = _arg;
    return *this;
  }
  Type & set__pkt_transport(
    const uint8_t & _arg)
  {
    this->pkt_transport = _arg;
    return *this;
  }
  Type & set__traffic_class(
    const uint8_t & _arg)
  {
    this->traffic_class = _arg;
    return *this;
  }
  Type & set__max_pkt_life_time(
    const uint8_t & _arg)
  {
    this->max_pkt_life_time = _arg;
    return *this;
  }
  Type & set__dest_port(
    const uint16_t & _arg)
  {
    this->dest_port = _arg;
    return *this;
  }
  Type & set__src_port(
    const uint16_t & _arg)
  {
    this->src_port = _arg;
    return *this;
  }
  Type & set__dest_info(
    const uint16_t & _arg)
  {
    this->dest_info = _arg;
    return *this;
  }
  Type & set__location(
    const v2x_stack::msg::Location_<ContainerAllocator> & _arg)
  {
    this->location = _arg;
    return *this;
  }
  Type & set__area(
    const v2x_stack::msg::Area_<ContainerAllocator> & _arg)
  {
    this->area = _arg;
    return *this;
  }
  Type & set__sec_profile(
    const uint8_t & _arg)
  {
    this->sec_profile = _arg;
    return *this;
  }
  Type & set__parser_result(
    const uint8_t & _arg)
  {
    this->parser_result = _arg;
    return *this;
  }
  Type & set__verification_result(
    const uint8_t & _arg)
  {
    this->verification_result = _arg;
    return *this;
  }
  Type & set__ssp_len(
    const uint8_t & _arg)
  {
    this->ssp_len = _arg;
    return *this;
  }
  Type & set__aid(
    const uint32_t & _arg)
  {
    this->aid = _arg;
    return *this;
  }
  Type & set__ssp_bits(
    const std::array<uint8_t, 32> & _arg)
  {
    this->ssp_bits = _arg;
    return *this;
  }
  Type & set__cert_id(
    const std::array<uint8_t, 32> & _arg)
  {
    this->cert_id = _arg;
    return *this;
  }
  Type & set__length(
    const uint16_t & _arg)
  {
    this->length = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_stack::msg::UDPDataIndHdr_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_stack::msg::UDPDataIndHdr_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_stack::msg::UDPDataIndHdr_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_stack::msg::UDPDataIndHdr_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_stack::msg::UDPDataIndHdr_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_stack::msg::UDPDataIndHdr_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_stack::msg::UDPDataIndHdr_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_stack::msg::UDPDataIndHdr_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_stack::msg::UDPDataIndHdr_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_stack::msg::UDPDataIndHdr_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_stack__msg__UDPDataIndHdr
    std::shared_ptr<v2x_stack::msg::UDPDataIndHdr_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_stack__msg__UDPDataIndHdr
    std::shared_ptr<v2x_stack::msg::UDPDataIndHdr_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UDPDataIndHdr_ & other) const
  {
    if (this->btp_type != other.btp_type) {
      return false;
    }
    if (this->pkt_transport != other.pkt_transport) {
      return false;
    }
    if (this->traffic_class != other.traffic_class) {
      return false;
    }
    if (this->max_pkt_life_time != other.max_pkt_life_time) {
      return false;
    }
    if (this->dest_port != other.dest_port) {
      return false;
    }
    if (this->src_port != other.src_port) {
      return false;
    }
    if (this->dest_info != other.dest_info) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    if (this->area != other.area) {
      return false;
    }
    if (this->sec_profile != other.sec_profile) {
      return false;
    }
    if (this->parser_result != other.parser_result) {
      return false;
    }
    if (this->verification_result != other.verification_result) {
      return false;
    }
    if (this->ssp_len != other.ssp_len) {
      return false;
    }
    if (this->aid != other.aid) {
      return false;
    }
    if (this->ssp_bits != other.ssp_bits) {
      return false;
    }
    if (this->cert_id != other.cert_id) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    return true;
  }
  bool operator!=(const UDPDataIndHdr_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UDPDataIndHdr_

// alias to use template instance with default allocator
using UDPDataIndHdr =
  v2x_stack::msg::UDPDataIndHdr_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_stack

#endif  // V2X_STACK__MSG__DETAIL__UDP_DATA_IND_HDR__STRUCT_HPP_
