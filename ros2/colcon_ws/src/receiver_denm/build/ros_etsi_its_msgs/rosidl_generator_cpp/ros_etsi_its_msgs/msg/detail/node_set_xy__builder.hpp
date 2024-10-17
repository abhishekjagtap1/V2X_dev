// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/NodeSetXY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/node_set_xy.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__NODE_SET_XY__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__NODE_SET_XY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/node_set_xy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeSetXY_pos
{
public:
  explicit Init_NodeSetXY_pos(::ros_etsi_its_msgs::msg::NodeSetXY & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::NodeSetXY pos(::ros_etsi_its_msgs::msg::NodeSetXY::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::NodeSetXY msg_;
};

class Init_NodeSetXY_y
{
public:
  explicit Init_NodeSetXY_y(::ros_etsi_its_msgs::msg::NodeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeSetXY_pos y(::ros_etsi_its_msgs::msg::NodeSetXY::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_NodeSetXY_pos(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::NodeSetXY msg_;
};

class Init_NodeSetXY_x
{
public:
  Init_NodeSetXY_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeSetXY_y x(::ros_etsi_its_msgs::msg::NodeSetXY::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_NodeSetXY_y(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::NodeSetXY msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::NodeSetXY>()
{
  return ros_etsi_its_msgs::msg::builder::Init_NodeSetXY_x();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__NODE_SET_XY__BUILDER_HPP_
