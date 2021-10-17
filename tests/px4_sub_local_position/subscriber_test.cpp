#include "default_subscriber.h"
#include "motorcommand_sub_callback.h"

int main() {

  // Create subscriber with msg type
  DDSSubscriber px4_odom_sub(vehicle_odometryPubSubType(),
                             "fmu/vehicle_odometry/out");

  px4_odom_sub.init();

  for (;;) {

    // wait for the subscriber
    std::unique_lock<std::mutex> lk(px4_odom_sub.listener.m);
    px4_odom_sub.listener.cv.wait(lk, [] { return new_data; });

    new_data = false;
  }
}
