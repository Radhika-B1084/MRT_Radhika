// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aruco_interfaces:srv/GetArucoResponse.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aruco_interfaces/srv/detail/get_aruco_response__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aruco_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetArucoResponse_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aruco_interfaces::srv::GetArucoResponse_Request(_init);
}

void GetArucoResponse_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aruco_interfaces::srv::GetArucoResponse_Request *>(message_memory);
  typed_message->~GetArucoResponse_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetArucoResponse_Request_message_member_array[1] = {
  {
    "image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_interfaces::srv::GetArucoResponse_Request, image),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetArucoResponse_Request_message_members = {
  "aruco_interfaces::srv",  // message namespace
  "GetArucoResponse_Request",  // message name
  1,  // number of fields
  sizeof(aruco_interfaces::srv::GetArucoResponse_Request),
  GetArucoResponse_Request_message_member_array,  // message members
  GetArucoResponse_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetArucoResponse_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetArucoResponse_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetArucoResponse_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace aruco_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aruco_interfaces::srv::GetArucoResponse_Request>()
{
  return &::aruco_interfaces::srv::rosidl_typesupport_introspection_cpp::GetArucoResponse_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aruco_interfaces, srv, GetArucoResponse_Request)() {
  return &::aruco_interfaces::srv::rosidl_typesupport_introspection_cpp::GetArucoResponse_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "aruco_interfaces/srv/detail/get_aruco_response__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aruco_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetArucoResponse_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aruco_interfaces::srv::GetArucoResponse_Response(_init);
}

void GetArucoResponse_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aruco_interfaces::srv::GetArucoResponse_Response *>(message_memory);
  typed_message->~GetArucoResponse_Response();
}

size_t size_function__GetArucoResponse_Response__ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetArucoResponse_Response__ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__GetArucoResponse_Response__ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetArucoResponse_Response__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__GetArucoResponse_Response__ids(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__GetArucoResponse_Response__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__GetArucoResponse_Response__ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__GetArucoResponse_Response__ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetArucoResponse_Response__corners(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetArucoResponse_Response__corners(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__GetArucoResponse_Response__corners(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetArucoResponse_Response__corners(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__GetArucoResponse_Response__corners(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__GetArucoResponse_Response__corners(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__GetArucoResponse_Response__corners(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

void resize_function__GetArucoResponse_Response__corners(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetArucoResponse_Response_message_member_array[2] = {
  {
    "ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_interfaces::srv::GetArucoResponse_Response, ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetArucoResponse_Response__ids,  // size() function pointer
    get_const_function__GetArucoResponse_Response__ids,  // get_const(index) function pointer
    get_function__GetArucoResponse_Response__ids,  // get(index) function pointer
    fetch_function__GetArucoResponse_Response__ids,  // fetch(index, &value) function pointer
    assign_function__GetArucoResponse_Response__ids,  // assign(index, value) function pointer
    resize_function__GetArucoResponse_Response__ids  // resize(index) function pointer
  },
  {
    "corners",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_interfaces::srv::GetArucoResponse_Response, corners),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetArucoResponse_Response__corners,  // size() function pointer
    get_const_function__GetArucoResponse_Response__corners,  // get_const(index) function pointer
    get_function__GetArucoResponse_Response__corners,  // get(index) function pointer
    fetch_function__GetArucoResponse_Response__corners,  // fetch(index, &value) function pointer
    assign_function__GetArucoResponse_Response__corners,  // assign(index, value) function pointer
    resize_function__GetArucoResponse_Response__corners  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetArucoResponse_Response_message_members = {
  "aruco_interfaces::srv",  // message namespace
  "GetArucoResponse_Response",  // message name
  2,  // number of fields
  sizeof(aruco_interfaces::srv::GetArucoResponse_Response),
  GetArucoResponse_Response_message_member_array,  // message members
  GetArucoResponse_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetArucoResponse_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetArucoResponse_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetArucoResponse_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace aruco_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aruco_interfaces::srv::GetArucoResponse_Response>()
{
  return &::aruco_interfaces::srv::rosidl_typesupport_introspection_cpp::GetArucoResponse_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aruco_interfaces, srv, GetArucoResponse_Response)() {
  return &::aruco_interfaces::srv::rosidl_typesupport_introspection_cpp::GetArucoResponse_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "aruco_interfaces/srv/detail/get_aruco_response__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace aruco_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetArucoResponse_service_members = {
  "aruco_interfaces::srv",  // service namespace
  "GetArucoResponse",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<aruco_interfaces::srv::GetArucoResponse>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetArucoResponse_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetArucoResponse_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace aruco_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<aruco_interfaces::srv::GetArucoResponse>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::aruco_interfaces::srv::rosidl_typesupport_introspection_cpp::GetArucoResponse_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::aruco_interfaces::srv::GetArucoResponse_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::aruco_interfaces::srv::GetArucoResponse_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aruco_interfaces, srv, GetArucoResponse)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<aruco_interfaces::srv::GetArucoResponse>();
}

#ifdef __cplusplus
}
#endif
