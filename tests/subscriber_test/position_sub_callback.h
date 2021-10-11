#pragma once

Position st;

inline void DDSSubscriber::SubListener::on_data_available(DataReader *reader) {
  SampleInfo info;

  if (reader->take_next_sample(&st, &info) == ReturnCode_t::RETCODE_OK) {
    if (info.valid_data) {
      // Print your structure data here.
      ++samples;
      std::cout << "Sample received, count=" << samples << std::endl;
    }
  }
}