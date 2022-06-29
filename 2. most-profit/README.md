# objective
We are going to do one exercise depend on the kadane's algorithm.
```
* Kadane's Algorithm
    Initialize:
    max_so_far = INT_MIN
    max_ending_here = 0

    Loop for each element of the array
    (a) max_ending_here = max_ending_here + a[i]
    (b) if(max_so_far < max_ending_here)
                max_so_far = max_ending_here
    (c) if(max_ending_here < 0)
                max_ending_here = 0
    return max_so_far
```
Problem:
    Farzad is working in daniyal's company.
    We have some integer values which are benefit or loss of the company in continuous days.
    EX: 1, 2, -5, 4, -3, 2
    The most benefit is in the fourth day. which is 4 million tomans.
    Every other sub-array addition conclude less than 4.

NOTE: If all of the values was negative, the total benefit will be 0.
    Write a program which help Farzad to calculate total benefits between days that the benefit is maximum.

- INPUTs:
    Get the number of days (n) in line one. Get the benefit and loss of the days as array afterwards.
    NOTE: 1 <= n <= 100
- OUTPUT:
    Show the maximum benefit.

> Sample1:
    Inputs:
        12
        7 -1 -2 1 5 -11 [9 1 4 -1 3] -10
    Output:
        16
    Explaination: The most benefit is in between 7 to 11 which the total benefit in the specified days is 16.

> Sample2:
    Inputs:
        5
        -5 -2 -9 -1 -3
    Output:
        0

## Compile
To compile the code using gcc compiler:

```bash
$ gcc -o result.out most-profit-in-days-final.cpp
```

## Execution
```bash
$ ./result.out
```