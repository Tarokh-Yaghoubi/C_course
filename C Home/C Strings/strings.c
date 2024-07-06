#include <stdio.h>

int main() {
    // Declare a string variable
    char myString[15] = "Hello, World!";

    // Print the value of the string
    printf("The value of myString is: %s\n", myString);

    // Change the value of the string
    myString[7] = 'C';

    // Print the new value of the string
    printf("The new value of myString is: %s\n", myString);

    return 0;
}

// To compile the program, run the following command:
// gcc strings.c -o strings
// To run the program, run the following command:
// ./strings
// Output:
// The value of myString is: Hello, World!
// The new value of myString is: Hello, Cold!
// In this program, we declare a character array myString with a size of 15 and initialize it with the string "Hello, World!".
// We print the value of myString using the %s format specifier in the printf function.
// Next, we change the character at index 7 of myString from 'W' to 'C' and print the new value of myString.
