# objective
Problem:
Write a program that each time tell us which book(s) to select for studying.
We enter book info include: title, pages, and genre and then decide based on the genre and period pages we entered and
display selected book title(s) for studying.
Notice: Genre could be anything, even nonsense values.
Notice: Genre must be exactly the string we entered before (e.g. science and Science are different.).

- Inputs
    1. Enter n in the first line which is the number of books we want to study.
    2. In the following n lines enter book info in each line with this format: title, pages, genre.
    Title and genre contian 100 and 50 maximum characters. pages is 3 digits maximum.
    3. In the n+2 line, enter the requied genre.
    4. In the n+3 line, enter the period of pages as integer (numbers are in the period).

- Output
    1. Output is the title of the book(s) which applied in the required conditions.
    In each line print one title. Print order is based on the input.
    Print nothing if It didn't meet any of the conditions.

> Sample1:
    Inputs:
        6
        history of the time, 255, science
        aaaaaaaaaa, 571, science
        the sun and her flowers, 256, poerty
        A Beautiful Mind, 400, biography
        bbbBB, 1000, CC
        THE LIVES OF A CELL, 160, science
        science
        200 400
    Output:
        history of the time

## Compile
To compile the code using gcc compiler:

```bash
$ gcc -o result.out selectedBooks.cpp
```

## Execution
```bash
$ ./result.out
```