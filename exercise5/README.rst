.. https://mrcet.com/pdf/Lab%20Manuals/CSE/OPERATING%20SYSTEMS%20LAB(R18).pdf

.. raw:: html

    <style> .help {color:#2B770E;} </style>

.. role:: help

.. class:: text-justify

 The main memory can be divided in two parts and process is fit into it. Each process which is block best suited  will be placed in memory.

 - With Mamory Fixed Partitioning (MFT), the memory is partitioned into fixed size partitions and each job is assigned to a partition and the memory assigned to a partition does not change.
 - With Mamory Variable Partitioning (MVT), each job gets just the amount of memory it needs. That is, the partitioning of memory is dynamic and changes as jobs enter and leave the system.

 MVT is a more "efficient'' in the management of resources. MFT suffers with the problem of internal fragmentation and MVT suffers with external fragmentation.

 **To implement and simulate the MFT algorithm.**

.. container:: row

    .. container:: col-md-6 text-justify

        *Sample input*

        ::

            1 # Method 1= MFT, 2=MVT
            1000 # Total memory
            300 # Block size
            5 # Number of processes
            275
            400
            290
            293
            100

    .. container:: col-md-6 text-justify

        *Output*

        ::

            P0 -> 275 is put in 300, 25 fragmentation.
            P1 -> 400 Not allocated.
            P2 -> 290 is put in 300, 10 fragmentation.
            P3 -> 293 is put in 300, 7 fragmentation.
            P4 -> 100 Not allocated.
            Memory Allocated: 900
            Internal fragmentation: 42
            External fragmentation: 100

|

.. class:: text-justify

 **To implement and simulate the MVT algorithm.**

.. container:: row

    .. container:: col-md-6 text-justify

        *Sample input*

        ::

            2 # Method 1= MFT, 2=MVT
            1000 # Total memory
            -1
            3 # Number of processes
            400
            275
            550

    .. container:: col-md-6 text-justify

        *Output*

        ::

            P0 -> 400 is put in Mem.
            P1 -> 275 is put in Mem.
            P2 -> 550 Not allocated.
            Memory Allocated: 675
            Internal fragmentation: -1
            External fragmentation: 325

|

.. class:: text-justify

    - :help:`Do not change the input and output formats because Inginious platfomr will not accept it.`
    - :help:`Use the C++ iostream library for standard Input and Output.`
    - :help:`In sample input, the character # is a comment and it should be omit. (#) should not be considered part of the input`
    - :help:`Object-oriented programming is recommended, you code must implements concepts like class, interface, inheritance, hiding, polymorphism and so forth concepts.`






