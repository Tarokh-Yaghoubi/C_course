#include <stdio.h>

int main() {
    int number = 2;
    int i;

    // Print the multiplication table for the number 2
    for (i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}

// To compile the program, run the following command:
// gcc real_life_examples.c -o real_life_examples
// To run the program, run the following command:
// ./real_life_examples
// Output:
// 2 x 1 = 2
// 2 x 2 = 4
// 2 x 3 = 6
// 2 x 4 = 8
// 2 x 5 = 10
// 2 x 6 = 12
// 2 x 7 = 14
// 2 x 8 = 16
// 2 x 9 = 18
// 2 x 10 = 20
// In this program, we use a for loop to print the multiplication table for the number 2.
// The loop runs 10 times, with the loop variable i starting at 1 and incrementing by 1 each iteration.
// The loop condition i <= 10 ensures that the loop runs until i is no longer less than or equal to 10.
// Inside the loop, we use the printf function to print the multiplication of the number 2 with the loop variable i.
// The output of the program will be the multiplication table of 2 from 1 to 10.
