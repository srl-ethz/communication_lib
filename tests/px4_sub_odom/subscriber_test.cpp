#include "default_participant.h"
#include "default_subscriber.h"
#include "motorcommand_sub_callback.h"

int main() {

  // Create participant. Arguments-> Domain id, QOS name
  DefaultParticipant dp(0, "selva");

  // Create subscriber with msg type
  DDSSubscriber px4_imu_sub(sensor_combinedPubSubType(),
                            "fmu/sensor_combined/out", dp.participant());

  px4_imu_sub.init();

  for (;;) {

    // wait for the subscriber
    std::unique_lock<std::mutex> lk(px4_imu_sub.listener.m);
    px4_imu_sub.listener.cv.wait(lk, [] { return new_data; });

    new_data = false;
  }
}
