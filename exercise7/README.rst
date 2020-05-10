.. raw:: html

    <style> .help {color:#2B770E;} </style>

.. role:: help

.. class:: text-justify

 `BoundedQueue <https://github.com/ozielcarneiro/boundedqueue>`_ C++ class implements a generic FIFO queue data structure with limited capacity. The class specification declares a constructor and set of operations to common usage class. Implements in C++ language a program concurrent of:

 - **4 written threads**: Each writer inserts eight text messages in the queue usign `the shift cipher <https://en.wikipedia.org/wiki/Caesar_cipher>`_

 - **5 reading threads**: Each reader takes six messages from the queue. Decrypting text in queue and displays the process identifier and the text obtained by the output.

 The queue should be a shared structure that has a maximum capacity of 10 text messages but BoundedQueue operations does not handle concurrent access of multiple processes. **To develop a FIFO BoundedQueue concurent version that ensures correct concurrent access.**

 - :help:`Use the names as ConcurrentBoundedQueue.h and ConcurrentBoundedQueue.cpp.`
 - :help:`Use semaphores for access synchronization. Document adn tests your code.`
 - :help:`Object-oriented programming is recommended, you code must implements concepts like class, interface, inheritance, hiding, polymorphism and so forth concepts.`
 - `Wikipedia info. <https://en.wikipedia.org/wiki/Producer%E2%80%93consumer_problem>`_
