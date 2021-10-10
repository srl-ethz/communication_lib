
cmake_minimum_required(VERSION 2.8.12)

project("generated_code")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)


message(STATUS "Configuring Header...")
add_library(Header_lib Header.cxx)
target_link_libraries(Header_lib fastcdr fastrtps)

add_executable(Header HeaderPubSubTypes.cxx HeaderPublisher.cxx HeaderSubscriber.cxx HeaderPubSubMain.cxx)
target_link_libraries(Header fastcdr fastrtps
        Header_lib )




message(STATUS "Configuring MotorSpeed...")
add_library(MotorSpeed_lib MotorSpeed.cxx)
target_link_libraries(MotorSpeed_lib fastcdr fastrtps)

add_executable(MotorSpeed MotorSpeedPubSubTypes.cxx MotorSpeedPublisher.cxx MotorSpeedSubscriber.cxx MotorSpeedPubSubMain.cxx)
target_link_libraries(MotorSpeed fastcdr fastrtps
        MotorSpeed_lib )




message(STATUS "Configuring Position...")
add_library(Position_lib Position.cxx)
target_link_libraries(Position_lib fastcdr fastrtps)

add_executable(Position PositionPubSubTypes.cxx PositionPublisher.cxx PositionSubscriber.cxx PositionPubSubMain.cxx)
target_link_libraries(Position fastcdr fastrtps
        Position_lib )




message(STATUS "Configuring AttitudeCommand...")
add_library(AttitudeCommand_lib AttitudeCommand.cxx)
target_link_libraries(AttitudeCommand_lib fastcdr fastrtps)

add_executable(AttitudeCommand AttitudeCommandPubSubTypes.cxx AttitudeCommandPublisher.cxx AttitudeCommandSubscriber.cxx AttitudeCommandPubSubMain.cxx)
target_link_libraries(AttitudeCommand fastcdr fastrtps
        AttitudeCommand_lib Header_lib)




message(STATUS "Configuring AttitudeRateCommand...")
add_library(AttitudeRateCommand_lib AttitudeRateCommand.cxx)
target_link_libraries(AttitudeRateCommand_lib fastcdr fastrtps)

add_executable(AttitudeRateCommand AttitudeRateCommandPubSubTypes.cxx AttitudeRateCommandPublisher.cxx AttitudeRateCommandSubscriber.cxx AttitudeRateCommandPubSubMain.cxx)
target_link_libraries(AttitudeRateCommand fastcdr fastrtps
        AttitudeRateCommand_lib Header_lib)




message(STATUS "Configuring MotorCommand...")
add_library(MotorCommand_lib MotorCommand.cxx)
target_link_libraries(MotorCommand_lib fastcdr fastrtps)

add_executable(MotorCommand MotorCommandPubSubTypes.cxx MotorCommandPublisher.cxx MotorCommandSubscriber.cxx MotorCommandPubSubMain.cxx)
target_link_libraries(MotorCommand fastcdr fastrtps
        MotorCommand_lib Header_lib MotorSpeed_lib)




message(STATUS "Configuring PositionCommand...")
add_library(PositionCommand_lib PositionCommand.cxx)
target_link_libraries(PositionCommand_lib fastcdr fastrtps)

add_executable(PositionCommand PositionCommandPubSubTypes.cxx PositionCommandPublisher.cxx PositionCommandSubscriber.cxx PositionCommandPubSubMain.cxx)
target_link_libraries(PositionCommand fastcdr fastrtps
        PositionCommand_lib Header_lib Position_lib)



