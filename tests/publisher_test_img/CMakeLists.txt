
add_executable(pub_test_img publisher_test_img.cpp)


target_link_libraries(pub_test_img PRIVATE
comm_lib
fastcdr 
fastrtps
)


