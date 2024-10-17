// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_stack_btp:srv/BtpData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack_btp/srv/btp_data.hpp"


#ifndef V2X_STACK_BTP__SRV__DETAIL__BTP_DATA__BUILDER_HPP_
#define V2X_STACK_BTP__SRV__DETAIL__BTP_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_stack_btp/srv/detail/btp_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_stack_btp
{

namespace srv
{

namespace builder
{

class Init_BtpData_Request_data
{
public:
  explicit Init_BtpData_Request_data(::v2x_stack_btp::srv::BtpData_Request & msg)
  : msg_(msg)
  {}
  ::v2x_stack_btp::srv::BtpData_Request data(::v2x_stack_btp::srv::BtpData_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_stack_btp::srv::BtpData_Request msg_;
};

class Init_BtpData_Request_repetition_duration
{
public:
  explicit Init_BtpData_Request_repetition_duration(::v2x_stack_btp::srv::BtpData_Request & msg)
  : msg_(msg)
  {}
  Init_BtpData_Request_data repetition_duration(::v2x_stack_btp::srv::BtpData_Request::_repetition_duration_type arg)
  {
    msg_.repetition_duration = std::move(arg);
    return Init_BtpData_Request_data(msg_);
  }

private:
  ::v2x_stack_btp::srv::BtpData_Request msg_;
};

class Init_BtpData_Request_repetition_interval
{
public:
  explicit Init_BtpData_Request_repetition_interval(::v2x_stack_btp::srv::BtpData_Request & msg)
  : msg_(msg)
  {}
  Init_BtpData_Request_repetition_duration repetition_interval(::v2x_stack_btp::srv::BtpData_Request::_repetition_interval_type arg)
  {
    msg_.repetition_interval = std::move(arg);
    return Init_BtpData_Request_repetition_duration(msg_);
  }

private:
  ::v2x_stack_btp::srv::BtpData_Request msg_;
};

class Init_BtpData_Request_lifetime
{
public:
  explicit Init_BtpData_Request_lifetime(::v2x_stack_btp::srv::BtpData_Request & msg)
  : msg_(msg)
  {}
  Init_BtpData_Request_repetition_interval lifetime(::v2x_stack_btp::srv::BtpData_Request::_lifetime_type arg)
  {
    msg_.lifetime = std::move(arg);
    return Init_BtpData_Request_repetition_interval(msg_);
  }

private:
  ::v2x_stack_btp::srv::BtpData_Request msg_;
};

class Init_BtpData_Request_traffic_class
{
public:
  explicit Init_BtpData_Request_traffic_class(::v2x_stack_btp::srv::BtpData_Request & msg)
  : msg_(msg)
  {}
  Init_BtpData_Request_lifetime traffic_class(::v2x_stack_btp::srv::BtpData_Request::_traffic_class_type arg)
  {
    msg_.traffic_class = std::move(arg);
    return Init_BtpData_Request_lifetime(msg_);
  }

private:
  ::v2x_stack_btp::srv::BtpData_Request msg_;
};

class Init_BtpData_Request_hop_limit
{
public:
  explicit Init_BtpData_Request_hop_limit(::v2x_stack_btp::srv::BtpData_Request & msg)
  : msg_(msg)
  {}
  Init_BtpData_Request_traffic_class hop_limit(::v2x_stack_btp::srv::BtpData_Request::_hop_limit_type arg)
  {
    msg_.hop_limit = std::move(arg);
    return Init_BtpData_Request_traffic_class(msg_);
  }

private:
  ::v2x_stack_btp::srv::BtpData_Request msg_;
};

class Init_BtpData_Request_its_aid
{
public:
  explicit Init_BtpData_Request_its_aid(::v2x_stack_btp::srv::BtpData_Request & msg)
  : msg_(msg)
  {}
  Init_BtpData_Request_hop_limit its_aid(::v2x_stack_btp::srv::BtpData_Request::_its_aid_type arg)
  {
    msg_.its_aid = std::move(arg);
    return Init_BtpData_Request_hop_limit(msg_);
  }

private:
  ::v2x_stack_btp::srv::BtpData_Request msg_;
};

class Init_BtpData_Request_destination
{
public:
  explicit Init_BtpData_Request_destination(::v2x_stack_btp::srv::BtpData_Request & msg)
  : msg_(msg)
  {}
  Init_BtpData_Request_its_aid destination(::v2x_stack_btp::srv::BtpData_Request::_destination_type arg)
  {
    msg_.destination = std::move(arg);
    return Init_BtpData_Request_its_aid(msg_);
  }

private:
  ::v2x_stack_btp::srv::BtpData_Request msg_;
};

class Init_BtpData_Request_transport_type
{
public:
  explicit Init_BtpData_Request_transport_type(::v2x_stack_btp::srv::BtpData_Request & msg)
  : msg_(msg)
  {}
  Init_BtpData_Request_destination transport_type(::v2x_stack_btp::srv::BtpData_Request::_transport_type_type arg)
  {
    msg_.transport_type = std::move(arg);
    return Init_BtpData_Request_destination(msg_);
  }

private:
  ::v2x_stack_btp::srv::BtpData_Request msg_;
};

class Init_BtpData_Request_destination_port_info
{
public:
  explicit Init_BtpData_Request_destination_port_info(::v2x_stack_btp::srv::BtpData_Request & msg)
  : msg_(msg)
  {}
  Init_BtpData_Request_transport_type destination_port_info(::v2x_stack_btp::srv::BtpData_Request::_destination_port_info_type arg)
  {
    msg_.destination_port_info = std::move(arg);
    return Init_BtpData_Request_transport_type(msg_);
  }

private:
  ::v2x_stack_btp::srv::BtpData_Request msg_;
};

class Init_BtpData_Request_destination_port
{
public:
  explicit Init_BtpData_Request_destination_port(::v2x_stack_btp::srv::BtpData_Request & msg)
  : msg_(msg)
  {}
  Init_BtpData_Request_destination_port_info destination_port(::v2x_stack_btp::srv::BtpData_Request::_destination_port_type arg)
  {
    msg_.destination_port = std::move(arg);
    return Init_BtpData_Request_destination_port_info(msg_);
  }

private:
  ::v2x_stack_btp::srv::BtpData_Request msg_;
};

class Init_BtpData_Request_source_port
{
public:
  explicit Init_BtpData_Request_source_port(::v2x_stack_btp::srv::BtpData_Request & msg)
  : msg_(msg)
  {}
  Init_BtpData_Request_destination_port source_port(::v2x_stack_btp::srv::BtpData_Request::_source_port_type arg)
  {
    msg_.source_port = std::move(arg);
    return Init_BtpData_Request_destination_port(msg_);
  }

private:
  ::v2x_stack_btp::srv::BtpData_Request msg_;
};

class Init_BtpData_Request_btp_type
{
public:
  Init_BtpData_Request_btp_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BtpData_Request_source_port btp_type(::v2x_stack_btp::srv::BtpData_Request::_btp_type_type arg)
  {
    msg_.btp_type = std::move(arg);
    return Init_BtpData_Request_source_port(msg_);
  }

private:
  ::v2x_stack_btp::srv::BtpData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_stack_btp::srv::BtpData_Request>()
{
  return v2x_stack_btp::srv::builder::Init_BtpData_Request_btp_type();
}

}  // namespace v2x_stack_btp


namespace v2x_stack_btp
{

namespace srv
{

namespace builder
{

class Init_BtpData_Response_confirm
{
public:
  Init_BtpData_Response_confirm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::v2x_stack_btp::srv::BtpData_Response confirm(::v2x_stack_btp::srv::BtpData_Response::_confirm_type arg)
  {
    msg_.confirm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_stack_btp::srv::BtpData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_stack_btp::srv::BtpData_Response>()
{
  return v2x_stack_btp::srv::builder::Init_BtpData_Response_confirm();
}

}  // namespace v2x_stack_btp


namespace v2x_stack_btp
{

namespace srv
{

namespace builder
{

class Init_BtpData_Event_response
{
public:
  explicit Init_BtpData_Event_response(::v2x_stack_btp::srv::BtpData_Event & msg)
  : msg_(msg)
  {}
  ::v2x_stack_btp::srv::BtpData_Event response(::v2x_stack_btp::srv::BtpData_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_stack_btp::srv::BtpData_Event msg_;
};

class Init_BtpData_Event_request
{
public:
  explicit Init_BtpData_Event_request(::v2x_stack_btp::srv::BtpData_Event & msg)
  : msg_(msg)
  {}
  Init_BtpData_Event_response request(::v2x_stack_btp::srv::BtpData_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_BtpData_Event_response(msg_);
  }

private:
  ::v2x_stack_btp::srv::BtpData_Event msg_;
};

class Init_BtpData_Event_info
{
public:
  Init_BtpData_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BtpData_Event_request info(::v2x_stack_btp::srv::BtpData_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_BtpData_Event_request(msg_);
  }

private:
  ::v2x_stack_btp::srv::BtpData_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_stack_btp::srv::BtpData_Event>()
{
  return v2x_stack_btp::srv::builder::Init_BtpData_Event_info();
}

}  // namespace v2x_stack_btp

#endif  // V2X_STACK_BTP__SRV__DETAIL__BTP_DATA__BUILDER_HPP_
