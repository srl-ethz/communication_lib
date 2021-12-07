
# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)

add_executable(pub_pos publisher_demo.cpp)

target_link_libraries(pub_pos PRIVATE
comm_lib
fastcdr 
fastrtps
)


