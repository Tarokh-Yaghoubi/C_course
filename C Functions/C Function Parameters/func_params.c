#include <stdio.h>

void myFunction(char name[]) {
  printf("Hello %s\n", name);
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}

// To compile the program, run the following command:
// gcc func_params.c -o func_params
// To run the program, run the following command:
// ./func_params
// Output:
// Hello Liam
// Hello Jenny
// Hello Anja
// In this program, we define a function myFunction() that takes a string parameter name[].
// We call the myFunction() function with different string arguments "Liam", "Jenny", and "Anja" from the main() function.
// The myFunction() function prints "Hello" followed by the name passed as an argument.
