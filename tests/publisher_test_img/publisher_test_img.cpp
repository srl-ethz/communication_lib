#include "ImageHDPubSubTypes.h"
#include "default_publisher.h"
#include "sensor_msgs/msgs/ImageHd.h"
#include <chrono>

int main() {
  // Message
  msgs::ImageHD img;

  // Create publisher with msg type
  DDSPublisher img_pub(ImageHDPubSubType(), "sim_img");

  // Initialize publisher with topic name
  if (img_pub.init()) {
    for (int i = 0; i < 10; i++) {
      img_pub.publish(img);
      std::this_thread::sleep_for(std::chrono::milliseconds(250));
    }
  }
}
