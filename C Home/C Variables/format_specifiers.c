#include <stdio.h>

int main() {
    int myNum = 15;
    float myFloatNum = 5.99;
    double myDoubleNum = 5.99;
    char myLetter = 'D';
    char myText[15] = "Hello";

    printf("myNum: %d\n", myNum); // %d is used to format integers
    printf("myFloatNum: %f\n", myFloatNum); // %f is used to format float numbers
    printf("myDoubleNum: %lf\n", myDoubleNum); // %lf is used to format double numbers
    printf("myLetter: %c\n", myLetter); // %c is used to format characters
    printf("myText: %s\n", myText); // %s is used to format strings

    return 0;
}

// To compile the program, run the following command:
// gcc format_specifiers.c -o format_specifiers
// To run the program, run the following command:
// ./format_specifiers
// Output:
// myNum: 15
// myFloatNum: 5.990000
// myDoubleNum: 5.990000
// myLetter: D
// myText: Hello

