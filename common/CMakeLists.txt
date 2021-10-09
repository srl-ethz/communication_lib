

add_library(communication_common_lib INTERFACE)

target_include_directories(communication_common_lib INTERFACE
msgs
)

target_link_libraries(communication_common_lib INTERFACE
std_msgs_lib
geometry_msgs_lib
)

add_subdirectory(msgs)
