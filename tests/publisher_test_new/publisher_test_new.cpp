#include "QuadMotorCommandPubSubTypes.h"
#include "default_publisher.h"
#include "quadcopter_msgs/msgs/QuadMotorCommand.h"
#include <chrono>

int main() {
  // Message
  msgs::QuadMotorCommand motor_cmd;

  // Create publisher with msg type
  DDSPublisher motor_cmd_pub(QuadMotorCommandPubSubType(), "motor_commands");

  // Initialize publisher with topic name
  if (motor_cmd_pub.init()) {
    for (int i = 0; i < 10; i++) {
      motor_cmd_pub.publish(motor_cmd);
      std::this_thread::sleep_for(std::chrono::milliseconds(250));
    }
  }
}
