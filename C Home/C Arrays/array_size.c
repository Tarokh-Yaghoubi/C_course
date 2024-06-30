#include <stdio.h>

int main() {
    int myArray[5] = {1, 2, 3, 4, 5}; // Declare an array with 5 elements
    int arraySize = sizeof(myArray) / sizeof(myArray[0]); // Calculate the size of the array
    printf("The size of the array is: %d\n", arraySize); // Print the size of the array

    return 0;
}

// To compile the program, run the following command:
// gcc array_size.c -o array_size
// To run the program, run the following command:
// ./array_size
// Output:
// The size of the array is: 5
// In this program, we declare an array of integers named myArray with 5 elements and initialize it with values.
// We calculate the size of the array by dividing the total size of the array by the size of a single element.
// The total size of the array is obtained using the sizeof operator, and the size of a single element is obtained using sizeof(myArray[0]).
// Finally, we print the size of the array using the %d format specifier in the printf function.
