// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aruco_interfaces:msg/ArucoVideo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aruco_interfaces/msg/detail/aruco_video__rosidl_typesupport_introspection_c.h"
#include "aruco_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aruco_interfaces/msg/detail/aruco_video__functions.h"
#include "aruco_interfaces/msg/detail/aruco_video__struct.h"


// Include directives for member types
// Member `ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `corners`
#include "geometry_msgs/msg/point.h"
// Member `corners`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__ArucoVideo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aruco_interfaces__msg__ArucoVideo__init(message_memory);
}

void aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__ArucoVideo_fini_function(void * message_memory)
{
  aruco_interfaces__msg__ArucoVideo__fini(message_memory);
}

size_t aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__size_function__ArucoVideo__ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__get_const_function__ArucoVideo__ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__get_function__ArucoVideo__ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__fetch_function__ArucoVideo__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__get_const_function__ArucoVideo__ids(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__assign_function__ArucoVideo__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__get_function__ArucoVideo__ids(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__resize_function__ArucoVideo__ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__size_function__ArucoVideo__corners(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__get_const_function__ArucoVideo__corners(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__get_function__ArucoVideo__corners(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__fetch_function__ArucoVideo__corners(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__get_const_function__ArucoVideo__corners(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__assign_function__ArucoVideo__corners(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__get_function__ArucoVideo__corners(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__resize_function__ArucoVideo__corners(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__ArucoVideo_message_member_array[2] = {
  {
    "ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_interfaces__msg__ArucoVideo, ids),  // bytes offset in struct
    NULL,  // default value
    aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__size_function__ArucoVideo__ids,  // size() function pointer
    aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__get_const_function__ArucoVideo__ids,  // get_const(index) function pointer
    aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__get_function__ArucoVideo__ids,  // get(index) function pointer
    aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__fetch_function__ArucoVideo__ids,  // fetch(index, &value) function pointer
    aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__assign_function__ArucoVideo__ids,  // assign(index, value) function pointer
    aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__resize_function__ArucoVideo__ids  // resize(index) function pointer
  },
  {
    "corners",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_interfaces__msg__ArucoVideo, corners),  // bytes offset in struct
    NULL,  // default value
    aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__size_function__ArucoVideo__corners,  // size() function pointer
    aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__get_const_function__ArucoVideo__corners,  // get_const(index) function pointer
    aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__get_function__ArucoVideo__corners,  // get(index) function pointer
    aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__fetch_function__ArucoVideo__corners,  // fetch(index, &value) function pointer
    aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__assign_function__ArucoVideo__corners,  // assign(index, value) function pointer
    aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__resize_function__ArucoVideo__corners  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__ArucoVideo_message_members = {
  "aruco_interfaces__msg",  // message namespace
  "ArucoVideo",  // message name
  2,  // number of fields
  sizeof(aruco_interfaces__msg__ArucoVideo),
  aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__ArucoVideo_message_member_array,  // message members
  aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__ArucoVideo_init_function,  // function to initialize message memory (memory has to be allocated)
  aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__ArucoVideo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__ArucoVideo_message_type_support_handle = {
  0,
  &aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__ArucoVideo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aruco_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_interfaces, msg, ArucoVideo)() {
  aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__ArucoVideo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__ArucoVideo_message_type_support_handle.typesupport_identifier) {
    aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__ArucoVideo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aruco_interfaces__msg__ArucoVideo__rosidl_typesupport_introspection_c__ArucoVideo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
