
# ###############################################################################
# # Library of controllers
# ###############################################################################


add_library(fastdds_lib INTERFACE)

target_link_libraries(fastdds_lib INTERFACE
motor_commands_lib
mocap_fastdds_lib
)


add_subdirectory(fastdds_actuator_controls)
add_subdirectory(fastdds_mocap)
