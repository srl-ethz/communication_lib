
add_library(subscribers_lib INTERFACE)

# target_sources(subscribers_lib PRIVATE
# # default_subscriber/default_subscriber.cpp
# # default_subscriber/sublistener.cpp
# )

target_include_directories(subscribers_lib INTERFACE
default_subscriber
)

target_link_libraries(subscribers_lib INTERFACE
fastcdr 
fastrtps
)
