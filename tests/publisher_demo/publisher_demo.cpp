#include "PositionPubSubTypes.h"
#include "default_participant.h"
#include "default_publisher.h"
#include "geometry_msgs/msgs/Position.h"
#include <chrono>

int main() {

  // Create participant. Arguments: Domain id, Name
  DefaultParticipant dp(0, "sample_participant");

  // Create publisher with msg type and topic name
  DDSPublisher position_pub(idl_msg::PositionPubSubType(), "position",
                            dp.participant());

  // create message of position type
  cpp_msg::Position pos_msg;

  for (int i = 0; i < 10; i++) {

    pos_msg.x = i + 1;
    pos_msg.y = i - 1;
    pos_msg.z = i;

    position_pub.publish(pos_msg);
    std::this_thread::sleep_for(std::chrono::milliseconds(250));
  }
}
