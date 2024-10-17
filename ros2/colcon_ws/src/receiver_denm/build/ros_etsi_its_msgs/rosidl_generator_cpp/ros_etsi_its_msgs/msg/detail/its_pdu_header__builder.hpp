// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/ItsPduHeader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/its_pdu_header.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__ITS_PDU_HEADER__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__ITS_PDU_HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/its_pdu_header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_ItsPduHeader_station_id
{
public:
  explicit Init_ItsPduHeader_station_id(::ros_etsi_its_msgs::msg::ItsPduHeader & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::ItsPduHeader station_id(::ros_etsi_its_msgs::msg::ItsPduHeader::_station_id_type arg)
  {
    msg_.station_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ItsPduHeader msg_;
};

class Init_ItsPduHeader_message_id
{
public:
  explicit Init_ItsPduHeader_message_id(::ros_etsi_its_msgs::msg::ItsPduHeader & msg)
  : msg_(msg)
  {}
  Init_ItsPduHeader_station_id message_id(::ros_etsi_its_msgs::msg::ItsPduHeader::_message_id_type arg)
  {
    msg_.message_id = std::move(arg);
    return Init_ItsPduHeader_station_id(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ItsPduHeader msg_;
};

class Init_ItsPduHeader_protocol_version
{
public:
  Init_ItsPduHeader_protocol_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ItsPduHeader_message_id protocol_version(::ros_etsi_its_msgs::msg::ItsPduHeader::_protocol_version_type arg)
  {
    msg_.protocol_version = std::move(arg);
    return Init_ItsPduHeader_message_id(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ItsPduHeader msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::ItsPduHeader>()
{
  return ros_etsi_its_msgs::msg::builder::Init_ItsPduHeader_protocol_version();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__ITS_PDU_HEADER__BUILDER_HPP_
