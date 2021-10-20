
add_library(publishers_lib STATIC)

target_sources(publishers_lib PRIVATE
default_publisher/default_publisher.cpp
video_publisher/video_publisher.cpp
)

target_include_directories(publishers_lib PUBLIC 
default_publisher
video_publisher
)

target_link_libraries(publishers_lib PRIVATE
fastcdr 
fastrtps
)
