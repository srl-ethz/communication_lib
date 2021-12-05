Writing a simple publisher and subscriber 
==========

The three important entities in DDS are : Domain Participant, Publisher and Subscriber. 

Each individual application has one domain participant. It is reposible for connecting 
to the netwrok, finfing other nodes, etc. Publisher transmit data of a given message type 
and topic name. Subscribers initialized with the same message type and topic name 
can receive the data. All publishers and subscribers in an application must register to
the domain participant  

Writing a simple publisher
=======================

Let us create a publisher that sends messages of type position::

.. doxygenclass:: DDSPublisher
   :members:
