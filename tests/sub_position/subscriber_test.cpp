#include "PositionPubSubTypes.h"
#include "default_participant.h"
#include "default_subscriber.h"
#include "geometry_msgs/msgs/Position.h"
// #include "position_sub_callback.h"

int main() {

  // Create participant. Arguments-> Domain id, QOS name
  DefaultParticipant dp(0, "selva");

  // Create subscriber with msg type
  DDSSubscriber mocap_sub(idl_msg::PositionPubSubType(), idl_msg::Position(),
                          "position", dp.participant());

  mocap_sub.init();

  for (;;) {

    // Blocks until new data is available
    mocap_sub.listener->wait_for_data();

    std::cout << mocap_sub.listener->st.x();
  }
}
