```{=html}
<style> .help {color:#2B770E;} </style>
```
::: {.text-justify}
There are four common memory management techniques:

-   Single contiguous allocation
-   Partitioned allocation
-   Paged memory management
-   Segmented memory management

Segmentation with Paging is used in popular OS as Window and Linux where
a process is divided into segments and individual segments have pages.
In order to achieve this, **allocation methods** choose a one memory
partition available to accommodate a process request.
:::

::: {.text-justify}
**To implement the First Fit, Best Fit and Worst Fit algorithms using
the C ++ language. Given the configuration with allocation requests and
free memory block sizes, create a program that shows the allocated
blocks.** Code testing is important because Inginius platform executes
your imlementation with several inputs of the diferent
configuration.(various sizes blocks and process for each algorithm). To
implement exception handling in C++, you use try, throw, and catch
expressions.

The input-format have five parts corresponding to:

-   Method to execute
-   Number of memory partitions
-   Free memory sizes in order
-   Number of processes and size requests for each process in order of
    arrival.

The output generated for information specified in the input follow the
format:

-   PROCESS NUMBER -\> SIZE PROCESS is put in BLOCK SIZE, NUMBER OF
    partition.

In the event that it cannot be assigned, the output format is:

-   PROCESS NUMBER -\> SIZE PROCESS Not allocated.

In the following example, an input and output are shown. These should be
followed carefully and conscientiously as guides.
:::

::: {.container .row}
::: {.container .col-md-6 .text-justify}
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
:::

::: {.container .col-md-6 .text-justify}
*Output*

    P0 -> 212 is put in 300, 4 partition.
    P1 -> 417 is put in 500, 2 partition.
    P2 -> 112 is put in 200, 3 partition.
    P3 -> 426 is put in 600, 5 partition.
:::
:::

| 

::: {.text-justify}
-   [Do not change the input and output formats because Ingenious will
    not accept it.]{.help}
-   [Use the C++ iostream library for standard Input and Output.]{.help}
-   [In sample input, the character \# is a comment and it should be
    omit. (\#) should not be considered part of the input]{.help}
-   [Object-oriented programming is recommended, you code must
    implements concepts like class, interface, inheritance, hiding,
    polymorphism and so forth concepts.]{.help}
:::
