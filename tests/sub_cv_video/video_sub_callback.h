#pragma once

idl_msg::Image720p st;

inline void DDSSubscriber::SubListener::on_data_available(
    eprosima::fastdds::dds::DataReader *reader) {
  eprosima::fastdds::dds::SampleInfo info;

  if (reader->take_next_sample(&st, &info) == ReturnCode_t::RETCODE_OK) {
    if (info.valid_data) {

      { // Protection against race condition using mutex
        std::unique_lock<std::mutex> lock(m);

        // Print your structure data here.
        std::cout << "Sample received" << std::endl;

        // Set flag when data received
        new_data = true;
      }

      cv.notify_one();
    }
  }
}
