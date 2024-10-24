// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aruco_interfaces:srv/GetArucoResponse.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__SRV__DETAIL__GET_ARUCO_RESPONSE__BUILDER_HPP_
#define ARUCO_INTERFACES__SRV__DETAIL__GET_ARUCO_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aruco_interfaces/srv/detail/get_aruco_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aruco_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetArucoResponse_Request_image
{
public:
  Init_GetArucoResponse_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aruco_interfaces::srv::GetArucoResponse_Request image(::aruco_interfaces::srv::GetArucoResponse_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_interfaces::srv::GetArucoResponse_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_interfaces::srv::GetArucoResponse_Request>()
{
  return aruco_interfaces::srv::builder::Init_GetArucoResponse_Request_image();
}

}  // namespace aruco_interfaces


namespace aruco_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetArucoResponse_Response_corners
{
public:
  explicit Init_GetArucoResponse_Response_corners(::aruco_interfaces::srv::GetArucoResponse_Response & msg)
  : msg_(msg)
  {}
  ::aruco_interfaces::srv::GetArucoResponse_Response corners(::aruco_interfaces::srv::GetArucoResponse_Response::_corners_type arg)
  {
    msg_.corners = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_interfaces::srv::GetArucoResponse_Response msg_;
};

class Init_GetArucoResponse_Response_ids
{
public:
  Init_GetArucoResponse_Response_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetArucoResponse_Response_corners ids(::aruco_interfaces::srv::GetArucoResponse_Response::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return Init_GetArucoResponse_Response_corners(msg_);
  }

private:
  ::aruco_interfaces::srv::GetArucoResponse_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_interfaces::srv::GetArucoResponse_Response>()
{
  return aruco_interfaces::srv::builder::Init_GetArucoResponse_Response_ids();
}

}  // namespace aruco_interfaces

#endif  // ARUCO_INTERFACES__SRV__DETAIL__GET_ARUCO_RESPONSE__BUILDER_HPP_
