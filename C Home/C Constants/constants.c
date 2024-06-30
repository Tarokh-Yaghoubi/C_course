#include <stdio.h>

int main() {
    const int myNum = 15;  // myNum will always be 15
    myNum = 10;  // error: assignment of read-only variable 'myNum'
}

// In this program, we declare a constant integer variable myNum with the value 15 using the const keyword.
// We then try to change the value of myNum to 10, which results in a compilation error because myNum is a constant variable and cannot be modified after initialization.
// The error message will be: error: assignment of read-only variable 'myNum'
// Constants are variables whose values cannot be changed once they are initialized.
// In C, constants are declared using the const keyword followed by the data type and variable name.
// Constants are useful for defining values that should not be changed during the execution of a program.
// Constants can be used to make code more readable and maintainable by providing meaningful names for fixed values.
// Constants are typically written in uppercase letters to distinguish them from regular variables.
