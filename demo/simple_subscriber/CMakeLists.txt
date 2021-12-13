
# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)

add_executable(simple_subscriber simple_subscriber.cpp)

target_link_libraries(simple_subscriber PRIVATE
comm_lib
)


