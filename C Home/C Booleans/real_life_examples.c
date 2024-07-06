#include <stdio.h> 

int main() {
    int myAge = 25;
    int votingAge = 18;

    printf("%d", myAge >= votingAge); // Returns 1 (true), meaning 25 year olds are allowed to vote!
}

// To compile the program, run the following command:
// gcc real_life_examples.c -o real_life_examples
// To run the program, run the following command:
// ./real_life_examples
// Output:
// 1
// In this program, we declare two integer variables myAge and votingAge.
// We then use the greater than or equal to operator >= to compare myAge and votingAge.
// Since myAge is greater than or equal to votingAge, the expression evaluates to true (1),
// indicating that 25 year olds are allowed to vote. We print the result using the %d format specifier.

