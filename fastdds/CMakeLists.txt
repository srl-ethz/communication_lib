
# ###############################################################################
# # Library of controllers
# ###############################################################################


add_library(fastdds_lib INTERFACE)

target_link_libraries(fastdds_lib INTERFACE
motor_commands_lib
mocap_fastdds_lib
fastddsgen_generated_lib
publishers_lib
subscribers_lib
)


add_subdirectory(fastdds_actuator_controls)
add_subdirectory(fastdds_mocap)
add_subdirectory(fastddsgen_generated_files)
add_subdirectory(publishers)
add_subdirectory(subscribers)
