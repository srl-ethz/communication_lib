cmake_minimum_required(VERSION 3.16)
project(communication_lib VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 20)

# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)

add_library(comm_lib INTERFACE)

target_link_libraries(comm_lib INTERFACE
msgs_lib
fastdds_lib
)

add_subdirectory(msgs_lib)
add_subdirectory(fastdds_lib)

add_subdirectory(tests)

#=============================================
# to allow find_package() on comm_lib
#=============================================
#
# the following case be used in an external project requiring kindr:
#  ...
#  find_package(comm_lib)
#  include_directories(${comm_lib_INCLUDE_DIRS})
#  ...

# NOTE: the following will support find_package for 1) local build (make) and 2) for installed files (make install)

# 1- local build #

# # Register the local build in case one doesn't use "make install"
# export(PACKAGE comm_lib)

# # Create variable for the local build tree
# get_property(kindr_include_dirs DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)

# # Configure config file for local build tree
# configure_file(kindrConfig.cmake.in
#   "${PROJECT_BINARY_DIR}/kindrConfig.cmake" @ONLY)

# 2- installation build #

# # Change the include location for the case of an install location
## For include type external dependencies
# set(kindr_include_dirs ${CMAKE_INSTALL_PREFIX}/include ${EIGEN3_INCLUDE_DIR})

# install(TARGETS comm_lib
#         EXPORT MyLibTargets
#         LIBRARY DESTINATION lib
#         ARCHIVE DESTINATION lib
#         RUNTIME DESTINATION bin
#         )