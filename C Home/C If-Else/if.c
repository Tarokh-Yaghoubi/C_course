#include <stdio.h>

int main() {
    int x = 20;
    int y = 18;
    if (x > y) {
    printf("x is greater than y");
    }
}

// To compile the program, run the following command:
// gcc if.c -o if
// To run the program, run the following command:
// ./if
// Output:
// x is greater than y
// In this program, we declare two integer variables x and y with values 20 and 18, respectively.
// We then use an if statement to check if x is greater than y.
// Since 20 is greater than 18, the condition x > y is true, and the message "x is greater than y" is printed to the console.
// If the condition x > y were false, the message would not be printed.
// The if statement is used to execute a block of code only if a specified condition is true.