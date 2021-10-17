
add_executable(px4_sub_local_position subscriber_test.cpp)


target_link_libraries(px4_sub_local_position PRIVATE
comm_lib
fastcdr 
fastrtps
)


