#include "msg_type.h"
#include "sublistener.h"

class DDSSubscriber {
public:
  // msg_type = class type of msg
  template <class msg_type>
  DDSSubscriber(msg_type, std::string topic_name,
                eprosima::fastdds::dds::DomainParticipant *participant)
      : subscriber_(nullptr), topic_(nullptr), reader_(nullptr),
        type_(new msg_type) {
    // Set topic name
    topic_name_ = topic_name;

    // Set pointer to domain participant
    participant_ = participant;
  }

  // Custom Variables
  std::string topic_name_{};

  virtual ~DDSSubscriber();

  bool init();

  void run();

public:
  SubListener listener;

private:
  eprosima::fastdds::dds::DomainParticipant *participant_;
  eprosima::fastdds::dds::Subscriber *subscriber_;
  eprosima::fastdds::dds::Topic *topic_;
  eprosima::fastdds::dds::DataReader *reader_;
  eprosima::fastdds::dds::TypeSupport type_;
};
