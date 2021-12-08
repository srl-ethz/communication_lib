##############

DDS (Data Distribuion Services)

The DDS (Data Distribuion Standard) is an open source standard for distributed and real time systems. Smart Grids, Smart Cities, Defense, SCADA, Financial Trading, Air Traffic Control and Management, High Performance Telemetry and Large Scale Supervisory System.  Global Data Space to be fully distributed in order to avoid single points of failure and bottlenecks.  Global Data Space to be fully distributed in order to avoid single points of failure and bottlenecks. The essential point here is that the presence of a GDS equipped with dynamic discovery means that when a system is deployed no configuration is needed. Everything is automatically discovered and data begins to flow.
The first step to understanding neural networks is to be clear about the terms Artificial Intelligence
,Machine learning and Deep learning. **AI** includes practically any techinique that *empowers a machine to
take intelligent decisions without being expicitly programmed*. **Machine learning** resides within AI and
refers specifically to a range of tools that promote *intelligence through learning* . **Deep learning**
happens to be a part of machine learning that exploits *specific tools called* **Neural Networks** to make
it work.

Why not just use ROS?
=====================

Academic institutions  typically use the ROS as middleware. However, the ROS1 transport
system  does not satisfy time temporal deadlines and fault tolerances required for real
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
