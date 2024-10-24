cmake_minimum_required(VERSION 3.8)
project(aruco_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/ArucoDetect.srv" DEPENDENCIES builtin_interfaces sensor_msgs
  ADD_LINTER_TESTS
  "msg/ArucoImage.msg"

  "srv/GetArucoResponse.srv" DEPENDENCIES builtin_interfaces sensor_msgs geometry_msgs
  ADD_LINTER_TESTS
  "msg/ArucoVideo.msg"
)

ament_export_dependencies(rosidl_default_runtime)
ament_export_dependencies(sensor_msgs)
ament_export_dependencies(geometry_msgs)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
