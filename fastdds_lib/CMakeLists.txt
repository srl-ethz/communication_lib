
# ###############################################################################
# # Library of controllers
# ###############################################################################


add_library(fastdds_lib INTERFACE)

target_link_libraries(fastdds_lib INTERFACE
fastddsgen_generated_lib
publishers_lib
subscribers_lib
domain_participants_lib
)


add_subdirectory(fastddsgen_generated_files)
add_subdirectory(publishers)
add_subdirectory(subscribers)
add_subdirectory(domain_participants)