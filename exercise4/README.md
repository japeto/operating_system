<style> .help {color:#2B770E;} </style>
*Sample input*

    # Method 1=FirstFit, 2=BestFit
    # Method 3=WorstFit
    2 # Method
    5 # Number of memory partitions in order
    100
    500
    200
    300
    600
    4 # Number of processes in order of arrival
    212
    417
    112
    426

*Output*

    P0 -> 212 is put in 300, 4 partition.
    P1 -> 417 is put in 500, 2 partition.
    P2 -> 112 is put in 200, 3 partition.
    P3 -> 426 is put in 600, 5 partition.

|
