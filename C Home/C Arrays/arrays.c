#include <stdio.h>

int main() {
    // Declare an array of integers
    int numbers[5];

    // Assign values to the array elements
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // Print the values of the array elements
    printf("numbers[0]: %d\n", numbers[0]);
    printf("numbers[1]: %d\n", numbers[1]);
    printf("numbers[2]: %d\n", numbers[2]);
    printf("numbers[3]: %d\n", numbers[3]);
    printf("numbers[4]: %d\n", numbers[4]);

    return 0;
}

// To compile the program, run the following command:
// gcc arrays.c -o arrays
// To run the program, run the following command:
// ./arrays
// Output:
// numbers[0]: 10
// numbers[1]: 20
// numbers[2]: 30
// numbers[3]: 40
// numbers[4]: 50
// In this program, we declare an array of integers named numbers with a size of 5 elements.
// We assign values to each element of the array using the index notation numbers[index] = value.
// We then print the values of each array element using the printf function and the %d format specifier.
