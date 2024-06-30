#include <stdio.h>

void calculateSum() {
  int x = 5;
  int y = 10;
  int sum = x + y;
  printf("The sum of x + y is: %d", sum);
}

int main() {
  calculateSum();  // call the function
  return 0;
}

// To compile the program, run the following command:
// gcc func.c -o func
// To run the program, run the following command:
// ./func
// Output:
// The sum of x + y is: 15
// In this program, we define a function calculateSum() that calculates the sum of two integers x and y.
// We then call the calculateSum() function from the main() function.
// The calculateSum() function calculates the sum of x and y and prints the result.


