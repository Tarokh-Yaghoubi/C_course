#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;

    if (x > y) {
        printf("x is greater than y\n");
    } else if (x < y) {
        printf("x is less than y\n");
    } else {
        printf("x is equal to y\n");
    }

    return 0;
}

// To compile the program, run the following command:
// gcc else_if.c -o else_if
// To run the program, run the following command:
// ./else_if
// Output:
// x is less than y
// In this program, we declare two integer variables x and y with values 10 and 20, respectively.
// We then use an if-else-if-else statement to compare the values of x and y.
// The first condition x > y is false, so the code block inside the if statement is not executed.
// The second condition x < y is true, so the code block inside the else if statement is executed, and the message "x is less than y" is printed to the console.
// If both conditions x > y and x < y were false, the code block inside the else statement would be executed.
// The else-if statement allows us to check multiple conditions and execute different code blocks based on the results.
// In this case, the else if statement is used to check if x is less than y, and the corresponding message is printed to the console.
// The else statement serves as a catch-all for cases where none of the previous conditions are true.
// This program demonstrates how to use else-if statements to handle multiple conditions in C.
