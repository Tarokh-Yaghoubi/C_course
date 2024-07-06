#include <stdio.h>

int main() {
    // Create an integer variable that will store the number we get from the user
    int myNum;

    // Ask the user to type a number
    printf("Type a number: \n");

    // Get and save the number the user types
    scanf("%d", &myNum);

    // Output the number the user typed
    printf("Your number is: %d", myNum);
}

// To compile the program, run the following command:
// gcc user_input.c -o user_input
// To run the program, run the following command:
// ./user_input
// Output:
// Type a number:
// 10
// Your number is: 10
// In this program, we declare an integer variable myNum that will store the number entered by the user.
// We use the printf function to ask the user to type a number.
// We then use the scanf function to get the number entered by the user and store it in the variable myNum.
// Finally, we use the printf function to output the number entered by the user.
