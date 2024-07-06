#include <stdio.h>

int main() {
    // Declare a pointer variable
    int *ptr;

    // Declare a variable
    int myNum = 15;

    // Assign the address of myNum to the pointer variable
    ptr = &myNum;

    // Print the value of myNum using the pointer
    printf("The value of myNum is: %d\n", *ptr);

    // Change the value of myNum using the pointer
    *ptr = 20;

    // Print the new value of myNum
    printf("The new value of myNum is: %d\n", myNum);

    return 0;
}

// To compile the program, run the following command:
// gcc pointers.c -o pointers
// To run the program, run the following command:
// ./pointers
// Output:
// The value of myNum is: 15
// The new value of myNum is: 20
// In this program, we declare a pointer variable ptr of type int.
// We also declare an integer variable myNum and assign a value of 15 to it.
// We then assign the address of myNum to the pointer variable ptr using the address-of operator &.
// We print the value of myNum using the pointer variable ptr and the dereference operator *.
// Next, we change the value of myNum to 20 using the pointer variable ptr and the dereference operator *.
// Finally, we print the new value of myNum, which will be 20.
