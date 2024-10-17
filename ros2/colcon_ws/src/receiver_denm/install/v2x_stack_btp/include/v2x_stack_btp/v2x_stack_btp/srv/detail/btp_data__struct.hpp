// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_stack_btp:srv/BtpData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack_btp/srv/btp_data.hpp"


#ifndef V2X_STACK_BTP__SRV__DETAIL__BTP_DATA__STRUCT_HPP_
#define V2X_STACK_BTP__SRV__DETAIL__BTP_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'destination'
#include "v2x_stack_btp/msg/detail/geo_net_destination__struct.hpp"
// Member 'traffic_class'
#include "v2x_stack_btp/msg/detail/traffic_class__struct.hpp"
// Member 'lifetime'
// Member 'repetition_interval'
// Member 'repetition_duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_stack_btp__srv__BtpData_Request __attribute__((deprecated))
#else
# define DEPRECATED__v2x_stack_btp__srv__BtpData_Request __declspec(deprecated)
#endif

namespace v2x_stack_btp
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BtpData_Request_
{
  using Type = BtpData_Request_<ContainerAllocator>;

  explicit BtpData_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : destination(_init),
    traffic_class(_init),
    lifetime(_init),
    repetition_interval(_init),
    repetition_duration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->btp_type = 0;
      this->source_port = 0;
      this->destination_port = 0;
      this->destination_port_info = 0;
      this->transport_type = 0;
      this->its_aid = 0ul;
      this->hop_limit = 0;
      std::fill<typename std::array<uint8_t, 1>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  explicit BtpData_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : destination(_alloc, _init),
    traffic_class(_alloc, _init),
    lifetime(_alloc, _init),
    repetition_interval(_alloc, _init),
    repetition_duration(_alloc, _init),
    data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->btp_type = 0;
      this->source_port = 0;
      this->destination_port = 0;
      this->destination_port_info = 0;
      this->transport_type = 0;
      this->its_aid = 0ul;
      this->hop_limit = 0;
      std::fill<typename std::array<uint8_t, 1>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  // field types and members
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
  using _transport_type_type =
    uint8_t;
  _transport_type_type transport_type;
  using _destination_type =
    v2x_stack_btp::msg::GeoNetDestination_<ContainerAllocator>;
  _destination_type destination;
  using _its_aid_type =
    uint32_t;
  _its_aid_type its_aid;
  using _hop_limit_type =
    uint8_t;
  _hop_limit_type hop_limit;
  using _traffic_class_type =
    v2x_stack_btp::msg::TrafficClass_<ContainerAllocator>;
  _traffic_class_type traffic_class;
  using _lifetime_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _lifetime_type lifetime;
  using _repetition_interval_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _repetition_interval_type repetition_interval;
  using _repetition_duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _repetition_duration_type repetition_duration;
  using _data_type =
    std::array<uint8_t, 1>;
  _data_type data;

  // setters for named parameter idiom
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
  Type & set__transport_type(
    const uint8_t & _arg)
  {
    this->transport_type = _arg;
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
  Type & set__hop_limit(
    const uint8_t & _arg)
  {
    this->hop_limit = _arg;
    return *this;
  }
  Type & set__traffic_class(
    const v2x_stack_btp::msg::TrafficClass_<ContainerAllocator> & _arg)
  {
    this->traffic_class = _arg;
    return *this;
  }
  Type & set__lifetime(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->lifetime = _arg;
    return *this;
  }
  Type & set__repetition_interval(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->repetition_interval = _arg;
    return *this;
  }
  Type & set__repetition_duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->repetition_duration = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<uint8_t, 1> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_stack_btp::srv::BtpData_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_stack_btp::srv::BtpData_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_stack_btp::srv::BtpData_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_stack_btp::srv::BtpData_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_stack_btp::srv::BtpData_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_stack_btp::srv::BtpData_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_stack_btp::srv::BtpData_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_stack_btp::srv::BtpData_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_stack_btp::srv::BtpData_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_stack_btp::srv::BtpData_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_stack_btp__srv__BtpData_Request
    std::shared_ptr<v2x_stack_btp::srv::BtpData_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_stack_btp__srv__BtpData_Request
    std::shared_ptr<v2x_stack_btp::srv::BtpData_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BtpData_Request_ & other) const
  {
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
    if (this->transport_type != other.transport_type) {
      return false;
    }
    if (this->destination != other.destination) {
      return false;
    }
    if (this->its_aid != other.its_aid) {
      return false;
    }
    if (this->hop_limit != other.hop_limit) {
      return false;
    }
    if (this->traffic_class != other.traffic_class) {
      return false;
    }
    if (this->lifetime != other.lifetime) {
      return false;
    }
    if (this->repetition_interval != other.repetition_interval) {
      return false;
    }
    if (this->repetition_duration != other.repetition_duration) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const BtpData_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BtpData_Request_

// alias to use template instance with default allocator
using BtpData_Request =
  v2x_stack_btp::srv::BtpData_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace v2x_stack_btp


#ifndef _WIN32
# define DEPRECATED__v2x_stack_btp__srv__BtpData_Response __attribute__((deprecated))
#else
# define DEPRECATED__v2x_stack_btp__srv__BtpData_Response __declspec(deprecated)
#endif

namespace v2x_stack_btp
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BtpData_Response_
{
  using Type = BtpData_Response_<ContainerAllocator>;

  explicit BtpData_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirm = 0;
    }
  }

  explicit BtpData_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirm = 0;
    }
  }

  // field types and members
  using _confirm_type =
    uint8_t;
  _confirm_type confirm;

  // setters for named parameter idiom
  Type & set__confirm(
    const uint8_t & _arg)
  {
    this->confirm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_stack_btp::srv::BtpData_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_stack_btp::srv::BtpData_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_stack_btp::srv::BtpData_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_stack_btp::srv::BtpData_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_stack_btp::srv::BtpData_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_stack_btp::srv::BtpData_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_stack_btp::srv::BtpData_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_stack_btp::srv::BtpData_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_stack_btp::srv::BtpData_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_stack_btp::srv::BtpData_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_stack_btp__srv__BtpData_Response
    std::shared_ptr<v2x_stack_btp::srv::BtpData_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_stack_btp__srv__BtpData_Response
    std::shared_ptr<v2x_stack_btp::srv::BtpData_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BtpData_Response_ & other) const
  {
    if (this->confirm != other.confirm) {
      return false;
    }
    return true;
  }
  bool operator!=(const BtpData_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BtpData_Response_

// alias to use template instance with default allocator
using BtpData_Response =
  v2x_stack_btp::srv::BtpData_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace v2x_stack_btp


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_stack_btp__srv__BtpData_Event __attribute__((deprecated))
#else
# define DEPRECATED__v2x_stack_btp__srv__BtpData_Event __declspec(deprecated)
#endif

namespace v2x_stack_btp
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BtpData_Event_
{
  using Type = BtpData_Event_<ContainerAllocator>;

  explicit BtpData_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit BtpData_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<v2x_stack_btp::srv::BtpData_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_stack_btp::srv::BtpData_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<v2x_stack_btp::srv::BtpData_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_stack_btp::srv::BtpData_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<v2x_stack_btp::srv::BtpData_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_stack_btp::srv::BtpData_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<v2x_stack_btp::srv::BtpData_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_stack_btp::srv::BtpData_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_stack_btp::srv::BtpData_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_stack_btp::srv::BtpData_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_stack_btp::srv::BtpData_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_stack_btp::srv::BtpData_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_stack_btp::srv::BtpData_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_stack_btp::srv::BtpData_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_stack_btp::srv::BtpData_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_stack_btp::srv::BtpData_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_stack_btp::srv::BtpData_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_stack_btp::srv::BtpData_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_stack_btp__srv__BtpData_Event
    std::shared_ptr<v2x_stack_btp::srv::BtpData_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_stack_btp__srv__BtpData_Event
    std::shared_ptr<v2x_stack_btp::srv::BtpData_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BtpData_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const BtpData_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BtpData_Event_

// alias to use template instance with default allocator
using BtpData_Event =
  v2x_stack_btp::srv::BtpData_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace v2x_stack_btp

namespace v2x_stack_btp
{

namespace srv
{

struct BtpData
{
  using Request = v2x_stack_btp::srv::BtpData_Request;
  using Response = v2x_stack_btp::srv::BtpData_Response;
  using Event = v2x_stack_btp::srv::BtpData_Event;
};

}  // namespace srv

}  // namespace v2x_stack_btp

#endif  // V2X_STACK_BTP__SRV__DETAIL__BTP_DATA__STRUCT_HPP_
