
# ###############################################################################
# # Library of controllers
# ###############################################################################


add_library(logger STATIC)

target_sources(logger PRIVATE
src/logger.cpp
)

target_include_directories(logger PUBLIC include)