Installing on Linux and Raspbian 
=================================

First, download the latest version of fastdds for linux from this `link <https://www.eprosima.com/index.php/component/ars/repository/eprosima-fast-dds>`_. Note that the linux 
version works for macos as well. Extract the contents to your desired directory. To 
install fastdds, run ::

  cd <extraction_directory>
  sudo ./install.sh

Then, download and install communication_lib ::

  git clone -- recursive https://github.com/sarath-menon/communication_lib.git
  cd communication_lib
  mkdir build
  cd build
  cmake ..
  make

If you want to install the library systemwide (not recommended for first-time users), run ::

  sudo make install

  