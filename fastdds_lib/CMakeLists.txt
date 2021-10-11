
# ###############################################################################
# # Library of controllers
# ###############################################################################


add_library(fastdds_new_lib INTERFACE)

target_link_libraries(fastdds_new_lib INTERFACE
fastddsgen_generated_lib
publishers_lib
subscribers_lib
)


add_subdirectory(fastddsgen_generated_files)
add_subdirectory(publishers)
add_subdirectory(subscribers)
