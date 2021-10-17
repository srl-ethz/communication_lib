#include "default_publisher.h"

#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/publisher/DataWriter.hpp>
#include <fastdds/dds/publisher/Publisher.hpp>
#include <fastdds/dds/publisher/qos/DataWriterQos.hpp>
#include <fastdds/dds/publisher/qos/PublisherQos.hpp>

#include <chrono>
#include <thread>

using namespace eprosima::fastdds::dds;

DDSPublisher::~DDSPublisher() {
  if (writer_ != nullptr) {
    publisher_->delete_datawriter(writer_);
  }
  if (publisher_ != nullptr) {
    participant_->delete_publisher(publisher_);
  }
  if (topic_ != nullptr) {
    participant_->delete_topic(topic_);
  }
  DomainParticipantFactory::get_instance()->delete_participant(participant_);
}

bool DDSPublisher::init() {
  /* Initialize data_ here */

  // CREATE THE PARTICIPANT
  DomainParticipantQos pqos;
  pqos.name("Participant_pub");
  participant_ =
      DomainParticipantFactory::get_instance()->create_participant(0, pqos);
  if (participant_ == nullptr) {
    return false;
  }

  // REGISTER THE TYPE
  type_.register_type(participant_);

  // CREATE THE PUBLISHER
  publisher_ = participant_->create_publisher(PUBLISHER_QOS_DEFAULT, nullptr);
  if (publisher_ == nullptr) {
    return false;
  }

  // CREATE THE TOPIC
  topic_ = participant_->create_topic(topic_name_, type_.get_type_name(),
                                      TOPIC_QOS_DEFAULT);
  if (topic_ == nullptr) {
    return false;
  }

  // CREATE THE WRITER
  writer_ =
      publisher_->create_datawriter(topic_, DATAWRITER_QOS_DEFAULT, &listener);
  if (writer_ == nullptr) {
    return false;
  }

  std::cout << "Position DataWriter created." << std::endl;
  return true;

  // Set Best effort QOS for datawriter
  best_effort_.kind = BEST_EFFORT_RELIABILITY_QOS;
  writer_qos_.reliability(best_effort_);
  writer_->set_qos(writer_qos_);

  // Create dmainparticipant qos
  DomainParticipantQos participant_qos;

  // Increase the sending buffer size
  participant_qos.transport().send_socket_buffer_size = 1048576;

  // Increase the receiving buffer size
  participant_qos.transport().listen_socket_buffer_size = 4194304;

  // Set properties
  participant_->set_qos(participant_qos);
}

void DDSPublisher::PubListener::on_publication_matched(
    eprosima::fastdds::dds::DataWriter *,
    const eprosima::fastdds::dds::PublicationMatchedStatus &info) {
  if (info.current_count_change == 1) {
    matched_ = info.total_count;
    std::cout << "DataWriter matched." << std::endl;
  } else if (info.current_count_change == -1) {
    matched_ = info.total_count;
    std::cout << "DataWriter unmatched." << std::endl;
  } else {
    std::cout << info.current_count_change
              << " is not a valid value for PublicationMatchedStatus current "
                 "count change"
              << std::endl;
  }
}
