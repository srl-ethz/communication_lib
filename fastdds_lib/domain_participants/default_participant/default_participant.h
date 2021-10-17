#pragma once
#include <cstring>

#include <fastdds/dds/domain/DomainParticipant.hpp>
#include <fastdds/dds/domain/DomainParticipantFactory.hpp>

class DefaultParticipant {
public:
  DefaultParticipant(int domain_id, std::string qos_name) {

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

private:
  // Domain id (participants with different domain id's can't communicate)
  int domain_id_{};

  // QOS name
  std::string qos_name_{};

  // Pointer to participant
  eprosima::fastdds::dds::DomainParticipant *participant_;

  // QOS for participant
  eprosima::fastdds::dds::DomainParticipantQos p_qos;

public:
  /// Getter function
  const std::string participant_name() const { return qos_name_; }

  /// Getter function
  eprosima::fastdds::dds::DomainParticipant *participant() const {
    return participant_;
  }
};
