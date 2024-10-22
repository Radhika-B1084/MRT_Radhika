// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aruco_interfaces:srv/ArucoDetect.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aruco_interfaces/srv/detail/aruco_detect__rosidl_typesupport_introspection_c.h"
#include "aruco_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aruco_interfaces/srv/detail/aruco_detect__functions.h"
#include "aruco_interfaces/srv/detail/aruco_detect__struct.h"


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aruco_interfaces__srv__ArucoDetect_Request__rosidl_typesupport_introspection_c__ArucoDetect_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aruco_interfaces__srv__ArucoDetect_Request__init(message_memory);
}

void aruco_interfaces__srv__ArucoDetect_Request__rosidl_typesupport_introspection_c__ArucoDetect_Request_fini_function(void * message_memory)
{
  aruco_interfaces__srv__ArucoDetect_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aruco_interfaces__srv__ArucoDetect_Request__rosidl_typesupport_introspection_c__ArucoDetect_Request_message_member_array[1] = {
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_interfaces__srv__ArucoDetect_Request, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aruco_interfaces__srv__ArucoDetect_Request__rosidl_typesupport_introspection_c__ArucoDetect_Request_message_members = {
  "aruco_interfaces__srv",  // message namespace
  "ArucoDetect_Request",  // message name
  1,  // number of fields
  sizeof(aruco_interfaces__srv__ArucoDetect_Request),
  aruco_interfaces__srv__ArucoDetect_Request__rosidl_typesupport_introspection_c__ArucoDetect_Request_message_member_array,  // message members
  aruco_interfaces__srv__ArucoDetect_Request__rosidl_typesupport_introspection_c__ArucoDetect_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  aruco_interfaces__srv__ArucoDetect_Request__rosidl_typesupport_introspection_c__ArucoDetect_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aruco_interfaces__srv__ArucoDetect_Request__rosidl_typesupport_introspection_c__ArucoDetect_Request_message_type_support_handle = {
  0,
  &aruco_interfaces__srv__ArucoDetect_Request__rosidl_typesupport_introspection_c__ArucoDetect_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aruco_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_interfaces, srv, ArucoDetect_Request)() {
  aruco_interfaces__srv__ArucoDetect_Request__rosidl_typesupport_introspection_c__ArucoDetect_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!aruco_interfaces__srv__ArucoDetect_Request__rosidl_typesupport_introspection_c__ArucoDetect_Request_message_type_support_handle.typesupport_identifier) {
    aruco_interfaces__srv__ArucoDetect_Request__rosidl_typesupport_introspection_c__ArucoDetect_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aruco_interfaces__srv__ArucoDetect_Request__rosidl_typesupport_introspection_c__ArucoDetect_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "aruco_interfaces/srv/detail/aruco_detect__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aruco_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aruco_interfaces/srv/detail/aruco_detect__functions.h"
// already included above
// #include "aruco_interfaces/srv/detail/aruco_detect__struct.h"


// Include directives for member types
// Member `ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `polygon`
#include "geometry_msgs/msg/polygon.h"
// Member `polygon`
#include "geometry_msgs/msg/detail/polygon__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__ArucoDetect_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aruco_interfaces__srv__ArucoDetect_Response__init(message_memory);
}

void aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__ArucoDetect_Response_fini_function(void * message_memory)
{
  aruco_interfaces__srv__ArucoDetect_Response__fini(message_memory);
}

size_t aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__size_function__ArucoDetect_Response__ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__get_const_function__ArucoDetect_Response__ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__get_function__ArucoDetect_Response__ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__fetch_function__ArucoDetect_Response__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__get_const_function__ArucoDetect_Response__ids(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__assign_function__ArucoDetect_Response__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__get_function__ArucoDetect_Response__ids(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__resize_function__ArucoDetect_Response__ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__size_function__ArucoDetect_Response__polygon(
  const void * untyped_member)
{
  const geometry_msgs__msg__Polygon__Sequence * member =
    (const geometry_msgs__msg__Polygon__Sequence *)(untyped_member);
  return member->size;
}

const void * aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__get_const_function__ArucoDetect_Response__polygon(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Polygon__Sequence * member =
    (const geometry_msgs__msg__Polygon__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__get_function__ArucoDetect_Response__polygon(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Polygon__Sequence * member =
    (geometry_msgs__msg__Polygon__Sequence *)(untyped_member);
  return &member->data[index];
}

void aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__fetch_function__ArucoDetect_Response__polygon(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Polygon * item =
    ((const geometry_msgs__msg__Polygon *)
    aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__get_const_function__ArucoDetect_Response__polygon(untyped_member, index));
  geometry_msgs__msg__Polygon * value =
    (geometry_msgs__msg__Polygon *)(untyped_value);
  *value = *item;
}

void aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__assign_function__ArucoDetect_Response__polygon(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Polygon * item =
    ((geometry_msgs__msg__Polygon *)
    aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__get_function__ArucoDetect_Response__polygon(untyped_member, index));
  const geometry_msgs__msg__Polygon * value =
    (const geometry_msgs__msg__Polygon *)(untyped_value);
  *item = *value;
}

bool aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__resize_function__ArucoDetect_Response__polygon(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Polygon__Sequence * member =
    (geometry_msgs__msg__Polygon__Sequence *)(untyped_member);
  geometry_msgs__msg__Polygon__Sequence__fini(member);
  return geometry_msgs__msg__Polygon__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__ArucoDetect_Response_message_member_array[2] = {
  {
    "ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_interfaces__srv__ArucoDetect_Response, ids),  // bytes offset in struct
    NULL,  // default value
    aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__size_function__ArucoDetect_Response__ids,  // size() function pointer
    aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__get_const_function__ArucoDetect_Response__ids,  // get_const(index) function pointer
    aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__get_function__ArucoDetect_Response__ids,  // get(index) function pointer
    aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__fetch_function__ArucoDetect_Response__ids,  // fetch(index, &value) function pointer
    aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__assign_function__ArucoDetect_Response__ids,  // assign(index, value) function pointer
    aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__resize_function__ArucoDetect_Response__ids  // resize(index) function pointer
  },
  {
    "polygon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_interfaces__srv__ArucoDetect_Response, polygon),  // bytes offset in struct
    NULL,  // default value
    aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__size_function__ArucoDetect_Response__polygon,  // size() function pointer
    aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__get_const_function__ArucoDetect_Response__polygon,  // get_const(index) function pointer
    aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__get_function__ArucoDetect_Response__polygon,  // get(index) function pointer
    aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__fetch_function__ArucoDetect_Response__polygon,  // fetch(index, &value) function pointer
    aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__assign_function__ArucoDetect_Response__polygon,  // assign(index, value) function pointer
    aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__resize_function__ArucoDetect_Response__polygon  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__ArucoDetect_Response_message_members = {
  "aruco_interfaces__srv",  // message namespace
  "ArucoDetect_Response",  // message name
  2,  // number of fields
  sizeof(aruco_interfaces__srv__ArucoDetect_Response),
  aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__ArucoDetect_Response_message_member_array,  // message members
  aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__ArucoDetect_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__ArucoDetect_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__ArucoDetect_Response_message_type_support_handle = {
  0,
  &aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__ArucoDetect_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aruco_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_interfaces, srv, ArucoDetect_Response)() {
  aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__ArucoDetect_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Polygon)();
  if (!aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__ArucoDetect_Response_message_type_support_handle.typesupport_identifier) {
    aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__ArucoDetect_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aruco_interfaces__srv__ArucoDetect_Response__rosidl_typesupport_introspection_c__ArucoDetect_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "aruco_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "aruco_interfaces/srv/detail/aruco_detect__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers aruco_interfaces__srv__detail__aruco_detect__rosidl_typesupport_introspection_c__ArucoDetect_service_members = {
  "aruco_interfaces__srv",  // service namespace
  "ArucoDetect",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // aruco_interfaces__srv__detail__aruco_detect__rosidl_typesupport_introspection_c__ArucoDetect_Request_message_type_support_handle,
  NULL  // response message
  // aruco_interfaces__srv__detail__aruco_detect__rosidl_typesupport_introspection_c__ArucoDetect_Response_message_type_support_handle
};

static rosidl_service_type_support_t aruco_interfaces__srv__detail__aruco_detect__rosidl_typesupport_introspection_c__ArucoDetect_service_type_support_handle = {
  0,
  &aruco_interfaces__srv__detail__aruco_detect__rosidl_typesupport_introspection_c__ArucoDetect_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_interfaces, srv, ArucoDetect_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_interfaces, srv, ArucoDetect_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aruco_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_interfaces, srv, ArucoDetect)() {
  if (!aruco_interfaces__srv__detail__aruco_detect__rosidl_typesupport_introspection_c__ArucoDetect_service_type_support_handle.typesupport_identifier) {
    aruco_interfaces__srv__detail__aruco_detect__rosidl_typesupport_introspection_c__ArucoDetect_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)aruco_interfaces__srv__detail__aruco_detect__rosidl_typesupport_introspection_c__ArucoDetect_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_interfaces, srv, ArucoDetect_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_interfaces, srv, ArucoDetect_Response)()->data;
  }

  return &aruco_interfaces__srv__detail__aruco_detect__rosidl_typesupport_introspection_c__ArucoDetect_service_type_support_handle;
}
