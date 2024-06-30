#include <stdio.h>

int main() {
    int i;

    for (i = 0; i < 5; i++) {
    printf("%d\n", i);
    }
}

// To compile the program, run the following command:
// gcc for.c -o for
// To run the program, run the following command:
// ./for
// Output:
// 0
// 1
// 2
// 3
// 4
// In this program, we use a for loop to print the numbers from 0 to 4.
// The loop runs 5 times, with the loop variable i starting at 0 and incrementing by 1 each iteration.
// The loop condition i < 5 ensures that the loop runs until i is no longer less than 5.
// Inside the loop, we use the printf function to print the value of i, followed by a newline character \n.
