// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/DENM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/denm.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__DENM__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__DENM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/denm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_DENM_location
{
public:
  explicit Init_DENM_location(::ros_etsi_its_msgs::msg::DENM & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::DENM location(::ros_etsi_its_msgs::msg::DENM::_location_type arg)
  {
    msg_.location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::DENM msg_;
};

class Init_DENM_has_location
{
public:
  explicit Init_DENM_has_location(::ros_etsi_its_msgs::msg::DENM & msg)
  : msg_(msg)
  {}
  Init_DENM_location has_location(::ros_etsi_its_msgs::msg::DENM::_has_location_type arg)
  {
    msg_.has_location = std::move(arg);
    return Init_DENM_location(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::DENM msg_;
};

class Init_DENM_situation
{
public:
  explicit Init_DENM_situation(::ros_etsi_its_msgs::msg::DENM & msg)
  : msg_(msg)
  {}
  Init_DENM_has_location situation(::ros_etsi_its_msgs::msg::DENM::_situation_type arg)
  {
    msg_.situation = std::move(arg);
    return Init_DENM_has_location(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::DENM msg_;
};

class Init_DENM_has_situation
{
public:
  explicit Init_DENM_has_situation(::ros_etsi_its_msgs::msg::DENM & msg)
  : msg_(msg)
  {}
  Init_DENM_situation has_situation(::ros_etsi_its_msgs::msg::DENM::_has_situation_type arg)
  {
    msg_.has_situation = std::move(arg);
    return Init_DENM_situation(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::DENM msg_;
};

class Init_DENM_management
{
public:
  explicit Init_DENM_management(::ros_etsi_its_msgs::msg::DENM & msg)
  : msg_(msg)
  {}
  Init_DENM_has_situation management(::ros_etsi_its_msgs::msg::DENM::_management_type arg)
  {
    msg_.management = std::move(arg);
    return Init_DENM_has_situation(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::DENM msg_;
};

class Init_DENM_its_header
{
public:
  explicit Init_DENM_its_header(::ros_etsi_its_msgs::msg::DENM & msg)
  : msg_(msg)
  {}
  Init_DENM_management its_header(::ros_etsi_its_msgs::msg::DENM::_its_header_type arg)
  {
    msg_.its_header = std::move(arg);
    return Init_DENM_management(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::DENM msg_;
};

class Init_DENM_header
{
public:
  Init_DENM_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DENM_its_header header(::ros_etsi_its_msgs::msg::DENM::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DENM_its_header(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::DENM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::DENM>()
{
  return ros_etsi_its_msgs::msg::builder::Init_DENM_header();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__DENM__BUILDER_HPP_
