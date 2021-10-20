#include "large_data_participant.h"

LargeDataParticipant::LargeDataParticipant(int domain_id,
                                           std::string qos_name) {

  // Set qos name
  qos_name_ = qos_name;
  p_qos.name(qos_name_);

  // Increase the sending buffer size
  p_qos.transport().send_socket_buffer_size = 12582912;

  // Increase the receiving buffer size
  p_qos.transport().listen_socket_buffer_size = 12582912;

  // Create participant
  domain_id_ = domain_id;
  participant_ =
      eprosima::fastdds::dds::DomainParticipantFactory::get_instance()
          ->create_participant(domain_id, p_qos);

  // Safety check
  if (participant_ == nullptr) {
    std::cout << "Could not create domain participant";
    // return false;
  }

  // Set qos properties
  participant_->set_qos(p_qos);
}

LargeDataParticipant::~LargeDataParticipant() {
  eprosima::fastdds::dds::DomainParticipantFactory::get_instance()
      ->delete_participant(participant_);
};