#pragma once
#include "sublistener.h"

template <typename msg_type, typename msg_type1> class DDSSubscriber {
public:
  // msg_type = class type of msg

  DDSSubscriber(msg_type, msg_type1, std::string topic_name,
                eprosima::fastdds::dds::DomainParticipant *participant)
      : subscriber_(nullptr), topic_(nullptr), reader_(nullptr),
        type_(new msg_type) {
    // Set topic name
    topic_name_ = topic_name;

    // Set pointer to domain participant
    participant_ = participant;

    listener = std::make_unique<SubListener<msg_type1>>(msg);
  }

  virtual ~DDSSubscriber();

  bool init();

  void run();

  // Custom Variables
  std::string topic_name_{};

  msg_type1 msg;

public:
  // SubListener<msg_type1> *listener;

  std::unique_ptr<SubListener<msg_type1>> listener;

private:
  eprosima::fastdds::dds::DomainParticipant *participant_;
  eprosima::fastdds::dds::Subscriber *subscriber_;
  eprosima::fastdds::dds::Topic *topic_;
  eprosima::fastdds::dds::DataReader *reader_;
  eprosima::fastdds::dds::TypeSupport type_;
};

#include "default_subscriber.cpp"