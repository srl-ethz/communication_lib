#pragma once

#include <chrono>
#include <fastdds/dds/domain/DomainParticipant.hpp>
#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/subscriber/DataReader.hpp>
#include <fastdds/dds/subscriber/DataReaderListener.hpp>
#include <fastdds/dds/subscriber/SampleInfo.hpp>
#include <fastdds/dds/subscriber/Subscriber.hpp>
#include <fastdds/dds/subscriber/qos/DataReaderQos.hpp>
#include <mutex>
#include <shared_mutex>

template <typename msg_type>
class SubListener : public eprosima::fastdds::dds::DataReaderListener {

public:
  SubListener(msg_type *msg) { st = msg; }

  ~SubListener() override = default;

private:
  void on_data_available(eprosima::fastdds::dds::DataReader *reader) override;

  void on_subscription_matched(
      eprosima::fastdds::dds::DataReader *reader,
      const eprosima::fastdds::dds::SubscriptionMatchedStatus &info) override;

public:
  // Number of latched publishers
  int matched_ = 0;

  //  Protection against race condition using mutex
  std::mutex m;

  // Condition variable to indicate msg received
  std::condition_variable cv;

  // Flag to idicate reception of new data
  bool new_data{false};

  // Pointer to msg from base class
  msg_type *st;

public:
  // Blocks till new data has been received
  void wait_for_data();

  // Blocks for specific milliseconds till new data has been received
  void wait_for_data_for_ms(const int t);

public:
  /// Getter function
  const float matched() const { return matched_; }
};

#include "sublistener.cpp"