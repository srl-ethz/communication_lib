
add_library(comm_lib INTERFACE)

include_directories(common/msgs)

target_link_libraries(comm_lib INTERFACE
communication_common_lib
fastdds_lib
)

# target_include_directories(comm_lib INTERFACE
# common/msgs
# )

add_subdirectory(common)
add_subdirectory(fastdds)
