#pragma once

#include <fastdds/dds/domain/DomainParticipant.hpp>
#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/subscriber/DataReader.hpp>
#include <fastdds/dds/subscriber/DataReaderListener.hpp>
#include <fastdds/dds/subscriber/SampleInfo.hpp>
#include <fastdds/dds/subscriber/Subscriber.hpp>
#include <fastdds/dds/subscriber/qos/DataReaderQos.hpp>
#include <mutex>
#include <shared_mutex>
#include <cstring>
#include "MocapPubSubTypes.h"

using namespace eprosima::fastdds::dds;

class DDSSubscriber {
public:
  // msg_type = class type of msg
  // template <class msg_type>
  DDSSubscriber()
      : participant_(nullptr), subscriber_(nullptr), topic_(nullptr),
        reader_(nullptr), type_(new MocapPubSubType()) {
    topic_name_ = "mocap_pose";
  }

  // Custom Variables
  std::string topic_name_{};

  virtual ~DDSSubscriber();

  bool init();

  void run();

private:
  eprosima::fastdds::dds::DomainParticipant *participant_;
  eprosima::fastdds::dds::Subscriber *subscriber_;
  eprosima::fastdds::dds::Topic *topic_;
  eprosima::fastdds::dds::DataReader *reader_;
  eprosima::fastdds::dds::TypeSupport type_;

public:
  class SubListener : public eprosima::fastdds::dds::DataReaderListener {

  public:
    SubListener() = default;

    ~SubListener() override = default;

  private:
    void on_data_available(eprosima::fastdds::dds::DataReader *reader) override;

    void on_subscription_matched(
        eprosima::fastdds::dds::DataReader *reader,
        const eprosima::fastdds::dds::SubscriptionMatchedStatus &info) override;

  private:
    int matched_ = 0;

  public:
    //  Protection against race condition using mutex
    std::mutex m;

    // Condition variable to indicate msg received
    std::condition_variable cv;

    // Number of data samples received
    uint32_t samples = 0;

  public:
    /// Getter function
    const float matched() const { return matched_; }
  } listener;
};
