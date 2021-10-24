
add_executable(pub_cv_video publisher_test.cpp)


target_link_libraries(pub_cv_video PRIVATE
comm_lib
fastcdr 
fastrtps
)


