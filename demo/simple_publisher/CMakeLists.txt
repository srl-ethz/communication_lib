
# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)

add_executable(simple_publisher simple_publisher.cpp)

target_link_libraries(simple_publisher PRIVATE
comm_lib
)


