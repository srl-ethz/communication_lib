
add_library(publisher)

target_sources(publisher PUBLIC
src/publisher.cpp
)

target_include_directories(publisher PUBLIC include)

target_link_libraries(publisher PUBLIC
fastcdr 
fastrtps
)
