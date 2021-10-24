#include "PositionPubSubTypes.h"
#include "default_participant.h"
#include "default_publisher.h"
#include "sensor_msgs/msgs/Mocap.h"
#include <chrono>
#include <cstdlib>
#include <future>

int main() {
  // Message
  idl_msg::Position position;

  // Create participant. Arguments-> Domain id, QOS name
  DefaultParticipant dp(0, "selva");

  // Create publisher with msg type
  DDSPublisher position_pub(idl_msg::PositionPubSubType(), "position",
                            dp.participant());

  // Initialize publisher with topic name
  if (position_pub.init()) {
    for (int i = 0; i < 10; i++) {
      position.x(i + 1);
      position_pub.publish(position);
      std::this_thread::sleep_for(std::chrono::milliseconds(250));
    }
  }

  // eprosima::fastdds::dds::DomainParticipantFactory::get_instance()
  //     ->delete_participant(participant_);
}
