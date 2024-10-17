// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_stack_btp:msg/BtpDataIndication.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack_btp/msg/btp_data_indication.hpp"


#ifndef V2X_STACK_BTP__MSG__DETAIL__BTP_DATA_INDICATION__BUILDER_HPP_
#define V2X_STACK_BTP__MSG__DETAIL__BTP_DATA_INDICATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_stack_btp/msg/detail/btp_data_indication__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_stack_btp
{

namespace msg
{

namespace builder
{

class Init_BtpDataIndication_data
{
public:
  explicit Init_BtpDataIndication_data(::v2x_stack_btp::msg::BtpDataIndication & msg)
  : msg_(msg)
  {}
  ::v2x_stack_btp::msg::BtpDataIndication data(::v2x_stack_btp::msg::BtpDataIndication::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_stack_btp::msg::BtpDataIndication msg_;
};

class Init_BtpDataIndication_remaining_packet_lifetime
{
public:
  explicit Init_BtpDataIndication_remaining_packet_lifetime(::v2x_stack_btp::msg::BtpDataIndication & msg)
  : msg_(msg)
  {}
  Init_BtpDataIndication_data remaining_packet_lifetime(::v2x_stack_btp::msg::BtpDataIndication::_remaining_packet_lifetime_type arg)
  {
    msg_.remaining_packet_lifetime = std::move(arg);
    return Init_BtpDataIndication_data(msg_);
  }

private:
  ::v2x_stack_btp::msg::BtpDataIndication msg_;
};

class Init_BtpDataIndication_traffic_class
{
public:
  explicit Init_BtpDataIndication_traffic_class(::v2x_stack_btp::msg::BtpDataIndication & msg)
  : msg_(msg)
  {}
  Init_BtpDataIndication_remaining_packet_lifetime traffic_class(::v2x_stack_btp::msg::BtpDataIndication::_traffic_class_type arg)
  {
    msg_.traffic_class = std::move(arg);
    return Init_BtpDataIndication_remaining_packet_lifetime(msg_);
  }

private:
  ::v2x_stack_btp::msg::BtpDataIndication msg_;
};

class Init_BtpDataIndication_permissions
{
public:
  explicit Init_BtpDataIndication_permissions(::v2x_stack_btp::msg::BtpDataIndication & msg)
  : msg_(msg)
  {}
  Init_BtpDataIndication_traffic_class permissions(::v2x_stack_btp::msg::BtpDataIndication::_permissions_type arg)
  {
    msg_.permissions = std::move(arg);
    return Init_BtpDataIndication_traffic_class(msg_);
  }

private:
  ::v2x_stack_btp::msg::BtpDataIndication msg_;
};

class Init_BtpDataIndication_its_aid
{
public:
  explicit Init_BtpDataIndication_its_aid(::v2x_stack_btp::msg::BtpDataIndication & msg)
  : msg_(msg)
  {}
  Init_BtpDataIndication_permissions its_aid(::v2x_stack_btp::msg::BtpDataIndication::_its_aid_type arg)
  {
    msg_.its_aid = std::move(arg);
    return Init_BtpDataIndication_permissions(msg_);
  }

private:
  ::v2x_stack_btp::msg::BtpDataIndication msg_;
};

class Init_BtpDataIndication_destination
{
public:
  explicit Init_BtpDataIndication_destination(::v2x_stack_btp::msg::BtpDataIndication & msg)
  : msg_(msg)
  {}
  Init_BtpDataIndication_its_aid destination(::v2x_stack_btp::msg::BtpDataIndication::_destination_type arg)
  {
    msg_.destination = std::move(arg);
    return Init_BtpDataIndication_its_aid(msg_);
  }

private:
  ::v2x_stack_btp::msg::BtpDataIndication msg_;
};

class Init_BtpDataIndication_destination_port_info
{
public:
  explicit Init_BtpDataIndication_destination_port_info(::v2x_stack_btp::msg::BtpDataIndication & msg)
  : msg_(msg)
  {}
  Init_BtpDataIndication_destination destination_port_info(::v2x_stack_btp::msg::BtpDataIndication::_destination_port_info_type arg)
  {
    msg_.destination_port_info = std::move(arg);
    return Init_BtpDataIndication_destination(msg_);
  }

private:
  ::v2x_stack_btp::msg::BtpDataIndication msg_;
};

class Init_BtpDataIndication_destination_port
{
public:
  explicit Init_BtpDataIndication_destination_port(::v2x_stack_btp::msg::BtpDataIndication & msg)
  : msg_(msg)
  {}
  Init_BtpDataIndication_destination_port_info destination_port(::v2x_stack_btp::msg::BtpDataIndication::_destination_port_type arg)
  {
    msg_.destination_port = std::move(arg);
    return Init_BtpDataIndication_destination_port_info(msg_);
  }

private:
  ::v2x_stack_btp::msg::BtpDataIndication msg_;
};

class Init_BtpDataIndication_source_port
{
public:
  explicit Init_BtpDataIndication_source_port(::v2x_stack_btp::msg::BtpDataIndication & msg)
  : msg_(msg)
  {}
  Init_BtpDataIndication_destination_port source_port(::v2x_stack_btp::msg::BtpDataIndication::_source_port_type arg)
  {
    msg_.source_port = std::move(arg);
    return Init_BtpDataIndication_destination_port(msg_);
  }

private:
  ::v2x_stack_btp::msg::BtpDataIndication msg_;
};

class Init_BtpDataIndication_btp_type
{
public:
  explicit Init_BtpDataIndication_btp_type(::v2x_stack_btp::msg::BtpDataIndication & msg)
  : msg_(msg)
  {}
  Init_BtpDataIndication_source_port btp_type(::v2x_stack_btp::msg::BtpDataIndication::_btp_type_type arg)
  {
    msg_.btp_type = std::move(arg);
    return Init_BtpDataIndication_source_port(msg_);
  }

private:
  ::v2x_stack_btp::msg::BtpDataIndication msg_;
};

class Init_BtpDataIndication_header
{
public:
  Init_BtpDataIndication_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BtpDataIndication_btp_type header(::v2x_stack_btp::msg::BtpDataIndication::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BtpDataIndication_btp_type(msg_);
  }

private:
  ::v2x_stack_btp::msg::BtpDataIndication msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_stack_btp::msg::BtpDataIndication>()
{
  return v2x_stack_btp::msg::builder::Init_BtpDataIndication_header();
}

}  // namespace v2x_stack_btp

#endif  // V2X_STACK_BTP__MSG__DETAIL__BTP_DATA_INDICATION__BUILDER_HPP_
