.. raw:: html

    <style> .help {color:#2B770E;} </style>

.. role:: help

.. class:: text-justify

 **To write a C++ program to simulate the CPU scheduling algorithm First Come First Serve.**

.. container:: row

    .. container:: col-md-6 text-justify

        *Sample input*

        ::

            3 # Number of processes
            24 # Burst Time
            3 # Burst Time
            3 # Burst Time

    .. container:: col-md-6 text-justify

        *Output*

        ::

            P0 -> BT_24 WT_0 TT_24
            P1 -> BT_3 WT_24 TT_27
            P2 -> BT_3 WT_27 TT_30
            Avg WT_17.000000
            Avg TT_27.000000

|

.. class:: text-justify

 **To write a C++ program to simulate the CPU scheduling algorithm Shortest job first (Not preemptive).**

.. container:: row

    .. container:: col-md-6 text-justify

        *Sample input*

        ::

            4 # Number of processes
            6 # Burst Time
            8 # Burst Time
            7 # Burst Time
            3 # Burst Time

    .. container:: col-md-6 text-justify

        *Output*

        ::

            P3 -> BT_3 WT_0 TT_3
            P0 -> BT_6 WT_3 TT_9
            P2 -> BT_7 WT_9 TT_16
            P1 -> BT_8 WT_16 TT_24
            Avg WT_7.000000
            Avg TT_13.000000

|

.. class:: text-justify

 **To write a C++ program to simulate the CPU scheduling algorithm Round-Robin.**

.. container:: row

    .. container:: col-md-6 text-justify

        *Sample input*

        ::

            3 # Number of processes
            24 # Burst Time
            3 # Burst Time
            3 # Burst Time
            3 # Time slice

    .. container:: col-md-6 text-justify

        *Output*

        ::

            P0 -> BT_24 WT_6 TT_30
            P1 -> BT_3 WT_4 TT_7
            P2 -> BT_3 WT_7 TT_10
            Avg WT_15.666667
            Avg TT_5.666667

|

.. class:: text-justify

    - :help:`Do not change the input and output formats because Inginious platfomr will not accept it.`
    - :help:`Use the C++ iostream library for standard Input and Output.`
    - :help:`In sample input, the character # is a comment and it should be omit. (#) should not be considered part of the input`
    - :help:`Object-oriented programming is recommended, you code must implements concepts like class, interface, inheritance, hiding, polymorphism and so forth concepts.`






