#include <stdio.h>

// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  printf("I just got executed!");
}

// Output:
// I just got executed!
// In this program, we declare a function myFunction() using a function declaration before the main() function.
// We then define the myFunction() function after the main() function.
// The myFunction() function prints "I just got executed!" when called from the main() function.
// When the program is executed, the myFunction() function is called, and the output is "I just got executed!".
// The function declaration informs the compiler about the function's name, return type, and parameters,
// allowing the function to be called before its actual definition in the program.
// This enables the main() function to call the myFunction() function even though it is defined later in the program.
// Function declarations are commonly used in C programs to define functions at the beginning of the file
// and implement them later in the program.

