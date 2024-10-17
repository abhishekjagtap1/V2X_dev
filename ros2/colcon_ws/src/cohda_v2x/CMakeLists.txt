cmake_minimum_required(VERSION 3.8)
project(cohda_v2x)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(ros_etsi_its_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)

# Include the header files directory
include_directories(include)

# Alternatively, if using target_include_directories:
#target_include_directories(cohda_v2x PUBLIC include)


add_executable(denm_send_node src/denm_send.cpp)
ament_target_dependencies(denm_send_node rclcpp std_msgs sensor_msgs ros_etsi_its_msgs geometry_msgs)

add_executable(cpm_receive_node src/cpm_receiver.cpp)
ament_target_dependencies(cpm_receive_node rclcpp std_msgs sensor_msgs ros_etsi_its_msgs geometry_msgs)

install(TARGETS 
  denm_send_node
  DESTINATION lib/${PROJECT_NAME}
)

install(TARGETS 
  cpm_receive_node
  DESTINATION lib/${PROJECT_NAME}
)

# Install the launch files
install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)

  set(ament_cmake_copyright_FOUND TRUE)

  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
