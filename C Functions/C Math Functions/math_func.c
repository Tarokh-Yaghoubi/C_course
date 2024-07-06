#include <stdio.h>
#include <math.h>

int main() {
    printf("%f\n", sqrt(16)); // Function to calculate the square root of a number
    printf("%f\n", ceil(1.4)); // Function to round a number up to the nearest integer
    printf("%f\n", floor(1.4)); // Function to round a number down to the nearest integer
    printf("%f\n", pow(4, 3)); // Function to calculate the power of a number
}

// To compile the program, run the following command:
// gcc math_func.c -o math_func
// To run the program, run the following command:
// ./math_func
// Output:
// 4.000000
// 2.000000
// 1.000000
// 64.000000
// In this program, we use the math.h library to perform mathematical calculations.
// We use the sqrt() function to calculate the square root of a number, the ceil() function to round a number up to the nearest integer, the floor() function to round a number down to the nearest integer, and the pow() function to calculate the power of a number.