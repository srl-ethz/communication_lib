

add_library(communication_common_lib INTERFACE)

target_include_directories(communication_common_lib INTERFACE
msgs
)

add_subdirectory(msgs)
