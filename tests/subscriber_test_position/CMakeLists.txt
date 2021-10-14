
add_executable(position_sub subscriber_test.cpp)


target_link_libraries(position_sub PRIVATE
comm_lib
fastcdr 
fastrtps
)


