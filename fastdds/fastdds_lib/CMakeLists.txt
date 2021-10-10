
cmake_minimum_required(VERSION 2.8.12)

project("generated_code")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)


message(STATUS "Configuring EulerAngleZYX...")
add_library(EulerAngleZYX_lib EulerAngleZYX.cxx)
target_link_libraries(EulerAngleZYX_lib fastcdr fastrtps)

add_executable(EulerAngleZYX EulerAngleZYXPubSubTypes.cxx EulerAngleZYXPublisher.cxx EulerAngleZYXSubscriber.cxx EulerAngleZYXPubSubMain.cxx)
target_link_libraries(EulerAngleZYX fastcdr fastrtps
        EulerAngleZYX_lib )




message(STATUS "Configuring Position...")
add_library(Position_lib Position.cxx)
target_link_libraries(Position_lib fastcdr fastrtps)

add_executable(Position PositionPubSubTypes.cxx PositionPublisher.cxx PositionSubscriber.cxx PositionPubSubMain.cxx)
target_link_libraries(Position fastcdr fastrtps
        Position_lib )




message(STATUS "Configuring Quaternion...")
add_library(Quaternion_lib Quaternion.cxx)
target_link_libraries(Quaternion_lib fastcdr fastrtps)

add_executable(Quaternion QuaternionPubSubTypes.cxx QuaternionPublisher.cxx QuaternionSubscriber.cxx QuaternionPubSubMain.cxx)
target_link_libraries(Quaternion fastcdr fastrtps
        Quaternion_lib )




message(STATUS "Configuring Header...")
add_library(Header_lib Header.cxx)
target_link_libraries(Header_lib fastcdr fastrtps)

add_executable(Header HeaderPubSubTypes.cxx HeaderPublisher.cxx HeaderSubscriber.cxx HeaderPubSubMain.cxx)
target_link_libraries(Header fastcdr fastrtps
        Header_lib )




message(STATUS "Configuring Pose...")
add_library(Pose_lib Pose.cxx)
target_link_libraries(Pose_lib fastcdr fastrtps)

add_executable(Pose PosePubSubTypes.cxx PosePublisher.cxx PoseSubscriber.cxx PosePubSubMain.cxx)
target_link_libraries(Pose fastcdr fastrtps
        Pose_lib Header_lib Quaternion_lib Position_lib EulerAngleZYX_lib)



