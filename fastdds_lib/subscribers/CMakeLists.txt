
add_library(subscribers_lib STATIC)

target_sources(subscribers_lib PRIVATE
default_subscriber/default_subscriber.cpp
visualizer_subscriber/visualizer_subscriber.cpp
)

target_include_directories(subscribers_lib PUBLIC 
default_subscriber
visualizer_subscriber
)

target_link_libraries(subscribers_lib PRIVATE
fastcdr 
fastrtps
)
