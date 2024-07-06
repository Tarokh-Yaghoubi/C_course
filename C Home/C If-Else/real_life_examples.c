#include <stdio.h>

int main() {
    int myNum = 10; // Is this a positive or negative number?

    if (myNum > 0) {
    printf("The value is a positive number.");
    } else if (myNum < 0) {
    printf("The value is a negative number.");
    } else {
    printf("The value is 0.");
    }
}

// To compile the program, run the following command:
// gcc real_life_examples.c -o real_life_examples
// To run the program, run the following command:
// ./real_life_examples
// Output:
// The value is a positive number.
// In this program, we declare an integer variable myNum with a value of 10.
// We use an if-else statement to check if the value of myNum is positive, negative, or zero.
// Since myNum is greater than 0, the condition myNum > 0 is true, and the message "The value is a positive number." is printed to the console.
// If myNum were less than 0, the else if statement would be executed, and the message "The value is a negative number." would be printed.
// If myNum were equal to 0, the else statement would be executed, and the message "The value is 0." would be printed.
// The if-else statement allows us to execute different code blocks based on the value of a specified condition.
// In this case, the if statement is used to check if myNum is positive, and the corresponding message is printed to the console.
// The else if statement is used to check if myNum is negative, and the else statement is used as a catch-all for the case where myNum is 0.
// This program demonstrates how to use if-else statements to handle multiple conditions in C.
