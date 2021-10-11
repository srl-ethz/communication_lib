
add_executable(pub_test publisher_test.cpp)


target_link_libraries(pub_test PRIVATE
comm_lib
fastcdr 
fastrtps
)


