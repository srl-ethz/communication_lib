#include "PositionPubSubTypes.h"
#include "default_publisher.h"
#include "domain_participant.h"
#include "geometry_msgs/msgs/Position.h"
#include <chrono>
#include <future>

std::atomic_bool close_flag{};

void async_publisher(const int delay_ms, DDSPublisher *pub) {

  // create message of position
  cpp_msg::Position pos_msg;

  while (!close_flag) {

    pos_msg.x = 1;
    pos_msg.y = 2;
    pos_msg.z = 3;

    pub->publish(pos_msg);
    std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
  }
}

int main() {

  // Create participant. Arguments: Domain id, Name
  DefaultParticipant dp(0, "sample_participant");

  // Create publisher with msg type and topic name
  DDSPublisher position_pub(idl_msg::PositionPubSubType(), "position",
                            dp.participant());

  // start asynchronous publisher
  auto async_pub =
      std::async(std::launch::async, async_publisher, 100, &position_pub);

  std::cin.ignore();

  // set close_flag and wait for asynchronous publisher to close
  close_flag = true;
}
