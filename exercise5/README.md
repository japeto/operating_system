<style> .help {color:#2B770E;} </style>
*Sample input*

    1 # Method 1= MFT, 2=MVT
    1000 # Total memory
    300 # Block size
    5 # Number of processes
    275
    400
    290
    293
    100

*Output*

    P0 -> 275 is put in 300, 25 fragmentation.
    P1 -> 400 Not allocated.
    P2 -> 290 is put in 300, 10 fragmentation.
    P3 -> 293 is put in 300, 7 fragmentation.
    P4 -> 100 Not allocated.
    Memory Allocated: 900
    Internal fragmentation: 42
    External fragmentation: 100

|

*Sample input*

    2 # Method 1= MFT, 2=MVT
    1000 # Total memory
    -1
    3 # Number of processes
    400
    275
    550

*Output*

    P0 -> 400 is put in Mem.
    P1 -> 275 is put in Mem.
    P2 -> 550 Not allocated.
    Memory Allocated: 675
    Internal fragmentation: -1
    External fragmentation: 325

|
