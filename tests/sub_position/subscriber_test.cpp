#include "PositionPubSubTypes.h"
#include "default_participant.h"
#include "default_subscriber.h"
#include "geometry_msgs/msgs/Position.h"
// #include "position_sub_callback.h"

int main() {

  // Create participant. Arguments-> Domain id, QOS name
  DefaultParticipant dp(0, "selva");

  // Message
  // idl_msg::Position pos_msg{};
  cpp_msg::Position pos_msg{};

  // Create subscriber with msg type
  DDSSubscriber mocap_sub(idl_msg::PositionPubSubType(), &pos_msg, "position",
                          dp.participant());

  mocap_sub.init();

  for (;;) {

    // Blocks until new data is available
    mocap_sub.listener->wait_for_data();

    std::cout << pos_msg.x;
  }
}
