
add_executable(pub_test_new publisher_test_new.cpp)


target_link_libraries(pub_test_new PRIVATE
comm_lib
fastcdr 
fastrtps
)


