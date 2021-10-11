#include "PositionPubSubTypes.h"
#include "default_publisher.h"
#include "quadcopter_msgs/msgs/PositionCommand.h"
#include <chrono>

int main() {
  // <essage
  msgs::PositionCommand position_cmd;

  // Create publisher with msg type
  DDSPublisher position_pub(PositionPubSubType(), "position");

  // Initialize publisher with topic name
  if (position_pub.init()) {
    for (int i = 0; i < 10; i++) {
      position_pub.publish(position_cmd);
      std::this_thread::sleep_for(std::chrono::milliseconds(250));
    }
  }
}
