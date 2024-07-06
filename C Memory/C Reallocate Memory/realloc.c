#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1, *ptr2, size;

    // Allocate memory for four integers
    size = 4 * sizeof(*ptr1);
    ptr1 = malloc(size);

    printf("%d bytes allocated at address %p \n", size, ptr1);

    // Resize the memory to hold six integers
    size = 6 * sizeof(*ptr1);
    ptr2 = realloc(ptr1, size);

    printf("%d bytes reallocated at address %p \n", size, ptr2);
}

// To compile the program, run the following command:
// gcc realloc.c -o realloc
// To run the program, run the following command:
// ./realloc
// Output:
// 16 bytes allocated at address 0x7f8c3b402010
// 24 bytes reallocated at address 0x7f8c3b402010
// In this program, we allocate memory for four integers using malloc and print the size and address of the allocated memory.
// We then resize the memory to hold six integers using realloc and print the new size and address of the reallocated memory.
// The output of the program will show the initial allocation of 16 bytes at a specific memory address, followed by the reallocation of 24 bytes at the same memory address.
// The realloc function can be used to resize dynamically allocated memory blocks, preserving the existing data if possible.
// If the reallocation is successful, the original memory block is freed, and a new memory block is returned with the requested size.
// If the reallocation fails, the original memory block remains unchanged, and NULL is returned.
// The realloc function can be used to increase or decrease the size of a dynamically allocated memory block.
// If the new size is larger than the original size, the additional memory is uninitialized.
// If the new size is smaller than the original size, the excess memory is freed.
// It is important to check the return value of realloc to handle cases where the reallocation fails.
// The realloc function can be used to resize dynamically allocated memory blocks, preserving the existing data if possible.
// If the reallocation is successful, the original memory block is freed, and a new memory block is returned with the requested size.
// If the reallocation fails, the original memory block remains unchanged, and NULL is returned.
// The realloc function can be used to increase or decrease the size of a dynamically allocated memory block.
// If the new size is larger than the original size, the additional memory is uninitialized.
// If the new size is smaller than the original size, the excess memory is freed.

