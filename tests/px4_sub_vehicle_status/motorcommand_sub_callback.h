#pragma once
#include "vehicle_statusPubSubTypes.h"

vehicle_status st;
bool new_data{false};

inline void DDSSubscriber::SubListener::on_data_available(DataReader *reader) {
  SampleInfo info;

  if (reader->take_next_sample(&st, &info) == ReturnCode_t::RETCODE_OK) {
    if (info.valid_data) {
      // Protection against race condition using mutex
      std::unique_lock<std::mutex> lock(m);

      // Print your structure data here.
      ++samples;

      new_data = true;
      std::cout << "=============================" << std::endl;
      std::cout << "Arming State: " << st.arming_state_() << std::endl;
      std::cout << "System ID: " << st.system_id_() << std::endl;
      // std::cout << "Orientation: " << st.q().at(0) << '\t' << st.q().at(1)
      //           << '\t' << st.q().at(2) << '\t' << st.q().at(3) << std::endl;
      // std::cout << ", " << st.gyro_rad().at(1)<< std::endl;
      // std::cout << ", " << st.gyro_rad().at(2) << std::endl;

      lock.unlock();
      cv.notify_one();
    }
  }
}