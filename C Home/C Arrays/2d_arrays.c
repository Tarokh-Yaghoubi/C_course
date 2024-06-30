#include <stdio.h>

int main() {
    // Declare a 2D array
    int myArray[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Access and print the elements of the 2D array
    printf("%d\n", myArray[0][0]); // Prints 1
    printf("%d\n", myArray[1][1]); // Prints 5
    printf("%d\n", myArray[2][2]); // Prints 9

    return 0;
}

// To compile the program, run the following command:
// gcc 2d_arrays.c -o 2d_arrays
// To run the program, run the following command:
// ./2d_arrays
// Output:
// 1
// 5
// 9
// In this program, we declare a 2D array named myArray with 3 rows and 3 columns.
// We initialize the elements of the array with values from 1 to 9.
// To access and print the elements of the 2D array, we use the array indices myArray[row][column].
// For example, myArray[0][0] accesses the element in the first row and first column, which is 1.
// Similarly, myArray[1][1] accesses the element in the second row and second column, which is 5.
// Finally, myArray[2][2] accesses the element in the third row and third column, which is 9.
// The program prints these elements using the printf function with the %d format specifier.

