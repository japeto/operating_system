<style> .help {color:#2B770E;} </style>
*Sample input*

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

*Output*

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

*Sample input*

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

*Output*

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

*Sample input*

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

*Output*

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
