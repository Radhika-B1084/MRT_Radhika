// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aruco_interfaces:msg/ArucoVideo.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__MSG__DETAIL__ARUCO_VIDEO__STRUCT_H_
#define ARUCO_INTERFACES__MSG__DETAIL__ARUCO_VIDEO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'corners'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/ArucoVideo in the package aruco_interfaces.
typedef struct aruco_interfaces__msg__ArucoVideo
{
  /// Array of detected marker IDs
  rosidl_runtime_c__int32__Sequence ids;
  /// 2D array of points for each marker's bounding box
  geometry_msgs__msg__Point__Sequence corners;
} aruco_interfaces__msg__ArucoVideo;

// Struct for a sequence of aruco_interfaces__msg__ArucoVideo.
typedef struct aruco_interfaces__msg__ArucoVideo__Sequence
{
  aruco_interfaces__msg__ArucoVideo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_interfaces__msg__ArucoVideo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_INTERFACES__MSG__DETAIL__ARUCO_VIDEO__STRUCT_H_
