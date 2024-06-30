#include <stdio.h>

// Global variable
int globalVar = 10;

// Function prototypes
void printGlobalVar();
void modifyGlobalVar();
void localScopeDemo();

int main() {
    // Printing the initial value of globalVar
    printf("Initial value of globalVar: %d\n", globalVar);

    // Calling function to print globalVar
    printGlobalVar();

    // Calling function to modify globalVar
    modifyGlobalVar();

    // Printing the value of globalVar after modification
    printf("Value of globalVar after modification: %d\n", globalVar);

    // Demonstrating local scope
    localScopeDemo();

    // Printing the final value of globalVar
    printf("Final value of globalVar: %d\n", globalVar);

    return 0;
}

// Function to print the value of globalVar
void printGlobalVar() {
    printf("Value of globalVar in printGlobalVar: %d\n", globalVar);
}

// Function to modify the value of globalVar
void modifyGlobalVar() {
    globalVar += 5;
    printf("Value of globalVar in modifyGlobalVar: %d\n", globalVar);
}

// Function to demonstrate local scope
void localScopeDemo() {
    int localVar = 20;  // Local variable
    printf("Value of localVar in localScopeDemo: %d\n", localVar);

    // Modifying the global variable within the function
    globalVar += 10;
    printf("Value of globalVar in localScopeDemo after modification: %d\n", globalVar);
}

// Output:
// Initial value of globalVar: 10
// Value of globalVar in printGlobalVar: 10
// Value of globalVar in modifyGlobalVar: 15
// Value of globalVar after modification: 15
// Value of localVar in localScopeDemo: 20
// Value of globalVar in localScopeDemo after modification: 25
// Final value of globalVar: 25
// In this program, we have a global variable globalVar with an initial value of 10.
// We print the initial value of globalVar and then call two functions: printGlobalVar and modifyGlobalVar.
// The printGlobalVar function prints the value of globalVar, which is 10.
// The modifyGlobalVar function increments the value of globalVar by 5 and prints the new value, which is 15.
// We then print the value of globalVar after modification, which is 15.
// Next, we call the localScopeDemo function, which demonstrates local scope.
// The localScopeDemo function declares a local variable localVar with a value of 20 and prints its value.
// It then increments the global variable globalVar by 10 and prints the new value.
// Finally, we print the final value of globalVar, which is 25.
// The output of the program shows the values of globalVar and localVar at different points in the program, demonstrating the concept of scope in C.
// The global variable globalVar is accessible and modifiable from all functions in the program, while the local variable localVar is only accessible within the localScopeDemo function.
