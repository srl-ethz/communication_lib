################################
SRL Communication library
################################

SRL Communication library is a middleware solution for realtime communication based on the 
DDS Standard. The features include:

* **High Performance:**  Designed for low latency, high bandwidth communication. Doesn't sacrifice performance for ease of use unlike ROS2 (ROS2 uses DDS as middleware).

* **Cross platorm compatible:** Supports windows, mac os, linux and raspbian.

* **Plug and Play:** No need for any network configuration. Everything just works !.

* **Ease of use:** An easy-to-use API and message library similar to ROS1. Can be easilyintegrated into third party software such as game engines and GUI frameworks.

* **Low footprint:** Light package size and minimal set of dependencies.

.. figure:: images/architecture_eg.png
   :scale: 60 %
   :align: center

   Range of supported devices and transport mechanisms


Supported devices
=====================

.. figure:: images/data_types.png
   :scale: 50 %
   :align: center

   Range of supported devices and transport mechanisms

But what is DDS ?
=====================

DDS (Data Distribuion Services) is an open source standard for distributed and real
time systems. Smart Grids, Smart Cities, Defense, SCADA, Financial Trading, Air Traffic
Control and Management, High Performance Telemetry and Large Scale Supervisory System.

The core concept is the illusion of a Global Data Space (GDS) to which all connected devices have
access.  In reality, it is fully distributed system of high performance point to point 
connections. This avoids data bottlenecks and single points of failure. The tgraceful 
performance degradation in the face of adversities such as sensor/actuator failure, as 
opposed to abrupt failure. This ensures resilience and predictability under stress that 
is critical for  autonomous systems operating in the real world. 

DDS offers dynamic discovery, which means that all devices connected to the local network 
are automatically discovered. No network configuration is required. 

Why not just use ROS1 or ROS2?
===============================

Robotics projects typically use the ROS as the software framework. ROS is a set of excellent
tools for visuaization, simulation, SLAM etc and middleware for communication between these 
tools. However, the ROS1 middleware does not satisfy time temporal deadlines and fault tolerances required for real
time systems. This is is especially relevant for safety critical systems like flying roots
and autonomous vehicles. Also, it is not a suitable choice for embedded onboard computer
due to its resource intensive nature. ROS2 addresses these issues by replacing the transport
system with DDS, an industry standard for real time communication between computers and
embedded devices. ROS2 offers an API similar to ROS1 as it is already popular in the
Robotics community. Unfortunately, this lease that messages must undergo conversion 2
time: ROS2 to DDS while sending and DDS to ROS2 while receiving. This conversion and the 
subsequent internal notification adds considerable latency, sometimes doubling the original delay.
Clearly, native DDS implementations are more suitable for time critical communication channels.In addition,
there is an increasing need to communicate with software outside the ROS ecosystem, especially for simulation. 

.. figure:: images/ros2_dataflow.png
   :align: center

   Comparison of dataflow in ROS2 vs native dds implementation

Another issue is hardware and software compatibility. ROS2 supports Windows,  Mac OS and
linux unlike ROS1. An extension called Micro-ROS provides access to microcontrollers.
Nonetheless, installation on certain operating systems incurs overhead upto 20 times 
larger than the size of ROS2 itself. In contrast, native DDS implementations require
minimal supporting software. Also, it is desirable to quickly incorporate new features
offered by the latest standards of C++.  In particular, more efficient methods are
expected for asynchronous and concurrent programming. Such features can drastically 
improve processing speed and minimise communication latency.


