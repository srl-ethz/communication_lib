#pragma once
#include <cstring>

#include <fastdds/dds/domain/DomainParticipant.hpp>
#include <fastdds/dds/domain/DomainParticipantFactory.hpp>

class DefaultParticipant {
public:
  DefaultParticipant(int domain_id, std::string qos_name);
  ~DefaultParticipant();

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
