

add_library(communication_common_lib INTERFACE)


target_link_libraries(communication_common_lib INTERFACE
std_msgs_lib
geometry_msgs_lib
)

