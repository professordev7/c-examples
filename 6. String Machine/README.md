# objective
Problem:
Implement a small string machine with the set of simple operations. <br />
First program get a text string with maximum 1000 lenght from the input. <br />
Next until get the EXIT instruction, every time do one operation on the text string. <br />

- Inputs
    List of the operations:
    1. SHIFT-R N:
        Rotate shift all characters to the right for N units based. <br />
    2. SHIFT-L N
        Rotate shift all characters to the left N units based. <br />
    3. EXTEND N
        Append N new character(s) at the end of the existence string. Default appended character(s) is *. <br />
    4. SHRINK N
        Shrink N character(s) from the end of the string. <br />
        If string lenght is less than N, result would be empty string. <br />
    5. REVERSE N
        Reverse the string.
    6. PUT I C
        Replace I-th character with C characters. <br />
        Note that place numbers start from one and I always gonna be less than or equal to string lenght. <br />
    7. PRINT N
        Print the current string and go to the next line. <br />
    8. EXIT N
        End of the program. <br />

- Output
    The program would has the output, if and only if for PRINT operation. <br />
    And for other operations, just do the operation on the text string. <br />
    In the implementaion of this program, you should consider one function for every instruction (except PRINT) and run the operations by calling the function. <br />
    Function decleration example:
        void Extend(char *string, int _extendedLenght)

> Sample1: <br />
- Inputs: <br />
    initial string <br />
    PRINT <br />
    EXTEND 2 <br />
    SHIFT-R 3 <br />
    PRINT <br />
    PUT 3 0 <br />
    REVERSE <br />
    SHRINK 2 <br />
    PRINT <br />
    EXIT <br />

- Output: <br />
    initial string <br />
    g**initial string <br />
    nirts laitinio <br />

> Sample2: <br />
- Inputs: <br />
    Test <br />
    PRINT <br />
    SHRINK 20 <br />
    PRINT <br />
    EXTEND 2 <br />
    PRINT <br />
    EXIT <br />

- Output: <br />
    Test <br />
         <br />
    ** <br />

## Compile
To compile the code using gcc compiler:

```bash
$ gcc -o result.out string-machine.cpp
```

## Execution
```bash
$ ./result.out
```