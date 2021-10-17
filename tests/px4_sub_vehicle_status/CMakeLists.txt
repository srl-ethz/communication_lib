
add_executable(px4_sub_vehicle_status subscriber_test.cpp)


target_link_libraries(px4_sub_vehicle_status PRIVATE
comm_lib
fastcdr 
fastrtps
)


