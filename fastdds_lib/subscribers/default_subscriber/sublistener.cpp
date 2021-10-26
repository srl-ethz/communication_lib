#include "sublistener.h"

using namespace eprosima::fastdds::dds;

// wait for the arrival of new data
template <typename msg_type> void SubListener<msg_type>::wait_for_data() {
  std::unique_lock<std::mutex> lk(m);
  cv.wait(lk, [this] { return new_data; });

  // Set flag when data received
  new_data = false;
}

// wait for the arrival of new data
template <typename msg_type>
void SubListener<msg_type>::wait_for_data_for_ms(const int t) {
  std::unique_lock<std::mutex> lk(m);
  cv.wait_for(lk, std::chrono::milliseconds(t), [this] { return new_data; });
  // Set flag when data received
  new_data = false;
}

template <typename msg_type>
void SubListener<msg_type>::on_subscription_matched(
    eprosima::fastdds::dds::DataReader *,
    const SubscriptionMatchedStatus &info) {
  if (info.current_count_change == 1) {
    matched_ = info.total_count;
    std::cout << "Subscriber matched." << std::endl;
  } else if (info.current_count_change == -1) {
    matched_ = info.total_count;
    std::cout << "Subscriber unmatched." << std::endl;
  } else {
    std::cout << info.current_count_change
              << " is not a valid value for SubscriptionMatchedStatus current "
                 "count change"
              << std::endl;
  }
}

template <typename msg_type>
void SubListener<msg_type>::on_data_available(
    eprosima::fastdds::dds::DataReader *reader) {
  eprosima::fastdds::dds::SampleInfo info;

  if (reader->take_next_sample(st, &info) == ReturnCode_t::RETCODE_OK) {
    if (info.valid_data) {

      { // Protection against race condition using mutex
        std::unique_lock<std::mutex> lock(m);

        // // Print your structure data here.
        // std::cout << "Sample received" << std::endl;

        // Set flag when data received
        new_data = true;
      }

      cv.notify_one();
    }
  }
}
