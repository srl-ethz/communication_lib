
add_executable(img_sub subscriber_imghd.cpp)


target_link_libraries(img_sub PRIVATE
comm_lib
fastcdr 
fastrtps
)


