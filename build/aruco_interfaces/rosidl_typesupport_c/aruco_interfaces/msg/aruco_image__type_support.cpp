// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from aruco_interfaces:msg/ArucoImage.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "aruco_interfaces/msg/detail/aruco_image__struct.h"
#include "aruco_interfaces/msg/detail/aruco_image__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace aruco_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _ArucoImage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArucoImage_type_support_ids_t;

static const _ArucoImage_type_support_ids_t _ArucoImage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ArucoImage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArucoImage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArucoImage_type_support_symbol_names_t _ArucoImage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aruco_interfaces, msg, ArucoImage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_interfaces, msg, ArucoImage)),
  }
};

typedef struct _ArucoImage_type_support_data_t
{
  void * data[2];
} _ArucoImage_type_support_data_t;

static _ArucoImage_type_support_data_t _ArucoImage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArucoImage_message_typesupport_map = {
  2,
  "aruco_interfaces",
  &_ArucoImage_message_typesupport_ids.typesupport_identifier[0],
  &_ArucoImage_message_typesupport_symbol_names.symbol_name[0],
  &_ArucoImage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArucoImage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArucoImage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace aruco_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, aruco_interfaces, msg, ArucoImage)() {
  return &::aruco_interfaces::msg::rosidl_typesupport_c::ArucoImage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
