
add_executable(pub_position publisher_test.cpp)


target_link_libraries(pub_position PRIVATE
comm_lib
fastcdr 
fastrtps
)


