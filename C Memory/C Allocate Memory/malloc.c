#include <stdio.h>
#include <stdlib.h>

#define STATIC_SIZE 5

void printArray(int arr[], int size);

int main() {
    // Static memory allocation
    int staticArray[STATIC_SIZE] = {1, 2, 3, 4, 5};

    // Dynamic memory allocation
    int dynamicSize;
    printf("Enter the size of the dynamic array: ");
    scanf("%d", &dynamicSize);

    int *dynamicArray = (int *)malloc(dynamicSize * sizeof(int));
    if (dynamicArray == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program if memory allocation fails
    }

    // Initialize dynamic array
    for (int i = 0; i < dynamicSize; i++) {
        dynamicArray[i] = i + 1;
    }

    // Print static array
    printf("Static array elements:\n");
    printArray(staticArray, STATIC_SIZE);

    // Print dynamic array
    printf("Dynamic array elements:\n");
    printArray(dynamicArray, dynamicSize);

    // Modify dynamic array
    for (int i = 0; i < dynamicSize; i++) {
        dynamicArray[i] *= 2; // Double each element
    }

    // Print modified dynamic array
    printf("Modified dynamic array elements:\n");
    printArray(dynamicArray, dynamicSize);

    // Free dynamically allocated memory
    free(dynamicArray);

    return 0;
}

// Function to print array elements
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


// To compile the program, run the following command:
// gcc malloc.c -o malloc
// To run the program, run the following command:
// ./malloc
// Output:
// Enter the size of the dynamic array: 3
// Static array elements:
// 1 2 3 4 5
// Dynamic array elements:
// 1 2 3
// Modified dynamic array elements:
// 2 4 6
// In this program, we demonstrate static and dynamic memory allocation in C.
// We first allocate a static array of size 5 and initialize it with values 1 to 5.
// We then prompt the user to enter the size of a dynamic array and allocate memory for it using malloc.
// If memory allocation fails, we print an error message and exit the program.
// We initialize the dynamic array with values 1 to n, where n is the size entered by the user.
// We print the elements of both the static and dynamic arrays using a printArray function.
// Next, we modify the elements of the dynamic array by doubling each element.
// Finally, we print the modified dynamic array and free the dynamically allocated memory using free.
// The output of the program will depend on the size of the dynamic array entered by the user.
// The program demonstrates the difference between static and dynamic memory allocation in C.
// Static memory allocation is done at compile time, while dynamic memory allocation is done at runtime using functions like malloc and free.
// Dynamic memory allocation allows for more flexibility in managing memory, but it requires manual memory management to avoid memory leaks.
// It is important to free dynamically allocated memory using free to prevent memory leaks and ensure efficient memory usage.
// The program also highlights the use of pointers and the sizeof operator to allocate memory for arrays of a specified size.
// The printArray function is used to print the elements of an array, demonstrating how arrays are passed to functions in C.
// The program provides a hands-on example of working with static and dynamic memory allocation in C.
