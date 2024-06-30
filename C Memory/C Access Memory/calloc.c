#include <stdio.h>
#include <stdlib.h>

int main() {
   // Allocate memory
    int *ptr;
    ptr = calloc(4, sizeof(*ptr));

    // Write to the memory
    *ptr = 2;
    ptr[1] = 4;
    ptr[2] = 6;

    // Read from the memory
    printf("%d\n", *ptr);
    printf("%d %d %d", ptr[1], ptr[2], ptr[3]);
}

// To compile the program, run the following command:
// gcc calloc.c -o calloc
// To run the program, run the following command:
// ./calloc
// Output:
// 2
// 4 6 0
// In this program, we allocate memory for an integer array of size 4 using the calloc function.
// We then write values to the memory locations using pointer arithmetic and read the values back.
