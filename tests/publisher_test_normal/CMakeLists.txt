
add_executable(pub_test_normal publisher_test.cpp)


target_link_libraries(pub_test_normal PRIVATE
comm_lib
fastcdr 
fastrtps
)


