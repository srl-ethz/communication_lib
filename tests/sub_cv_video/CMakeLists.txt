
add_executable(sub_cv_video subscriber_test.cpp)


target_link_libraries(sub_cv_video PRIVATE
comm_lib
fastcdr 
fastrtps
)


