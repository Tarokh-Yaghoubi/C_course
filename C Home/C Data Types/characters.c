#include <stdio.h>

int main() {
    char myChar = 'A'; // Declare and initialize a character variable
    printf("myChar: %c\n", myChar); // Print the value of the character variable

    // Alternatively, if you are familiar with ASCII, 
    // you can use ASCII values to display certain characters. 
    // Note that these values are not surrounded by quotes (''), 
    // as they are numbers:

    char a = 65, b = 66, c = 67;
    printf("%c", a);
    printf("%c", b);
    printf("%c", c);

    return 0;
}

// To compile the program, run the following command:
// gcc characters.c -o characters
// To run the program, run the following command:
// ./characters
// Output:
// myChar: A
// ABC
// In this program, we declare a character variable myChar and initialize it with the character 'A'.