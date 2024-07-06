#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    int max;

    // Short if-else statement
    max = (x > y) ? x : y;

    printf("The maximum value is: %d\n", max);

    return 0;
}

// To compile the program, run the following command:
// gcc short_if.c -o short_if
// To run the program, run the following command:
// ./short_if
// Output:
// The maximum value is: 20
// In this program, we declare two integer variables x and y with values 10 and 20, respectively.
// We also declare an integer variable max to store the maximum value between x and y.
// We use a short if-else statement to assign the maximum value to the variable max.
// The expression (x > y) ? x : y evaluates to x if x is greater than y, and y otherwise.
// In this case, x is not greater than y, so the value of y (20) is assigned to max.
// Finally, we print the maximum value using the %d format specifier, which outputs 20.
// The short if-else statement is a concise way to assign values based on a condition in C.
// It is often used when the condition is simple and the code block is short.
