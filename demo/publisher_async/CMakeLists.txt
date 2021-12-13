

# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)

add_executable(publisher_async publisher_async.cpp)

target_link_libraries(publisher_async PRIVATE
comm_lib
)


