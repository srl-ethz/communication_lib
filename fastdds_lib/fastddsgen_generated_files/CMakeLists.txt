
# Add all files with .cxx and .h extension
file(GLOB FASTDDSGEN_GENERATED_FILES
msg_definitions/*.cxx 
)

file(GLOB PX4_RTPS_GENERATED_FILES
px4_msg_definitions/*.cxx 
)

add_library(fastddsgen_generated_lib STATIC
${FASTDDSGEN_GENERATED_FILES}
${PX4_RTPS_GENERATED_FILES}
)

target_include_directories(fastddsgen_generated_lib PUBLIC
msg_definitions
px4_msg_definitions
)


target_link_libraries(fastddsgen_generated_lib PRIVATE
fastcdr 
fastrtps
)
