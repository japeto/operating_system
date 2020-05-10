.. raw:: html

    <style> .help {color:#2B770E;} </style>

.. role:: help

.. class:: text-justify

 In the memory management system the replacement of the pages is a main concept. When the Kernel creates the process with system calls, pages is required to be in the main memory. These pages placed in the memory will be required by the process.

 There are many page replacement algorithms such as:

 - First-in-First-out (FIFO)
 - Not Recently Used (NRU)
 - Not Frequently Used (NFU)
 - Least Recently Used (LRU)
 - Second Chance
 - Optimal
 - . . .

 The page replacement concept can be used in many areas of computer design. Two of most interesting uses are cache and load balance.

.. class:: text-justify

    **Implement the FIFO, LRU and Optimal page replacement algorithms.**

    **F** irst- **I** n- **F** irst- **O** ut is the most simple algorithm. The OS keeps track of all pages in the memory. When a page needs to be replaced the oldest is selected for removal. The example below shows page reference input {2, 3, 4, 2, 1, 3, 7, 5} with 3 page frames. **Find pages replaced, number of page faults and hits.**

.. container:: row

    .. container:: col-md-6 text-justify

        *Sample input*

        ::

            1 # Algorithm 1=FIFO, 2=LRU and 3=Optimal
            3 # Page frames
            8 # Number of pages
            2
            3
            4
            2
            1
            3
            7
            5

    .. container:: col-md-6 text-justify

        *Output*

        ::

            step 1: 2 -1 -1
            step 2: 2 3 -1
            step 3: 2 3 4
            step 4: 2 3 4
            step 5: 1 3 4
            step 6: 1 3 4
            step 7: 1 7 4
            step 8: 1 7 5
            6 Page faults.
            2 Hits.

|

.. class:: text-justify

    - :help:`In the fourth step, the page is already in the main memory. In the fifth step, page 2 is selected for replace by page 1.`
    - :help:`Page faults: If an entry is not found, then it is a miss`
    - :help:`Page hit: If the page number is already present, then it is a Hit`

    - :help:`Another FIFO page replacement sample with 9 Page Faults and 4 Hits is found in` `Image No. 1 <https://i.imgur.com/cvEOvAg.jpg>`_.


.. class:: text-justify

    **L** east **R** ecently **U** sed  is a greedy algorithm based on the probability theory or in a logic idea. The OS replace the frame that was least recently used. LRU replace the page which has not been referenced for a long time in the past.


.. container:: row

    .. container:: col-md-6 text-justify

        *Sample input*

        ::

            2
            3
            10
            4
            7
            6
            1
            7
            6
            1
            2
            7
            2

    .. container:: col-md-6 text-justify

        *Output*

        ::

            step 1: 4 -1 -1
            step 2: 4 7 -1
            step 3: 4 7 6
            step 4: 1 7 6
            step 5: 1 7 6
            step 6: 1 7 6
            step 7: 1 7 6
            step 8: 1 2 6
            step 9: 1 2 7
            step 10: 1 2 7
            6 Page faults.
            4 Hits.

|


.. class:: text-justify

    - :help:`Another LRU page replacement sample with 9 Page Faults and 4 Hits is found in` `Image No. 2 <https://i.imgur.com/IB2cI2A.jpg>`_.


.. class:: text-justify

    **Optimal** when a page fault occurs, a page needs to be swapped. The OS swaps out the page, whose next use will occur farthest in the future.

.. container:: row

    .. container:: col-md-6 text-justify

        *Sample input*

        ::

            3
            4
            13
            2
            3
            4
            2
            1
            3
            7
            5
            4
            3
            2
            3
            1

    .. container:: col-md-6 text-justify

        *Output*

        ::

            step 1: 2 -1 -1 -1
            step 2: 2 3 -1 -1
            step 3: 2 3 4 -1
            step 4: 2 3 4 -1
            step 5: 2 3 4 1
            step 6: 2 3 4 1
            step 7: 2 3 4 7
            step 8: 2 3 4 5
            step 9: 2 3 4 5
            step 10: 2 3 4 5
            step 11: 2 3 4 5
            step 12: 2 3 4 5
            step 13: 1 3 4 5
            7 Page faults.
            6 Hits.

|


.. class:: text-justify

    - :help:`Another Optimal page replacement sample with 7 Page Faults and 6 Hits is found in` `Image No. 3 <https://i.imgur.com/1PABVUC.jpg>`_.


.. class:: text-justify

    - :help:`Do not change the input and output formats because Inginious platform will not accept it.`
    - :help:`Use the C++ iostream library for standard Input and Output.`
    - :help:`Object-oriented programming is recommended, you code must implements concepts like class, interface, inheritance, hiding, polymorphism and so forth concepts.`



