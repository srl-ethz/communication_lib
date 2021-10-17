
add_executable(sub_test_px4 subscriber_test.cpp)


target_link_libraries(sub_test_px4 PRIVATE
comm_lib
fastcdr 
fastrtps
)


