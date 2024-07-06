#include <stdio.h>

int main() {
    int myAge = 43;
    printf("%p", &myAge); // Outputs 0x7ffe5367e044
}

// To compile the program, run the following command:
// gcc memory.c -o memory
// To run the program, run the following command:
// ./memory

// In this program, we declare an integer variable myAge and assign it the value 43.
// We then print the memory address of myAge using the %p format specifier in the printf function.
// The output will be the memory address of the variable myAge, which may vary each time the program is run.
// The memory address is represented in hexadecimal format, such as 0x7ffe5367e044.
// The memory address of a variable is the location in memory where the variable is stored. It can be used to access and manipulate the variable's value indirectly.
// The & operator is used to get the memory address of a variable in C. It is called the "address-of" operator.
// The memory address of a variable can be useful in various scenarios, such as passing variables by reference to functions or debugging memory-related issues.
