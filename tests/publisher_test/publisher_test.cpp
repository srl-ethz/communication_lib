#include "PositionPubSubTypes.h"
#include "default_publisher.h"
#include "geometry_msgs/msgs/Pose.h"
#include "sensor_msgs/msgs/Mocap.h"
#include <chrono>

int main() {
  // Message
  msgs::Pose position;

  // Create publisher with msg type
  DDSPublisher position_pub(PositionPubSubType(), "position");

  // Initialize publisher with topic name
  if (position_pub.init()) {
    for (int i = 0; i < 10; i++) {
      position_pub.publish(position);
      std::this_thread::sleep_for(std::chrono::milliseconds(250));
    }
  }
}
