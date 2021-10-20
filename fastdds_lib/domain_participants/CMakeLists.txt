
add_library(domain_participants_lib STATIC)

target_sources(domain_participants_lib  PRIVATE
default_participant/default_participant.cpp
large_data_participant/large_data_participant.cpp
)

target_include_directories(domain_participants_lib  PUBLIC 
default_participant
large_data_participant
)

target_link_libraries(domain_participants_lib  PRIVATE
fastcdr 
fastrtps
)
