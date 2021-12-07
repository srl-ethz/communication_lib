
# ###############################################################################
# # Library of fastdds elements
# ###############################################################################

# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)

add_library(fastdds_lib INTERFACE)

target_link_libraries(fastdds_lib INTERFACE
fastddsgen_generated_lib
publisher
subscriber
domain_participant
utilities
)


add_subdirectory(fastddsgen_generated_files)
add_subdirectory(publisher)
add_subdirectory(subscriber)
add_subdirectory(domain_participant)
add_subdirectory(utilities)