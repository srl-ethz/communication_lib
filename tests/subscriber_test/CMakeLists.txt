
add_executable(sub_test subscriber_test.cpp)


target_link_libraries(sub_test PRIVATE
comm_lib
)


