#include <stdio.h>

int main() {
    int time = 20;
    if (time < 18) {
    printf("Good day.");
    } else {
    printf("Good evening.");
    }
}

// To compile the program, run the following command:
// gcc else.c -o else
// To run the program, run the following command:
// ./else
// Output:
// Good evening.
// In this program, we declare an integer variable time with a value of 20.
// We then use an if-else statement to check if the value of time is less than 18.
// Since 20 is not less than 18, the condition time < 18 is false, and the code block inside the else statement is executed.
// The message "Good evening." is printed to the console as a result.
// If the condition time < 18 were true, the code block inside the if statement would be executed instead.
// The if-else statement allows us to execute different code blocks based on whether a specified condition is true or false.
// In this case, the else statement is executed because the condition in the if statement is false.
