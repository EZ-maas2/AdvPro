# matvec: Fun with matrices

Version 0.1.0.

This is a fancy calculator for matrices. We will be building it up over the following weeks.

## Building

Build the code from your terminal using:

```shell
g++ -o matvec matvec.cpp
```

## Running

Run the code by executing `./matvec` (no arguments expected).

The program will ask you to enter values for a vector and a square matrix. Enter the values of the vector, and terminate using any symbol.

## Example output

```shell
$ ./matvec 
Give elements to the vector v
1 2 3 -
Vector v is:
 [ 1 2 3 ]
Give the 9 elements of matrix A (row-first)
1 2 3
4 5 6
7 8 9
Matrix A is:
[
1 2 3 
4 5 6 
7 8 9 
]
Vector m = A * v is:
 [ 14 32 50 ]
```

## Features

At the moment, the code can do the following:

- Multiply an arbitrary 2D square matrix of integers with an arbitrary vector of integers, given by the user from the keyboard.
- Print the input and the result in a nice way.
