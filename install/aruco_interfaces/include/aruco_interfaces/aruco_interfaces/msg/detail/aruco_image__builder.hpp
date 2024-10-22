// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aruco_interfaces:msg/ArucoImage.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__MSG__DETAIL__ARUCO_IMAGE__BUILDER_HPP_
#define ARUCO_INTERFACES__MSG__DETAIL__ARUCO_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aruco_interfaces/msg/detail/aruco_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aruco_interfaces
{

namespace msg
{

namespace builder
{

class Init_ArucoImage_corners
{
public:
  explicit Init_ArucoImage_corners(::aruco_interfaces::msg::ArucoImage & msg)
  : msg_(msg)
  {}
  ::aruco_interfaces::msg::ArucoImage corners(::aruco_interfaces::msg::ArucoImage::_corners_type arg)
  {
    msg_.corners = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_interfaces::msg::ArucoImage msg_;
};

class Init_ArucoImage_ids
{
public:
  Init_ArucoImage_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArucoImage_corners ids(::aruco_interfaces::msg::ArucoImage::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return Init_ArucoImage_corners(msg_);
  }

private:
  ::aruco_interfaces::msg::ArucoImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_interfaces::msg::ArucoImage>()
{
  return aruco_interfaces::msg::builder::Init_ArucoImage_ids();
}

}  // namespace aruco_interfaces

#endif  // ARUCO_INTERFACES__MSG__DETAIL__ARUCO_IMAGE__BUILDER_HPP_
