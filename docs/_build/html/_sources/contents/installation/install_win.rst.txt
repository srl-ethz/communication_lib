Installing on Windows
=============================

Fastdds requires visual studio to be installed on windows. Download the latest version 
of fastdds for linux from this `link <https://www.eprosima.com/index.php/component/ars/repository/eprosima-fast-dds>`_.
Extract the contents to your desired directory. Execute the installer and follow the on-screen instructions
 
Then, download and install communication_lib::

  git clone -- recursive https://github.com/sarath-menon/communication_lib.git
  cd communication_lib
  mkdir build
  cd build
  cmake ..
  make

If you want to install the library systemwide (not recommended for first-time users), run::

  sudo make install