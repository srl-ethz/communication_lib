
add_executable(pub_pos publisher_demo.cpp)


target_link_libraries(pub_pos PRIVATE
comm_lib
fastcdr 
fastrtps
)


