#pragma once
#include "sublistener.h"

template <typename msg_init_type, typename msg_type> class DDSSubscriber {
public:
  // msg_type = class type of msg

  DDSSubscriber(msg_init_type, msg_type *msg, std::string topic_name,
                eprosima::fastdds::dds::DomainParticipant *participant)
      : subscriber_(nullptr), topic_(nullptr), reader_(nullptr),
        type_(new msg_init_type) {
    // Set topic name
    topic_name_ = topic_name;

    // Set pointer to domain participant
    participant_ = participant;

    // Create sublistener object
    listener = std::make_unique<SubListener<msg_type>>(msg);
  }

  virtual ~DDSSubscriber();

  bool init();

  void run();

  // Custom Variables
  std::string topic_name_{};

  // // Buffer to hold incoming data
  // msg_type msg{};

public:
  // Pointer to listerner object (contains callbacks)
  std::unique_ptr<SubListener<msg_type>> listener;

private:
  eprosima::fastdds::dds::DomainParticipant *participant_;
  eprosima::fastdds::dds::Subscriber *subscriber_;
  eprosima::fastdds::dds::Topic *topic_;
  eprosima::fastdds::dds::DataReader *reader_;
  eprosima::fastdds::dds::TypeSupport type_;
};

#include "default_subscriber.cpp"