#include "QuadMotorCommandPubSubTypes.h"
#include "default_subscriber.h"
#include "motorcommand_sub_callback.h"
#include "quadcopter_msgs/msgs/QuadMotorCommand.h"

int main() {

  // Create subscriber with msg type
  DDSSubscriber motor_command_sub(QuadMotorCommandPubSubType(),
                                  "motor_commands");

  motor_command_sub.init();

  for (;;) {

    // wait for the subscriber
    std::unique_lock<std::mutex> lk(motor_command_sub.listener.m);
    motor_command_sub.listener.cv.wait(lk, [] { return new_data; });

    new_data = false;

    // std::cout << "Motor command:" << st.motorspeed().at(0) << '\n';
  }
}
