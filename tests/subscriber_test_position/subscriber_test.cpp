#include "PositionPubSubTypes.h"
#include "default_subscriber.h"
#include "geometry_msgs/msgs/Position.h"
#include "position_sub_callback.h"

int main() {

  // Create subscriber with msg type
  DDSSubscriber mocap_sub(PositionPubSubType(), "position_pose");

  mocap_sub.init();

  for (;;) {

    // wait for the subscriber
    std::unique_lock<std::mutex> lk(mocap_sub.listener.m);
    mocap_sub.listener.cv.wait(lk, [] { return new_data; });

    new_data = false;

    // std::cout << "Motor command:" << st.motorspeed().at(0) << '\n';
  }
}
