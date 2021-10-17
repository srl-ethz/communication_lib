#include "PositionPubSubTypes.h"
#include "default_publisher.h"
#include "geometry_msgs/msgs/Pose.h"
#include "sensor_msgs/msgs/Mocap.h"
#include <chrono>
#include <future>
#include <mutex>

std::mutex m;

void exit_prog() {
  std::cout << "Waiting for keystroke " << std::endl;
  std::cin.ignore();

  // eprosima::fastdds::dds::DomainParticipantFactory::get_instance()
  //     ->delete_participant(participant_);
  // Protection against race condition using mutex

  exit(EXIT_SUCCESS);
}

int main() {
  // Message
  msgs::Pose position;

  auto a1 = std::async(std::launch::async, &exit_prog);

  // Create publisher with msg type
  DDSPublisher position_pub(PositionPubSubType(), "position");

  // Initialize publisher with topic name
  if (position_pub.init()) {
    for (int i = 0; i < 10; i++) {
      position_pub.publish(position);
      std::this_thread::sleep_for(std::chrono::milliseconds(250));
    }
  }
  exit(EXIT_SUCCESS);
}
