
# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)

add_executable(sub_demo subscriber_test.cpp)

target_link_libraries(sub_demo PRIVATE
comm_lib
)


