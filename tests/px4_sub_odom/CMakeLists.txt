
add_executable(px4_sub_odom subscriber_test.cpp)


target_link_libraries(px4_sub_odom PRIVATE
comm_lib
fastcdr 
fastrtps
)


