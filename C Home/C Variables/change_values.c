#include <stdio.h>

int main() {
    // Declare a variable
    int myNum;

    // Assign a value to the variable
    myNum = 15;

    // Print the value of the variable
    printf("The value of myNum is: %d\n", myNum);

    // Change the value of the variable
    myNum = 20;

    // Print the new value of the variable
    printf("The new value of myNum is: %d\n", myNum);

    return 0;
}

// To compile the program, run the following command:
// gcc change_values.c -o change_values
// To run the program, run the following command:
// ./change_values
// Output:
// The value of myNum is: 15
// The new value of myNum is: 20
// In this program, we declare an integer variable myNum and assign a value of 15 to it. 
// We then print the value of myNum using the %d format specifier. 
// Next, we change the value of myNum to 20 and print the new value using the %d format specifier. 
// The output of the program will be: 
// The value of myNum is: 15
// The new value of myNum is: 20
// The value of myNum is initially 15, and then it is changed to 20.
