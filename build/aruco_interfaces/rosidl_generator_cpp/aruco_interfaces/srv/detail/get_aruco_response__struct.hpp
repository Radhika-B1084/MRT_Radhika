// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aruco_interfaces:srv/GetArucoResponse.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__SRV__DETAIL__GET_ARUCO_RESPONSE__STRUCT_HPP_
#define ARUCO_INTERFACES__SRV__DETAIL__GET_ARUCO_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aruco_interfaces__srv__GetArucoResponse_Request __attribute__((deprecated))
#else
# define DEPRECATED__aruco_interfaces__srv__GetArucoResponse_Request __declspec(deprecated)
#endif

namespace aruco_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetArucoResponse_Request_
{
  using Type = GetArucoResponse_Request_<ContainerAllocator>;

  explicit GetArucoResponse_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    (void)_init;
  }

  explicit GetArucoResponse_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aruco_interfaces::srv::GetArucoResponse_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aruco_interfaces::srv::GetArucoResponse_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aruco_interfaces::srv::GetArucoResponse_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aruco_interfaces::srv::GetArucoResponse_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aruco_interfaces::srv::GetArucoResponse_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aruco_interfaces::srv::GetArucoResponse_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aruco_interfaces::srv::GetArucoResponse_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aruco_interfaces::srv::GetArucoResponse_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aruco_interfaces::srv::GetArucoResponse_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aruco_interfaces::srv::GetArucoResponse_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aruco_interfaces__srv__GetArucoResponse_Request
    std::shared_ptr<aruco_interfaces::srv::GetArucoResponse_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aruco_interfaces__srv__GetArucoResponse_Request
    std::shared_ptr<aruco_interfaces::srv::GetArucoResponse_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetArucoResponse_Request_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetArucoResponse_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetArucoResponse_Request_

// alias to use template instance with default allocator
using GetArucoResponse_Request =
  aruco_interfaces::srv::GetArucoResponse_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aruco_interfaces


// Include directives for member types
// Member 'corners'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aruco_interfaces__srv__GetArucoResponse_Response __attribute__((deprecated))
#else
# define DEPRECATED__aruco_interfaces__srv__GetArucoResponse_Response __declspec(deprecated)
#endif

namespace aruco_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetArucoResponse_Response_
{
  using Type = GetArucoResponse_Response_<ContainerAllocator>;

  explicit GetArucoResponse_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetArucoResponse_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    aruco_interfaces::srv::GetArucoResponse_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aruco_interfaces::srv::GetArucoResponse_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aruco_interfaces::srv::GetArucoResponse_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aruco_interfaces::srv::GetArucoResponse_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aruco_interfaces::srv::GetArucoResponse_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aruco_interfaces::srv::GetArucoResponse_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aruco_interfaces::srv::GetArucoResponse_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aruco_interfaces::srv::GetArucoResponse_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aruco_interfaces::srv::GetArucoResponse_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aruco_interfaces::srv::GetArucoResponse_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aruco_interfaces__srv__GetArucoResponse_Response
    std::shared_ptr<aruco_interfaces::srv::GetArucoResponse_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aruco_interfaces__srv__GetArucoResponse_Response
    std::shared_ptr<aruco_interfaces::srv::GetArucoResponse_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetArucoResponse_Response_ & other) const
  {
    if (this->ids != other.ids) {
      return false;
    }
    if (this->corners != other.corners) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetArucoResponse_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetArucoResponse_Response_

// alias to use template instance with default allocator
using GetArucoResponse_Response =
  aruco_interfaces::srv::GetArucoResponse_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aruco_interfaces

namespace aruco_interfaces
{

namespace srv
{

struct GetArucoResponse
{
  using Request = aruco_interfaces::srv::GetArucoResponse_Request;
  using Response = aruco_interfaces::srv::GetArucoResponse_Response;
};

}  // namespace srv

}  // namespace aruco_interfaces

#endif  // ARUCO_INTERFACES__SRV__DETAIL__GET_ARUCO_RESPONSE__STRUCT_HPP_
