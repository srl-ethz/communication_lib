Writing a simple publisher and subscriber 
==========

The three important entities in DDS are : Domain Participant, Publisher and Subscriber. 

Each individual application has one domain participant. It is reposible for connecting 
to the netwrok, finfing other nodes, etc. Publisher transmit data of a given message type 
and topic name. Subscribers initialized with the same message type and topic name 
can receive the data. All publishers and subscribers in an application must register to
the domain participant  

Writing a simple publisher
---------------------------

Let us create a publisher that sends messages of type position.

.. code-block:: c

    #include "PositionPubSubTypes.h"
    #include "default_participant.h"
    #include "default_publisher.h"
    #include "geometry_msgs/msgs/Position.h"
    #include <chrono>

    int main() {

      // Create participant. Arguments: Domain id, Name
      DefaultParticipant dp(0, "sample_participant");

      // Create publisher with msg type and topic name
      DDSPublisher position_pub(idl_msg::PositionPubSubType(), "position", dp.participant());

      // create message of position type
      cpp_msg::Position pos_msg;

      for (int i = 0; i < 10; i++) {

        pos_msg.x = i + 1;
        pos_msg.y = i - 1;
        pos_msg.z = i;

        position_pub.publish(pos_msg);
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
      }
    }

Code breakdown
---------------------------

.. code-block:: c

    #include "default_participant.h"
    #include "default_publisher.h"
    #include "PositionPubSubTypes.h"
    #include "geometry_msgs/msgs/Position.h"
    #include <chrono>

The first two lines allow the usage of the domain participant and publisher. The third 
line includes the message type for pubisher initialization. The fourth line includes the 
corresponding message type for actual data publishing

.. code-block:: c

    // Create domain participant. Arguments: Domain id, Name
    DefaultParticipant dp(0, "sample_participant");

The DefaultParticipant class creates a DDS domain participant with the domain id and 
name specified. Each application contains one domain partipant, to which all publishers 
and subscribers must register. Individual applications can commmunicate only if their
domain id's are the same.

.. code-block:: c

    // Create publisher with msg type and topic name
    DDSPublisher position_pub(idl_msg::PositionPubSubType(), "position", dp.participant());

    // create message of position type
    cpp_msg::Position pos_msg;

The DDSPublisher class creates a DDS Pulbisher with the given message type and topic name.
In addition, the domain participant is also required. The next line creates the message to
be published.

.. code-block:: c

    for (int i = 0; i < 10; i++) {

      pos_msg.x = i + 1;
      pos_msg.y = i - 1;
      pos_msg.z = i;

      position_pub.publish(pos_msg);
      std::this_thread::sleep_for(std::chrono::milliseconds(250));
    }

10 samples are published with a delay of 250ms between each publication.