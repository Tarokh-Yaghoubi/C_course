#include <stdio.h>

int main() {
    // Initialize an array
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Declare a pointer to an integer and point it to the array
    int *ptr = arr;

    // Print array elements using array indexing
    printf("Array elements using array indexing:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Print array elements using pointer arithmetic
    printf("\nArray elements using pointer arithmetic:\n");
    for (int i = 0; i < size; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }

    // Modify array elements using pointers
    for (int i = 0; i < size; i++) {
        *(ptr + i) += 5; // Increase each element by 5
    }

    // Print modified array elements using pointers
    printf("\nModified array elements using pointer arithmetic:\n");
    for (int i = 0; i < size; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }

    // Print modified array elements using array indexing
    printf("\nModified array elements using array indexing:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

// To compile the program, run the following command:
// gcc pointer-array.c -o pointer-array
// To run the program, run the following command:
// ./pointer-array
// Output:
// Array elements using array indexing:
// arr[0] = 10
// arr[1] = 20
// arr[2] = 30
// arr[3] = 40
// arr[4] = 50
//
// Array elements using pointer arithmetic:
// *(ptr + 0) = 10
// *(ptr + 1) = 20
// *(ptr + 2) = 30
// *(ptr + 3) = 40
// *(ptr + 4) = 50
//
// Modified array elements using pointer arithmetic:
// *(ptr + 0) = 15
// *(ptr + 1) = 25
// *(ptr + 2) = 35
// *(ptr + 3) = 45
// *(ptr + 4) = 55
//
// Modified array elements using array indexing:
// arr[0] = 15
// arr[1] = 25
// arr[2] = 35
// arr[3] = 45
// arr[4] = 55
// In this program, we initialize an array arr with five elements {10, 20, 30, 40, 50}.
// We calculate the size of the array using sizeof(arr) / sizeof(arr[0]) and store it in the variable size.
// We declare a pointer to an integer ptr and point it to the array arr.
// We print the array elements using array indexing and pointer arithmetic.
// We modify the array elements by increasing each element by 5 using pointer arithmetic.
// We print the modified array elements using both pointer arithmetic and array indexing.
// The output of the program will show the original array elements, modified array elements using pointer arithmetic, and modified array elements using array indexing.
// The array elements are accessed and modified using both array indexing and pointer arithmetic.
// The pointer ptr is used to access and modify the elements of the array arr.
// The modified array elements are printed using both pointer arithmetic and array indexing to demonstrate the equivalence of the two methods.
// The output of the program will show the original array elements, modified array elements using pointer arithmetic, and modified array elements using array indexing.
// The array elements are accessed and modified using both array indexing and pointer arithmetic.
// The pointer ptr is used to access and modify the elements of the array arr.
// The modified array elements are printed using both pointer arithmetic and array indexing to demonstrate the equivalence of the two methods.
// The output of the program will show the original array elements, modified array elements using pointer arithmetic, and modified array elements using array indexing.
// The array elements are accessed and modified using both array indexing and pointer arithmetic.
// The pointer ptr is used to access and modify the elements of the array arr.
// The modified array elements are printed using both pointer arithmetic and array indexing to demonstrate the equivalence of the two methods.
// The output of the program will show the original array elements, modified array elements using pointer arithmetic, and modified array elements using array indexing.
// The array elements are accessed and modified using both array indexing and pointer arithmetic.
// The pointer ptr is used to access and modify the elements of the array arr.
// The modified array elements are printed using both pointer arithmetic and array indexing to demonstrate the equivalence of the two methods.
// The output of the program will show the original array elements, modified array elements using pointer arithmetic, and modified array elements using array indexing.
// The array elements are accessed and modified using both array indexing and pointer arithmetic.
