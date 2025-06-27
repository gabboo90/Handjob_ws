cmake_minimum_required(VERSION 3.8)
project(leap_node)

set(LEAPSDK_DIR ${CMAKE_CURRENT_SOURCE_DIR}/LeapSDK)
include_directories(${LEAPSDK_DIR}/include)
link_directories(${LEAPSDK_DIR}/lib/x64)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/BoneData.msg"
  "msg/FingerData.msg"
  "msg/HandData.msg"
  DEPENDENCIES std_msgs geometry_msgs builtin_interfaces
)

add_executable(sample_node src/Sample.cpp)

ament_target_dependencies(sample_node
  rclcpp
  std_msgs
  geometry_msgs
  builtin_interfaces
)

target_link_libraries(sample_node Leap)

set_target_properties(sample_node PROPERTIES
  INSTALL_RPATH "${LEAPSDK_DIR}/lib/x64"
)

install(TARGETS sample_node
  DESTINATION lib/${PROJECT_NAME}
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
