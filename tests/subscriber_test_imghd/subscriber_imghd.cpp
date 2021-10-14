
#include "default_subscriber.h"
#include "imghd_sub_callback.h"
#include "sensor_msgs/msgs/ImageHd.h"

int main() {

  // Create subscriber with msg type
  DDSSubscriber img_sub(ImageHDPubSubType(), "sim_img");

  img_sub.init();

  for (;;) {

    // wait for the subscriber
    std::unique_lock<std::mutex> lk(img_sub.listener.m);
    img_sub.listener.cv.wait(lk, [] { return new_data; });

    std::cout << "Image data:" << unsigned(st.frame().at(0)) << '\n';

    new_data = false;

    // std::cout << "Motor command:" << st.motorspeed().at(0) << '\n';
  }
}
