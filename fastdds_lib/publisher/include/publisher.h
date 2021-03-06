#pragma once

#include <fastdds/dds/domain/DomainParticipant.hpp>
#include <fastdds/dds/publisher/DataWriter.hpp>
#include <fastdds/dds/publisher/DataWriterListener.hpp>
#include <fastdds/dds/publisher/Publisher.hpp>
#include <fastdds/dds/topic/TypeSupport.hpp>

class DDSPublisher {
public:
  // Constrcutor declared in header file since it is a temlate func
  template <class msg_type>
  DDSPublisher(msg_type, std::string topic_name,
               eprosima::fastdds::dds::DomainParticipant *participant)
      : publisher_(nullptr), topic_(nullptr), writer_(nullptr),
        type_(new msg_type) {

    // Set topic name
    topic_name_ = topic_name;

    // Set pointer to domain participant
    participant_ = participant;

    // intitalize with error checking
    if (this->init() == false) {
      std::cerr << "DDS Publisher could not be initialized";
      exit(EXIT_FAILURE);
    };
  }

  ~DDSPublisher();

  bool init();

  template <typename T> void publish(T msg) {
    while (listener.matched() == 0) {
      std::this_thread::sleep_for(
          std::chrono::milliseconds(250)); // Sleep 250 ms
    }

    // Publish Message
    writer_->write(&msg);
  }

private:
  // Topic Name
  std::string topic_name_{};

private:
  eprosima::fastdds::dds::DomainParticipant *participant_;
  eprosima::fastdds::dds::Publisher *publisher_;
  eprosima::fastdds::dds::Topic *topic_;
  eprosima::fastdds::dds::DataWriter *writer_;
  eprosima::fastdds::dds::TypeSupport type_;

  eprosima::fastdds::dds::ReliabilityQosPolicy best_effort_;
  eprosima::fastdds::dds::DataWriterQos writer_qos_;

public:
  class PubListener : public eprosima::fastdds::dds::DataWriterListener {

  public:
    PubListener() = default;
    ~PubListener() override = default;

  private:
    void on_publication_matched(
        eprosima::fastdds::dds::DataWriter *writer,
        const eprosima::fastdds::dds::PublicationMatchedStatus &info) override;

    int matched_ = 0;

  public:
    /// Getter function
    const float matched() const { return matched_; }

  } listener;
};
