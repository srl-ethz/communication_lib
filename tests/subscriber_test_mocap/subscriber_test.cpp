#include "MocapPubSubTypes.h"
#include "default_subscriber.h"
#include "motorcommand_sub_callback.h"
#include "sensor_msgs/msgs/Mocap.h"

int main() {

  // Create subscriber with msg type
  DDSSubscriber mocap_sub(MocapPubSubType(), "mocap_pose");

  mocap_sub.init();

  for (;;) {

    // wait for the subscriber
    std::unique_lock<std::mutex> lk(mocap_sub.listener.m);
    mocap_sub.listener.cv.wait(lk, [] { return new_data; });

    new_data = false;

    // std::cout << "Motor command:" << st.motorspeed().at(0) << '\n';
  }
}
