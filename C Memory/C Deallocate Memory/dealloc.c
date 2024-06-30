#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = malloc(sizeof(*ptr)); // Allocate memory for one integer

    // If memory cannot be allocated, print a message and end the main() function
    if (ptr == NULL) {
    printf("Unable to allocate memory");
    return 1;
    }

    // Set the value of the integer
    *ptr = 20;

    // Print the integer value
    printf("Integer value: %d\n", *ptr);

    // Free allocated memory
    free(ptr);

    // Set the pointer to NULL to prevent it from being accidentally used
    ptr = NULL;
}

// To compile the program, run the following command:
// gcc dealloc.c -o dealloc
// To run the program, run the following command:
// ./dealloc
// Output:
// Integer value: 20
// In this program, we allocate memory for an integer using the malloc function.
// If memory allocation fails, we print an error message and exit the program.
// We then set the value of the integer to 20 and print it.
// Finally, we free the allocated memory using the free function and set the pointer to NULL to prevent accidental use.

