
# ###############################################################################
# # Library of controllers
# ###############################################################################


add_library(utilities INTERFACE)

target_link_libraries(utilities INTERFACE
logger
)

add_subdirectory(logger)