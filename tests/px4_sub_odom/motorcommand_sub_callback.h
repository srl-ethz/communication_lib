#pragma once
#include "sensor_combinedPubSubTypes.h"

sensor_combined st;
bool new_data{false};

inline void DDSSubscriber::SubListener::on_data_available(
    eprosima::fastdds::dds::DataReader *reader) {
  eprosima::fastdds::dds::SampleInfo info;

  if (reader->take_next_sample(&st, &info) == ReturnCode_t::RETCODE_OK) {
    if (info.valid_data) {
      // Protection against race condition using mutex
      std::unique_lock<std::mutex> lock(m);

      // Print your structure data here.
      ++samples;

      new_data = true;
      std::cout << "=============================" << std::endl;
      std::cout << "gyro_rad: " << st.gyro_rad().at(0);
      std::cout << ", " << st.gyro_rad().at(1);
      std::cout << ", " << st.gyro_rad().at(2) << std::endl;

      lock.unlock();
      cv.notify_one();
    }
  }
}