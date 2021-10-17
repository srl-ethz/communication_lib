#pragma once
#include "vehicle_odometryPubSubTypes.h"

vehicle_odometry st;
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
      std::cout << "Position: " << st.x_() << '\t' << st.y_() << '\t' << st.z_()
                << '\t' << std::endl;
      std::cout << "Orientation: " << st.q().at(0) << '\t' << st.q().at(1)
                << '\t' << st.q().at(2) << '\t' << st.q().at(3) << std::endl;
      // std::cout << ", " << st.gyro_rad().at(1)<< std::endl;
      // std::cout << ", " << st.gyro_rad().at(2) << std::endl;

      lock.unlock();
      cv.notify_one();
    }
  }
}