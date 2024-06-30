#include <stdio.h>

int main() {
   int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));

    return 0;
}

// To compile the program, run the following command:
// gcc memory_size.c -o memory_size
// To run the program, run the following command:
// ./memory_size
// Output:
// 4
// 4
// 8
// 1
// In this program, we declare variables of different data types (int, float, double, and char) and print their sizes using the sizeof operator.
// The sizeof operator returns the size of a variable in bytes.