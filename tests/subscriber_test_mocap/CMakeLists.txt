
add_executable(mocap_sub subscriber_test.cpp)


target_link_libraries(mocap_sub PRIVATE
comm_lib
fastcdr 
fastrtps
)


