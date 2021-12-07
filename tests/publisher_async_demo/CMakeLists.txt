

# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)

add_executable(pub_pos_async publisher_async_demo.cpp)

target_link_libraries(pub_pos_async PRIVATE
comm_lib
fastcdr 
fastrtps
)


