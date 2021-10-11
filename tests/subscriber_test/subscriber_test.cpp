#include "PositionPubSubTypes.h"
#include "default_subscriber.h"
#include "position_sub_callback.h"
#include "quadcopter_msgs/msgs/PositionCommand.h"
#include <chrono>

int main() {

  // Create subscriber with msg type
  DDSSubscriber position_sub(PositionPubSubType(), "position");

  // Initialize subscriber with topic name
  if (position_sub.init()) {

    position_sub.run();
  }
}
