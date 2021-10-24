#include "Image720pPubSubTypes.h"
#include "default_participant.h"
#include "default_publisher.h"
#include "sensor_msgs/msgs/Image720p.h"
#include <chrono>
#include <cstdlib>
#include <future>

int main() {
  // Message
  idl_msg::Image720p img;

  // Create participant. Arguments-> Domain id, QOS name
  DefaultParticipant dp(0, "opencv_demo");

  // Create publisher with msg type
  DDSPublisher img_pub(idl_msg::Image720pPubSubType(), "img_topic",
                       dp.participant());

  // Initialize publisher with topic name
  if (img_pub.init()) {
    for (int i = 0; i < 10; i++) {
      img_pub.publish(img);
      std::this_thread::sleep_for(std::chrono::milliseconds(250));
    }
  }

  // eprosima::fastdds::dds::DomainParticipantFactory::get_instance()
  //     ->delete_participant(participant_);
}
