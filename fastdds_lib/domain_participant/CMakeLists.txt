
add_library(domain_participant)

target_sources(domain_participant PUBLIC
src/domain_participant.cpp
)

target_include_directories(domain_participant PUBLIC include)

target_link_libraries(domain_participant PUBLIC
fastcdr 
fastrtps
)
