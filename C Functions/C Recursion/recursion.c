#include <stdio.h>

int sum(int k);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

// Output:
// 55
// In this program, we have defined a recursive function sum that calculates the sum of all positive integers up to a given number k.
// The function takes an integer k as an argument and recursively calls itself with k-1 until k becomes 0.
// When k becomes 0, the function returns 0, which is the base case of the recursion.
// The sum of all positive integers up to k is calculated by adding k to the sum of all positive integers up to k-1.
// When the program is executed with k=10, the sum function is called with k=10, which recursively calculates the sum of all positive integers up to 10.
// The final result is 55, which is the sum of all positive integers up to 10 (1+2+3+4+5+6+7+8+9+10).
// The output of the program is 55, which is the sum of all positive integers up to 10.
// Recursion is a powerful technique in programming that allows a function to call itself to solve a problem.
// It is commonly used to solve problems that can be broken down into smaller subproblems of the same type.
// In this example, the sum function recursively calculates the sum of all positive integers up to a given number k by breaking down the problem into smaller subproblems.
// The base case of the recursion ensures that the function terminates when the input reaches a specific condition, preventing infinite recursion.
// Recursion can be an elegant and efficient solution for certain types of problems, but it can also lead to stack overflow errors if not implemented correctly.
// It is important to carefully design the base case and recursive case of a recursive function to ensure correct behavior and prevent infinite recursion.
