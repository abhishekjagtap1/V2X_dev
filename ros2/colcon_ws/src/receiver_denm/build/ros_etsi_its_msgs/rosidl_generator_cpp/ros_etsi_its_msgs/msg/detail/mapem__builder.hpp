// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/MAPEM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/mapem.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__MAPEM__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__MAPEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/mapem__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_MAPEM_intersections
{
public:
  explicit Init_MAPEM_intersections(::ros_etsi_its_msgs::msg::MAPEM & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::MAPEM intersections(::ros_etsi_its_msgs::msg::MAPEM::_intersections_type arg)
  {
    msg_.intersections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::MAPEM msg_;
};

class Init_MAPEM_msg_issue_revision
{
public:
  explicit Init_MAPEM_msg_issue_revision(::ros_etsi_its_msgs::msg::MAPEM & msg)
  : msg_(msg)
  {}
  Init_MAPEM_intersections msg_issue_revision(::ros_etsi_its_msgs::msg::MAPEM::_msg_issue_revision_type arg)
  {
    msg_.msg_issue_revision = std::move(arg);
    return Init_MAPEM_intersections(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::MAPEM msg_;
};

class Init_MAPEM_time_stamp
{
public:
  explicit Init_MAPEM_time_stamp(::ros_etsi_its_msgs::msg::MAPEM & msg)
  : msg_(msg)
  {}
  Init_MAPEM_msg_issue_revision time_stamp(::ros_etsi_its_msgs::msg::MAPEM::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_MAPEM_msg_issue_revision(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::MAPEM msg_;
};

class Init_MAPEM_its_header
{
public:
  explicit Init_MAPEM_its_header(::ros_etsi_its_msgs::msg::MAPEM & msg)
  : msg_(msg)
  {}
  Init_MAPEM_time_stamp its_header(::ros_etsi_its_msgs::msg::MAPEM::_its_header_type arg)
  {
    msg_.its_header = std::move(arg);
    return Init_MAPEM_time_stamp(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::MAPEM msg_;
};

class Init_MAPEM_header
{
public:
  Init_MAPEM_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MAPEM_its_header header(::ros_etsi_its_msgs::msg::MAPEM::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MAPEM_its_header(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::MAPEM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::MAPEM>()
{
  return ros_etsi_its_msgs::msg::builder::Init_MAPEM_header();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__MAPEM__BUILDER_HPP_
