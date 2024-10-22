// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aruco_interfaces:srv/ArucoDetect.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__SRV__DETAIL__ARUCO_DETECT__STRUCT_H_
#define ARUCO_INTERFACES__SRV__DETAIL__ARUCO_DETECT__STRUCT_H_

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

/// Struct defined in srv/ArucoDetect in the package aruco_interfaces.
typedef struct aruco_interfaces__srv__ArucoDetect_Request
{
  /// Input: the image data
  sensor_msgs__msg__Image image;
} aruco_interfaces__srv__ArucoDetect_Request;

// Struct for a sequence of aruco_interfaces__srv__ArucoDetect_Request.
typedef struct aruco_interfaces__srv__ArucoDetect_Request__Sequence
{
  aruco_interfaces__srv__ArucoDetect_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_interfaces__srv__ArucoDetect_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'polygon'
#include "geometry_msgs/msg/detail/polygon__struct.h"

/// Struct defined in srv/ArucoDetect in the package aruco_interfaces.
typedef struct aruco_interfaces__srv__ArucoDetect_Response
{
  /// Output: detected ArUco marker IDs
  rosidl_runtime_c__int32__Sequence ids;
  /// Output: bounding box coordinates [x1, y1, x2, y2, ..., xn, yn]
  geometry_msgs__msg__Polygon__Sequence polygon;
} aruco_interfaces__srv__ArucoDetect_Response;

// Struct for a sequence of aruco_interfaces__srv__ArucoDetect_Response.
typedef struct aruco_interfaces__srv__ArucoDetect_Response__Sequence
{
  aruco_interfaces__srv__ArucoDetect_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_interfaces__srv__ArucoDetect_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_INTERFACES__SRV__DETAIL__ARUCO_DETECT__STRUCT_H_
