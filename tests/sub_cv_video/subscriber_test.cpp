#include "Image720pPubSubTypes.h"
#include "default_participant.h"
#include "default_subscriber.h"
#include "video_sub_callback.h"

int main() {

  // Create participant. Arguments-> Domain id, QOS name
  DefaultParticipant dp(0, "selva");

  // Create subscriber with msg type
  DDSSubscriber img_sub(idl_msg::Image720pPubSubType(), "img_topic",
                        dp.participant());

  img_sub.init();

  for (;;) {

    // Blocks until new data is available
    img_sub.listener.wait_for_data();
  }
}
