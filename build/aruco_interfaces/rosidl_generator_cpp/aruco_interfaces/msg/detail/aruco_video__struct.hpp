// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aruco_interfaces:msg/ArucoVideo.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__MSG__DETAIL__ARUCO_VIDEO__STRUCT_HPP_
#define ARUCO_INTERFACES__MSG__DETAIL__ARUCO_VIDEO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'corners'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aruco_interfaces__msg__ArucoVideo __attribute__((deprecated))
#else
# define DEPRECATED__aruco_interfaces__msg__ArucoVideo __declspec(deprecated)
#endif

namespace aruco_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArucoVideo_
{
  using Type = ArucoVideo_<ContainerAllocator>;

  explicit ArucoVideo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ArucoVideo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _ids_type ids;
  using _corners_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _corners_type corners;

  // setters for named parameter idiom
  Type & set__ids(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->ids = _arg;
    return *this;
  }
  Type & set__corners(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->corners = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aruco_interfaces::msg::ArucoVideo_<ContainerAllocator> *;
  using ConstRawPtr =
    const aruco_interfaces::msg::ArucoVideo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aruco_interfaces::msg::ArucoVideo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aruco_interfaces::msg::ArucoVideo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aruco_interfaces::msg::ArucoVideo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aruco_interfaces::msg::ArucoVideo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aruco_interfaces::msg::ArucoVideo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aruco_interfaces::msg::ArucoVideo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aruco_interfaces::msg::ArucoVideo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aruco_interfaces::msg::ArucoVideo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aruco_interfaces__msg__ArucoVideo
    std::shared_ptr<aruco_interfaces::msg::ArucoVideo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aruco_interfaces__msg__ArucoVideo
    std::shared_ptr<aruco_interfaces::msg::ArucoVideo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArucoVideo_ & other) const
  {
    if (this->ids != other.ids) {
      return false;
    }
    if (this->corners != other.corners) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArucoVideo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArucoVideo_

// alias to use template instance with default allocator
using ArucoVideo =
  aruco_interfaces::msg::ArucoVideo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aruco_interfaces

#endif  // ARUCO_INTERFACES__MSG__DETAIL__ARUCO_VIDEO__STRUCT_HPP_
