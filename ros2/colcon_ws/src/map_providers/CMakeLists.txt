cmake_minimum_required(VERSION 3.8)
project(map_providers)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(v2xvf_interfaces REQUIRED)
find_package(ros_etsi_its_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)


# Create the main executable for CPM
add_executable(cpm_main src/launcher_cpm.cpp src/cpm_provider.cpp)
ament_target_dependencies(cpm_main rclcpp std_msgs sensor_msgs v2xvf_interfaces ros_etsi_its_msgs geometry_msgs)

# Create the main executable for uBlox
add_executable(ublox_main src/launcher_ublox.cpp src/ublox_provider.cpp)
ament_target_dependencies(ublox_main rclcpp std_msgs sensor_msgs v2xvf_interfaces ros_etsi_its_msgs geometry_msgs)

# Install targets
install(TARGETS 
  cpm_main
  ublox_main
  DESTINATION lib/${PROJECT_NAME}
)

# Install launch files
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}/
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)

  set(ament_cmake_copyright_FOUND TRUE)

  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
