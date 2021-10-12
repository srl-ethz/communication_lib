
add_executable(sub_test_new subscriber_test.cpp)


target_link_libraries(sub_test_new PRIVATE
comm_lib
fastcdr 
fastrtps
)


