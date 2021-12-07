
add_library(publishers_lib)

target_sources(publishers_lib PUBLIC
default_publisher/default_publisher.cpp
)

target_include_directories(publishers_lib PUBLIC 
default_publisher
)

target_link_libraries(publishers_lib PRIVATE
fastcdr 
fastrtps
)
