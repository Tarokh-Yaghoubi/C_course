#include <stdio.h>

int main() {
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));      // 4 bytes
    printf("%lu\n", sizeof(myFloat));    // 4 bytes
    printf("%lu\n", sizeof(myDouble));   // 8 bytes
    printf("%lu\n", sizeof(myChar));     // 1 byte
}

// To compile the program, run the following command:
// gcc memory_man.c -o memory_man
// To run the program, run the following command:
// ./memory_man
// Output:
// 4
// 4
// 8
// 1
// In this program, we declare four variables of different data types: int, float, double, and char.
// We then use the sizeof operator to print the size of each variable in bytes.
