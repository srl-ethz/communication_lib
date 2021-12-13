Installing on Windows
=============================

Fastdds requires visual studio to be installed on windows. After installing visual studio,
download the latest stable release of fastdds from this link.

Execute the installer and follow the on-screen instructions
 
To install fastdds, run ::

  cd <extraction_directory>
  sudo ./install.sh

Then, download and install communication_lib::

  git clone -- recursive https://github.com/sarath-menon/communication_lib.git
  cd communication_lib
  mkdir build
  cd build
  cmake ..
  make

If you want to install the library systemwide, run::

  sudo make install