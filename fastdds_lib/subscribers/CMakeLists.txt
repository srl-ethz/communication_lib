
add_library(subscribers_lib INTERFACE)

target_include_directories(subscribers_lib INTERFACE
default_subscriber
)

target_link_libraries(subscribers_lib INTERFACE
fastcdr 
fastrtps
)
