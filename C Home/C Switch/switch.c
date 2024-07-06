#include <stdio.h>

int main() {
    int day = 4;

    switch (day) {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    }

}

// To compile the program, run the following command:
// gcc switch.c -o switch
// To run the program, run the following command:
// ./switch
// Output:
// Thursday
// In this program, we declare an integer variable day with a value of 4.
// We then use a switch statement to check the value of day and print the corresponding day of the week.
// Since the value of day is 4, the case 4 block is executed, and the message "Thursday" is printed to the console.
// The switch statement allows us to execute different code blocks based on the value of a specified variable.
// In this case, the switch statement is used to determine the day of the week based on the value of the variable day.
// The break statement is used to exit the switch statement after a case block is executed.
// If the break statement were omitted, the switch statement would continue to execute the code blocks for subsequent cases until a break statement is encountered.
// This program demonstrates how to use a switch statement to handle multiple cases in C.
// The switch statement is often used when there are multiple possible values for a variable and different code blocks need to be executed based on those values.
// It provides a concise and efficient way to handle multiple cases in C.
