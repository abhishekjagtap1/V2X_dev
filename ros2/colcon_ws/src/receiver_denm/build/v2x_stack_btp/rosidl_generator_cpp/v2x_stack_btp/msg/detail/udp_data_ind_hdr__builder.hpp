// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_stack_btp:msg/UDPDataIndHdr.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack_btp/msg/udp_data_ind_hdr.hpp"


#ifndef V2X_STACK_BTP__MSG__DETAIL__UDP_DATA_IND_HDR__BUILDER_HPP_
#define V2X_STACK_BTP__MSG__DETAIL__UDP_DATA_IND_HDR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_stack_btp/msg/detail/udp_data_ind_hdr__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_stack_btp
{

namespace msg
{

namespace builder
{

class Init_UDPDataIndHdr_length
{
public:
  explicit Init_UDPDataIndHdr_length(::v2x_stack_btp::msg::UDPDataIndHdr & msg)
  : msg_(msg)
  {}
  ::v2x_stack_btp::msg::UDPDataIndHdr length(::v2x_stack_btp::msg::UDPDataIndHdr::_length_type arg)
  {
    msg_.length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_stack_btp::msg::UDPDataIndHdr msg_;
};

class Init_UDPDataIndHdr_cert_id
{
public:
  explicit Init_UDPDataIndHdr_cert_id(::v2x_stack_btp::msg::UDPDataIndHdr & msg)
  : msg_(msg)
  {}
  Init_UDPDataIndHdr_length cert_id(::v2x_stack_btp::msg::UDPDataIndHdr::_cert_id_type arg)
  {
    msg_.cert_id = std::move(arg);
    return Init_UDPDataIndHdr_length(msg_);
  }

private:
  ::v2x_stack_btp::msg::UDPDataIndHdr msg_;
};

class Init_UDPDataIndHdr_ssp_bits
{
public:
  explicit Init_UDPDataIndHdr_ssp_bits(::v2x_stack_btp::msg::UDPDataIndHdr & msg)
  : msg_(msg)
  {}
  Init_UDPDataIndHdr_cert_id ssp_bits(::v2x_stack_btp::msg::UDPDataIndHdr::_ssp_bits_type arg)
  {
    msg_.ssp_bits = std::move(arg);
    return Init_UDPDataIndHdr_cert_id(msg_);
  }

private:
  ::v2x_stack_btp::msg::UDPDataIndHdr msg_;
};

class Init_UDPDataIndHdr_aid
{
public:
  explicit Init_UDPDataIndHdr_aid(::v2x_stack_btp::msg::UDPDataIndHdr & msg)
  : msg_(msg)
  {}
  Init_UDPDataIndHdr_ssp_bits aid(::v2x_stack_btp::msg::UDPDataIndHdr::_aid_type arg)
  {
    msg_.aid = std::move(arg);
    return Init_UDPDataIndHdr_ssp_bits(msg_);
  }

private:
  ::v2x_stack_btp::msg::UDPDataIndHdr msg_;
};

class Init_UDPDataIndHdr_ssp_len
{
public:
  explicit Init_UDPDataIndHdr_ssp_len(::v2x_stack_btp::msg::UDPDataIndHdr & msg)
  : msg_(msg)
  {}
  Init_UDPDataIndHdr_aid ssp_len(::v2x_stack_btp::msg::UDPDataIndHdr::_ssp_len_type arg)
  {
    msg_.ssp_len = std::move(arg);
    return Init_UDPDataIndHdr_aid(msg_);
  }

private:
  ::v2x_stack_btp::msg::UDPDataIndHdr msg_;
};

class Init_UDPDataIndHdr_verification_result
{
public:
  explicit Init_UDPDataIndHdr_verification_result(::v2x_stack_btp::msg::UDPDataIndHdr & msg)
  : msg_(msg)
  {}
  Init_UDPDataIndHdr_ssp_len verification_result(::v2x_stack_btp::msg::UDPDataIndHdr::_verification_result_type arg)
  {
    msg_.verification_result = std::move(arg);
    return Init_UDPDataIndHdr_ssp_len(msg_);
  }

private:
  ::v2x_stack_btp::msg::UDPDataIndHdr msg_;
};

class Init_UDPDataIndHdr_parser_result
{
public:
  explicit Init_UDPDataIndHdr_parser_result(::v2x_stack_btp::msg::UDPDataIndHdr & msg)
  : msg_(msg)
  {}
  Init_UDPDataIndHdr_verification_result parser_result(::v2x_stack_btp::msg::UDPDataIndHdr::_parser_result_type arg)
  {
    msg_.parser_result = std::move(arg);
    return Init_UDPDataIndHdr_verification_result(msg_);
  }

private:
  ::v2x_stack_btp::msg::UDPDataIndHdr msg_;
};

class Init_UDPDataIndHdr_sec_profile
{
public:
  explicit Init_UDPDataIndHdr_sec_profile(::v2x_stack_btp::msg::UDPDataIndHdr & msg)
  : msg_(msg)
  {}
  Init_UDPDataIndHdr_parser_result sec_profile(::v2x_stack_btp::msg::UDPDataIndHdr::_sec_profile_type arg)
  {
    msg_.sec_profile = std::move(arg);
    return Init_UDPDataIndHdr_parser_result(msg_);
  }

private:
  ::v2x_stack_btp::msg::UDPDataIndHdr msg_;
};

class Init_UDPDataIndHdr_area
{
public:
  explicit Init_UDPDataIndHdr_area(::v2x_stack_btp::msg::UDPDataIndHdr & msg)
  : msg_(msg)
  {}
  Init_UDPDataIndHdr_sec_profile area(::v2x_stack_btp::msg::UDPDataIndHdr::_area_type arg)
  {
    msg_.area = std::move(arg);
    return Init_UDPDataIndHdr_sec_profile(msg_);
  }

private:
  ::v2x_stack_btp::msg::UDPDataIndHdr msg_;
};

class Init_UDPDataIndHdr_location
{
public:
  explicit Init_UDPDataIndHdr_location(::v2x_stack_btp::msg::UDPDataIndHdr & msg)
  : msg_(msg)
  {}
  Init_UDPDataIndHdr_area location(::v2x_stack_btp::msg::UDPDataIndHdr::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_UDPDataIndHdr_area(msg_);
  }

private:
  ::v2x_stack_btp::msg::UDPDataIndHdr msg_;
};

class Init_UDPDataIndHdr_dest_info
{
public:
  explicit Init_UDPDataIndHdr_dest_info(::v2x_stack_btp::msg::UDPDataIndHdr & msg)
  : msg_(msg)
  {}
  Init_UDPDataIndHdr_location dest_info(::v2x_stack_btp::msg::UDPDataIndHdr::_dest_info_type arg)
  {
    msg_.dest_info = std::move(arg);
    return Init_UDPDataIndHdr_location(msg_);
  }

private:
  ::v2x_stack_btp::msg::UDPDataIndHdr msg_;
};

class Init_UDPDataIndHdr_src_port
{
public:
  explicit Init_UDPDataIndHdr_src_port(::v2x_stack_btp::msg::UDPDataIndHdr & msg)
  : msg_(msg)
  {}
  Init_UDPDataIndHdr_dest_info src_port(::v2x_stack_btp::msg::UDPDataIndHdr::_src_port_type arg)
  {
    msg_.src_port = std::move(arg);
    return Init_UDPDataIndHdr_dest_info(msg_);
  }

private:
  ::v2x_stack_btp::msg::UDPDataIndHdr msg_;
};

class Init_UDPDataIndHdr_dest_port
{
public:
  explicit Init_UDPDataIndHdr_dest_port(::v2x_stack_btp::msg::UDPDataIndHdr & msg)
  : msg_(msg)
  {}
  Init_UDPDataIndHdr_src_port dest_port(::v2x_stack_btp::msg::UDPDataIndHdr::_dest_port_type arg)
  {
    msg_.dest_port = std::move(arg);
    return Init_UDPDataIndHdr_src_port(msg_);
  }

private:
  ::v2x_stack_btp::msg::UDPDataIndHdr msg_;
};

class Init_UDPDataIndHdr_max_pkt_life_time
{
public:
  explicit Init_UDPDataIndHdr_max_pkt_life_time(::v2x_stack_btp::msg::UDPDataIndHdr & msg)
  : msg_(msg)
  {}
  Init_UDPDataIndHdr_dest_port max_pkt_life_time(::v2x_stack_btp::msg::UDPDataIndHdr::_max_pkt_life_time_type arg)
  {
    msg_.max_pkt_life_time = std::move(arg);
    return Init_UDPDataIndHdr_dest_port(msg_);
  }

private:
  ::v2x_stack_btp::msg::UDPDataIndHdr msg_;
};

class Init_UDPDataIndHdr_traffic_class
{
public:
  explicit Init_UDPDataIndHdr_traffic_class(::v2x_stack_btp::msg::UDPDataIndHdr & msg)
  : msg_(msg)
  {}
  Init_UDPDataIndHdr_max_pkt_life_time traffic_class(::v2x_stack_btp::msg::UDPDataIndHdr::_traffic_class_type arg)
  {
    msg_.traffic_class = std::move(arg);
    return Init_UDPDataIndHdr_max_pkt_life_time(msg_);
  }

private:
  ::v2x_stack_btp::msg::UDPDataIndHdr msg_;
};

class Init_UDPDataIndHdr_pkt_transport
{
public:
  explicit Init_UDPDataIndHdr_pkt_transport(::v2x_stack_btp::msg::UDPDataIndHdr & msg)
  : msg_(msg)
  {}
  Init_UDPDataIndHdr_traffic_class pkt_transport(::v2x_stack_btp::msg::UDPDataIndHdr::_pkt_transport_type arg)
  {
    msg_.pkt_transport = std::move(arg);
    return Init_UDPDataIndHdr_traffic_class(msg_);
  }

private:
  ::v2x_stack_btp::msg::UDPDataIndHdr msg_;
};

class Init_UDPDataIndHdr_btp_type
{
public:
  Init_UDPDataIndHdr_btp_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UDPDataIndHdr_pkt_transport btp_type(::v2x_stack_btp::msg::UDPDataIndHdr::_btp_type_type arg)
  {
    msg_.btp_type = std::move(arg);
    return Init_UDPDataIndHdr_pkt_transport(msg_);
  }

private:
  ::v2x_stack_btp::msg::UDPDataIndHdr msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_stack_btp::msg::UDPDataIndHdr>()
{
  return v2x_stack_btp::msg::builder::Init_UDPDataIndHdr_btp_type();
}

}  // namespace v2x_stack_btp

#endif  // V2X_STACK_BTP__MSG__DETAIL__UDP_DATA_IND_HDR__BUILDER_HPP_
