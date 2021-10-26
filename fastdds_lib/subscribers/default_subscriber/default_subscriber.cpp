
#include "default_subscriber.h"
using namespace eprosima::fastdds::dds;

template <typename msg_init_type, typename msg_type>
DDSSubscriber<msg_init_type, msg_type>::~DDSSubscriber() {
  if (reader_ != nullptr) {
    subscriber_->delete_datareader(reader_);
  }
  if (topic_ != nullptr) {
    participant_->delete_topic(topic_);
  }
  if (subscriber_ != nullptr) {
    participant_->delete_subscriber(subscriber_);
  }

  DomainParticipantFactory::get_instance()->delete_participant(participant_);
}

template <typename msg_init_type, typename msg_type>
bool DDSSubscriber<msg_init_type, msg_type>::init() {
  // REGISTER THE TYPE
  type_.register_type(participant_);

  // CREATE THE SUBSCRIBER
  subscriber_ =
      participant_->create_subscriber(SUBSCRIBER_QOS_DEFAULT, nullptr);
  if (subscriber_ == nullptr) {
    return false;
  }

  // CREATE THE TOPIC
  topic_ = participant_->create_topic(topic_name_, type_.get_type_name(),
                                      TOPIC_QOS_DEFAULT);
  if (topic_ == nullptr) {
    return false;
  }

  // CREATE THE READER
  DataReaderQos rqos = DATAREADER_QOS_DEFAULT;
  rqos.reliability().kind = RELIABLE_RELIABILITY_QOS;
  reader_ = subscriber_->create_datareader(topic_, rqos, listener.get());
  if (reader_ == nullptr) {
    return false;
  }

  return true;
}

template <typename msg_init_type, typename msg_type>
void DDSSubscriber<msg_init_type, msg_type>::run() {
  std::cout << "Waiting for Data, press Enter to stop the DataReader. "
            << std::endl;
  std::cin.ignore();
  std::cout << "Shutting down the Subscriber." << std::endl;
}
