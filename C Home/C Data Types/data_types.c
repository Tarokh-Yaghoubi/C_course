#include <stdio.h>  

int main() {
    // Create variables
    int myNum = 5;             // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    double myDoubleNum = 5.99; // Floating point number
    char myLetter = 'D';       // Character

    // Print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%lf\n", myDoubleNum);
    printf("%c\n", myLetter);
}

// The data type specifies the size and type of information the variable will store.

// In this tutorial, we will focus on the most basic ones:

// int: integer, a whole number without decimals, size of 2 or 4 bytes, e.g. 5, 10
// float: floating point number, a number that has both an integer and fractional part, size of 4 bytes, e.g. 3.14, 0.001
// double: double-precision floating point number, a number that has both an integer and fractional part, size of 8 bytes, e.g. 3.14, 0.001
// char: character, a single character, size of 1 byte, e.g. 'a', 'B'

// The %d, %f, %lf, and %c are format specifiers used to format the output of variables in C.
