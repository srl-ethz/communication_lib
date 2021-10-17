#include "default_subscriber.h"
#include "motorcommand_sub_callback.h"

int main() {

  // Create subscriber with msg type
  DDSSubscriber px4_vehicle_status_sub(vehicle_statusPubSubType(),
                                       "fmu/vehicle_status/out");

  px4_vehicle_status_sub.init();

  for (;;) {

    // wait for the subscriber
    std::unique_lock<std::mutex> lk(px4_vehicle_status_sub.listener.m);
    px4_vehicle_status_sub.listener.cv.wait(lk, [] { return new_data; });

    new_data = false;
  }
}
