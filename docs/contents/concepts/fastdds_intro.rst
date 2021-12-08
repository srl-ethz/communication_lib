################################
DDS (Data Distribuion Services)
################################

The DDS (Data Distribuion Standard) is an open source standard for distributed and real
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

Why not just use ROS?
=====================

Robotics projects typically use the ROS as the software framework. ROS is a set of excellent
tools for visuaization, simulation, SLAM etc and middleware for communication between these 
tools. However, the ROS1 middleware does not satisfy time temporal deadlines and fault tolerances required for real
time systems. This is is especially relevant for safety critical systems like flying roots
and autonomous vehicles. Also, it is not a suitable choice for embedded onboard computer
due to its resource intensive nature. ROS2 addresses these issues by replacing the transport
system with DDS, an industry standard for real time communication between computers and
embedded devices. ROS2 offers  an API similar to ROS1 as it is already popular in the
Robotics community. Unfortunately, this lease that messages must undergo conversion 2
time: ROS2 to DDS while sending and DDS to ROS2 while receiving. [1][2] show that this 
conversion adds significant communication latency. Clearly, ROS2 is much suitable than 
native DDS implementations  for critical communication channels.

Another issue is hardware and software compatibility. ROS2 supports Windows,  Mac OS and
linux unlike ROS1. An extension called Micro-ROS provides access to microcontrollers.
Nonetheless, installation on certain operating systems incurs overhead upto 20 times 
larger than the size of ROS2 itself. In contrast, native DDS implementations require
minimal supporting software. Also, it is desirable to quickly incorporate new features
offered by the latest standards of C++.  In particular, more efficient methods are
expected for asynchronous and concurrent programming. Such features can drastically 
improve processing speed and minimise communication latency.

In addition, there is an increasing need to communicate with software outside the ROS ecosystem, especially for simulation. The Rotors flight simulator based on gazebo is widely used for flight simulation, since it is accurate, easy to use and tightly integrated with ROS. But is not a one stop solution for simulation. For instance,  the lack of photorealistic simulation is a major shortcoming for research in vision based robotics. In addition, the performance drops drastically when tens of flying vehicles are simulated at the same time, since the underlying  bullet physics engine is computationally intensive.  This makes gazebo is not suitable for  Reinforcement Learning, which require several robots to be simulated in parallel for efficient training.  [Flightmare] discusses this issue in more detail. Their solution is to decouple the physics engine and photorealistic simulation.  The dynamics is simulated in a simple environment in Gazebo, and the state information is relayed to a high performance rendering engine such as Unity 3D  or Unreal engine. The images captured by a virtual camera at the same pose is then relayed to the perception system. A first principles model replaces Gazebo for reinforcement learning applications - Accuracy is sacrificed for speed. This allows tens of quadcopters to be simulated in parallel at accelerated timescales. Typically, the rendering engine must run on a  separate GPU based machine. Intermachine communication incurs much more latency that intramachine communication. Lockstep simulation can be used to prevent data loss - At each timestep, each node waits the data to arrive before starting. Nevertheless, communication latency slows down the process significantly. 

.. figure:: images/ros2_dataflow.pdf
   :scale: 100 %
   :align: center

   This is the caption of the figure (a simple paragraph).