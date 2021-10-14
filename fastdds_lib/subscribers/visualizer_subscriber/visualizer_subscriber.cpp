
#include "visualizer_subscriber.h"

DDSSubscriber::~DDSSubscriber() {
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

bool DDSSubscriber::init() {
  // CREATE THE PARTICIPANT
  DomainParticipantQos pqos;
  pqos.name("Participant_sub");
  participant_ =
      DomainParticipantFactory::get_instance()->create_participant(0, pqos);
  if (participant_ == nullptr) {
    return false;
  }

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
  reader_ = subscriber_->create_datareader(topic_, rqos, &listener);
  if (reader_ == nullptr) {
    return false;
  }

  return true;
}

void DDSSubscriber::SubListener::on_subscription_matched(
    DataReader *, const SubscriptionMatchedStatus &info) {
  if (info.current_count_change == 1) {
    matched_ = info.total_count;
    std::cout << "Subscriber matched." << std::endl;
  } else if (info.current_count_change == -1) {
    matched_ = info.total_count;
    std::cout << "Subscriber unmatched." << std::endl;
  } else {
    std::cout << info.current_count_change
              << " is not a valid value for SubscriptionMatchedStatus current "
                 "count change"
              << std::endl;
  }
}

void DDSSubscriber::run() {
  std::cout << "Waiting for Data, press Enter to stop the DataReader. "
            << std::endl;
  std::cin.ignore();
  std::cout << "Shutting down the Subscriber." << std::endl;
}
