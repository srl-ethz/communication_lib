
add_library(subscriber INTERFACE)

target_include_directories(subscriber INTERFACE include)

target_link_libraries(subscriber INTERFACE
fastcdr 
fastrtps
)


# add_library(subscribers_lib)

# target_sources(subscribers_lib PUBLIC
# default_subscriber/default_subscriber.cpp
# default_subscriber/sublistener.cpp
# )

# target_include_directories(subscribers_lib PUBLIC 
# default_subscriber
# )

# target_link_libraries(subscribers_lib PRIVATE
# fastcdr 
# fastrtps
# )
