// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/CPM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/cpm.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CPM__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CPM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/cpm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_CPM_number_of_perceived_objects
{
public:
  explicit Init_CPM_number_of_perceived_objects(::ros_etsi_its_msgs::msg::CPM & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::CPM number_of_perceived_objects(::ros_etsi_its_msgs::msg::CPM::_number_of_perceived_objects_type arg)
  {
    msg_.number_of_perceived_objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CPM msg_;
};

class Init_CPM_list_of_perceived_objects
{
public:
  explicit Init_CPM_list_of_perceived_objects(::ros_etsi_its_msgs::msg::CPM & msg)
  : msg_(msg)
  {}
  Init_CPM_number_of_perceived_objects list_of_perceived_objects(::ros_etsi_its_msgs::msg::CPM::_list_of_perceived_objects_type arg)
  {
    msg_.list_of_perceived_objects = std::move(arg);
    return Init_CPM_number_of_perceived_objects(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CPM msg_;
};

class Init_CPM_has_list_of_perceived_object
{
public:
  explicit Init_CPM_has_list_of_perceived_object(::ros_etsi_its_msgs::msg::CPM & msg)
  : msg_(msg)
  {}
  Init_CPM_list_of_perceived_objects has_list_of_perceived_object(::ros_etsi_its_msgs::msg::CPM::_has_list_of_perceived_object_type arg)
  {
    msg_.has_list_of_perceived_object = std::move(arg);
    return Init_CPM_list_of_perceived_objects(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CPM msg_;
};

class Init_CPM_sensor_information_container
{
public:
  explicit Init_CPM_sensor_information_container(::ros_etsi_its_msgs::msg::CPM & msg)
  : msg_(msg)
  {}
  Init_CPM_has_list_of_perceived_object sensor_information_container(::ros_etsi_its_msgs::msg::CPM::_sensor_information_container_type arg)
  {
    msg_.sensor_information_container = std::move(arg);
    return Init_CPM_has_list_of_perceived_object(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CPM msg_;
};

class Init_CPM_has_sensor_information_container
{
public:
  explicit Init_CPM_has_sensor_information_container(::ros_etsi_its_msgs::msg::CPM & msg)
  : msg_(msg)
  {}
  Init_CPM_sensor_information_container has_sensor_information_container(::ros_etsi_its_msgs::msg::CPM::_has_sensor_information_container_type arg)
  {
    msg_.has_sensor_information_container = std::move(arg);
    return Init_CPM_sensor_information_container(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CPM msg_;
};

class Init_CPM_originating_vehicle_container
{
public:
  explicit Init_CPM_originating_vehicle_container(::ros_etsi_its_msgs::msg::CPM & msg)
  : msg_(msg)
  {}
  Init_CPM_has_sensor_information_container originating_vehicle_container(::ros_etsi_its_msgs::msg::CPM::_originating_vehicle_container_type arg)
  {
    msg_.originating_vehicle_container = std::move(arg);
    return Init_CPM_has_sensor_information_container(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CPM msg_;
};

class Init_CPM_reference_position
{
public:
  explicit Init_CPM_reference_position(::ros_etsi_its_msgs::msg::CPM & msg)
  : msg_(msg)
  {}
  Init_CPM_originating_vehicle_container reference_position(::ros_etsi_its_msgs::msg::CPM::_reference_position_type arg)
  {
    msg_.reference_position = std::move(arg);
    return Init_CPM_originating_vehicle_container(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CPM msg_;
};

class Init_CPM_station_type
{
public:
  explicit Init_CPM_station_type(::ros_etsi_its_msgs::msg::CPM & msg)
  : msg_(msg)
  {}
  Init_CPM_reference_position station_type(::ros_etsi_its_msgs::msg::CPM::_station_type_type arg)
  {
    msg_.station_type = std::move(arg);
    return Init_CPM_reference_position(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CPM msg_;
};

class Init_CPM_generation_delta_time
{
public:
  explicit Init_CPM_generation_delta_time(::ros_etsi_its_msgs::msg::CPM & msg)
  : msg_(msg)
  {}
  Init_CPM_station_type generation_delta_time(::ros_etsi_its_msgs::msg::CPM::_generation_delta_time_type arg)
  {
    msg_.generation_delta_time = std::move(arg);
    return Init_CPM_station_type(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CPM msg_;
};

class Init_CPM_its_header
{
public:
  explicit Init_CPM_its_header(::ros_etsi_its_msgs::msg::CPM & msg)
  : msg_(msg)
  {}
  Init_CPM_generation_delta_time its_header(::ros_etsi_its_msgs::msg::CPM::_its_header_type arg)
  {
    msg_.its_header = std::move(arg);
    return Init_CPM_generation_delta_time(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CPM msg_;
};

class Init_CPM_header
{
public:
  Init_CPM_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CPM_its_header header(::ros_etsi_its_msgs::msg::CPM::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CPM_its_header(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CPM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::CPM>()
{
  return ros_etsi_its_msgs::msg::builder::Init_CPM_header();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CPM__BUILDER_HPP_
