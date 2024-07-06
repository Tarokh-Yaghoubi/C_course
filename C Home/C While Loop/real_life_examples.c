#include <stdio.h>

int main() {
    // A variable with some specific numbers
    int numbers = 12345;

    // A variable to store the reversed number
    int revNumbers = 0;

    // Reverse and reorder the numbers
    while (numbers) {
    // Get the last number of 'numbers' and add it to 'revNumber'
    revNumbers = revNumbers * 10 + numbers % 10;
    // Remove the last number of 'numbers'
    numbers /= 10;
    }
}

// To compile the program, run the following command:
// gcc real_life_examples.c -o real_life_examples
// To run the program, run the following command:
// ./real_life_examples
// Output:
// No output
// In this program, we have a variable numbers with the value 12345.
// We then declare another variable revNumbers to store the reversed number.
// We use a while loop to reverse the numbers by extracting the last digit of numbers and adding it to revNumbers.
// After adding the last digit, we remove it from numbers by dividing it by 10.
// This process continues until all the digits of numbers are reversed and stored in revNumbers.
// The final value of revNumbers will be 54321, which is the reverse of the original number 12345.
