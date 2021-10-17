#include "PositionPubSubTypes.h"
#include "default_participant.h"
#include "geometry_msgs/msgs/Pose.h"
#include "new_publisher.h"
#include "sensor_msgs/msgs/Mocap.h"
#include <chrono>
#include <cstdlib>
#include <future>

int main() {
  // Message
  msgs::Pose position;

  // Create participant. Argument-> Domain id, QOS name
  DefaultParticipant dp(0, "selva");

  // Create publisher with msg type
  DDSPublisher position_pub(PositionPubSubType(), "position", dp.participant());

  // Create publisher with msg type
  DDSPublisher position_pub1(PositionPubSubType(), "position",
                             dp.participant());

  // Initialize publisher with topic name
  if (position_pub.init()) {
    for (int i = 0; i < 10; i++) {
      position_pub.publish(position);
      std::this_thread::sleep_for(std::chrono::milliseconds(250));
    }
  }

  // eprosima::fastdds::dds::DomainParticipantFactory::get_instance()
  //     ->delete_participant(participant_);
}
