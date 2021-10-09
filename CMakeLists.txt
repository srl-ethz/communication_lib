
add_library(comm_lib INTERFACE)

target_link_libraries(comm_lib INTERFACE
fastdds_lib
)

target_include_directories(comm_lib INTERFACE
common/msgs
)

add_subdirectory(fastdds)
