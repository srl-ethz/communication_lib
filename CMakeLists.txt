cmake_minimum_required(VERSION 3.16)
project(communication_lib VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)

# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)

add_library(comm_lib INTERFACE)

target_link_libraries(comm_lib INTERFACE
communication_common_lib
fastdds_lib
fastdds_new_lib
)

add_subdirectory(msgs_lib)
add_subdirectory(fastdds_lib)
add_subdirectory(fastdds)


add_subdirectory(tests)
