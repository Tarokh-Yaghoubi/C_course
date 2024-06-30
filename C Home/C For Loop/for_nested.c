#include <stdio.h>

int main() {
   int i, j;

    // Outer loop
    for (i = 1; i <= 2; ++i) {
    printf("Outer: %d\n", i);  // Executes 2 times

    // Inner loop
    for (j = 1; j <= 3; ++j) {
        printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
    }
    }
}

// To compile the program, run the following command:
// gcc for_nested.c -o for_nested
// To run the program, run the following command:
// ./for_nested
// Output:
// Outer: 1
//  Inner: 1
//  Inner: 2
//  Inner: 3
// Outer: 2
//  Inner: 1
//  Inner: 2
//  Inner: 3
// In this program, we have an outer loop that runs 2 times and an inner loop that runs 3 times for each iteration of the outer loop.
// The outer loop iterates over the values 1 and 2, printing "Outer: 1" and "Outer: 2" respectively.
// Inside the outer loop, the inner loop iterates over the values 1, 2, and 3, printing "Inner: 1", "Inner: 2", and "Inner: 3" for each iteration of the outer loop.
// The total number of iterations is 2 (outer loop) * 3 (inner loop) = 6.
