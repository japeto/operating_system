.. raw:: html

    <style> .help {color:#2B770E;} </style>

.. role:: help

.. class:: text-justify

 There are two common deadLock prevention algorithms:

 - Safety
 - Banker

 Although no doubt are the most popular, they are not the only in dealock prevention problem. When OS allocate a new process, it must declare the maximum number of instances of each resource type it needed. When the user process request a set of resources, the system must determine whether the allocation of each resources will leave the system in safe state.

.. class:: text-justify

 **To implement Banker‘s Algorithm for deadlock prevention using the C ++ language. Given the configuration with number of process (np), resource types (rt) identifier, create a program that shows the safe sequence of process execution.** Code testing is important because Inginius platform executes your imlementation with several inputs of the diferent configuration.(various sizes blocks and process for each algorithm). To implement exception handling in C++, you use try, throw, and catch expressions.

 In the following example, an input and output are shown. These should be followed carefully and conscientiously as guides.

.. container:: row

    .. container:: col-md-6 text-justify

        *Sample input*

        ::

            4 # number of jobs
            P0 1 # process name and time
            P1 4 # process name and time
            P2 2 # process name and time
            P3 3 # process name and time
            20 # Available resources

    .. container:: col-md-6 text-justify

        *Output*

        ::

            P0 1, P2 2, P3 3, P1 4

|

.. class:: text-justify

    - No safe sequence Ouput if does not found a safe state.
    - :help:`Do not change the input and output formats because Ingenious will not accept it.`
    - :help:`Use the C++ iostream library for standard Input and Output.`
    - :help:`In sample input, the character # is a comment and it should be omit. (#) should not be considered part of the input`
    - :help:`Object-oriented programming is recommended, you code must implements concepts like class, interface, inheritance, hiding, polymorphism and so forth concepts.`






