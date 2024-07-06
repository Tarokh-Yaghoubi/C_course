#include <stdio.h>

int main() {
    int i;

    for (i = 0; i < 10; i++) {
        if (i == 5) {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}

// To compile the program, run the following command:
// gcc continue.c -o continue
// To run the program, run the following command:
// ./continue
// Output:
// 0
// 1
// 2
// 3
// 4
// 6
// 7
// 8
// 9
// In this program, we use a for loop to iterate over the values from 0 to 9.
// Inside the loop, we check if the loop variable i is equal to 5 using the if statement.
// If i is equal to 5, we use the continue statement to skip the rest of the loop body and move to the next iteration.
// As a result, the program skips printing the value 5 and continues with the values from 6 to 9.
// The output of the program will be the values from 0 to 4 and 6 to 9, with the value 5 skipped.
// The continue statement is useful when you want to skip certain iterations of a loop based on a condition without exiting the loop entirely. It allows you to control the flow of the loop and skip specific iterations as needed. The continue statement is often used in combination with conditional statements like if to skip certain iterations based on a condition.// Path: C%20Home/C%20Break-Continue/continue.c
