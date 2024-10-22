// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aruco_interfaces:srv/ArucoDetect.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__SRV__DETAIL__ARUCO_DETECT__BUILDER_HPP_
#define ARUCO_INTERFACES__SRV__DETAIL__ARUCO_DETECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aruco_interfaces/srv/detail/aruco_detect__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aruco_interfaces
{

namespace srv
{

namespace builder
{

class Init_ArucoDetect_Request_image
{
public:
  Init_ArucoDetect_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aruco_interfaces::srv::ArucoDetect_Request image(::aruco_interfaces::srv::ArucoDetect_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_interfaces::srv::ArucoDetect_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_interfaces::srv::ArucoDetect_Request>()
{
  return aruco_interfaces::srv::builder::Init_ArucoDetect_Request_image();
}

}  // namespace aruco_interfaces


namespace aruco_interfaces
{

namespace srv
{

namespace builder
{

class Init_ArucoDetect_Response_polygon
{
public:
  explicit Init_ArucoDetect_Response_polygon(::aruco_interfaces::srv::ArucoDetect_Response & msg)
  : msg_(msg)
  {}
  ::aruco_interfaces::srv::ArucoDetect_Response polygon(::aruco_interfaces::srv::ArucoDetect_Response::_polygon_type arg)
  {
    msg_.polygon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_interfaces::srv::ArucoDetect_Response msg_;
};

class Init_ArucoDetect_Response_ids
{
public:
  Init_ArucoDetect_Response_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArucoDetect_Response_polygon ids(::aruco_interfaces::srv::ArucoDetect_Response::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return Init_ArucoDetect_Response_polygon(msg_);
  }

private:
  ::aruco_interfaces::srv::ArucoDetect_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_interfaces::srv::ArucoDetect_Response>()
{
  return aruco_interfaces::srv::builder::Init_ArucoDetect_Response_ids();
}

}  // namespace aruco_interfaces

#endif  // ARUCO_INTERFACES__SRV__DETAIL__ARUCO_DETECT__BUILDER_HPP_
