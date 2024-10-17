// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/connection.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CONNECTION__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CONNECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/connection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_Connection_connection_id
{
public:
  explicit Init_Connection_connection_id(::ros_etsi_its_msgs::msg::Connection & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::Connection connection_id(::ros_etsi_its_msgs::msg::Connection::_connection_id_type arg)
  {
    msg_.connection_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::Connection msg_;
};

class Init_Connection_signal_group
{
public:
  explicit Init_Connection_signal_group(::ros_etsi_its_msgs::msg::Connection & msg)
  : msg_(msg)
  {}
  Init_Connection_connection_id signal_group(::ros_etsi_its_msgs::msg::Connection::_signal_group_type arg)
  {
    msg_.signal_group = std::move(arg);
    return Init_Connection_connection_id(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::Connection msg_;
};

class Init_Connection_remote_intersection
{
public:
  explicit Init_Connection_remote_intersection(::ros_etsi_its_msgs::msg::Connection & msg)
  : msg_(msg)
  {}
  Init_Connection_signal_group remote_intersection(::ros_etsi_its_msgs::msg::Connection::_remote_intersection_type arg)
  {
    msg_.remote_intersection = std::move(arg);
    return Init_Connection_signal_group(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::Connection msg_;
};

class Init_Connection_connecting_lane
{
public:
  Init_Connection_connecting_lane()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Connection_remote_intersection connecting_lane(::ros_etsi_its_msgs::msg::Connection::_connecting_lane_type arg)
  {
    msg_.connecting_lane = std::move(arg);
    return Init_Connection_remote_intersection(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::Connection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::Connection>()
{
  return ros_etsi_its_msgs::msg::builder::Init_Connection_connecting_lane();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CONNECTION__BUILDER_HPP_
