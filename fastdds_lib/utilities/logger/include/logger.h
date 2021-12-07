#pragma once
#include <iostream>
#include <mutex>

class Logger {

public:
  Logger(){};
  ~Logger(){};

private:
  std::mutex mutex_;

public:
  template <typename T> void safe_print(T val) {
    std::lock_guard lock(mutex_); // lock is acquired
    std::cout << val << '\n';
  } // lock is released

  // addition
  template <typename T> void operator<<(const T val) {
    std::cout << val << '\n';
  }

} sflog;
