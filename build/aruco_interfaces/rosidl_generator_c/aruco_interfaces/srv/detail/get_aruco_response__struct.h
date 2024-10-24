// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aruco_interfaces:srv/GetArucoResponse.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__SRV__DETAIL__GET_ARUCO_RESPONSE__STRUCT_H_
#define ARUCO_INTERFACES__SRV__DETAIL__GET_ARUCO_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/GetArucoResponse in the package aruco_interfaces.
typedef struct aruco_interfaces__srv__GetArucoResponse_Request
{
  sensor_msgs__msg__Image image;
} aruco_interfaces__srv__GetArucoResponse_Request;

// Struct for a sequence of aruco_interfaces__srv__GetArucoResponse_Request.
typedef struct aruco_interfaces__srv__GetArucoResponse_Request__Sequence
{
  aruco_interfaces__srv__GetArucoResponse_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_interfaces__srv__GetArucoResponse_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'corners'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/GetArucoResponse in the package aruco_interfaces.
typedef struct aruco_interfaces__srv__GetArucoResponse_Response
{
  rosidl_runtime_c__int32__Sequence ids;
  geometry_msgs__msg__Point__Sequence corners;
} aruco_interfaces__srv__GetArucoResponse_Response;

// Struct for a sequence of aruco_interfaces__srv__GetArucoResponse_Response.
typedef struct aruco_interfaces__srv__GetArucoResponse_Response__Sequence
{
  aruco_interfaces__srv__GetArucoResponse_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_interfaces__srv__GetArucoResponse_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_INTERFACES__SRV__DETAIL__GET_ARUCO_RESPONSE__STRUCT_H_
