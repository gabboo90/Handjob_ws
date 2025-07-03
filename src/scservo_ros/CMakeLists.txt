cmake_minimum_required(VERSION 3.8)
project(scservo_ros)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

file(GLOB SCServo_SOURCES
  ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)
file(GLOB SCServo_HEADERS
  ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h
)

if(NOT SCServo_SOURCES)
  message(FATAL_ERROR "Keine SCServo-Quelldateien in src/ gefunden.")
endif()

add_library(SCServo STATIC ${SCServo_SOURCES} ${SCServo_HEADERS})

add_executable(Ping src/examples/SMS_STS/Ping/Ping.cpp)

target_link_libraries(Ping
  PRIVATE
    SCServo
    rclcpp::rclcpp
    # std_msgs::std_msgs
)

add_executable(WritePos src/examples/SMS_STS/WritePos/WritePos.cpp)

target_link_libraries(WritePos
  PRIVATE
    SCServo
    rclcpp::rclcpp
)


target_include_directories(Ping PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/src
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_include_directories(WritePos PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/src
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)


install(TARGETS Ping
WritePos
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

ament_package()
