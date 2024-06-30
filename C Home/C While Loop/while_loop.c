#include <stdio.h>

int main() {
    int i = 0; // Initialize the loop variable i to 0

    while (i < 5) { // Loop while i is less than 5
        printf("The value of i is: %d\n", i); // Print the value of i
        i++; // Increment i by 1
    }

    return 0;
}

// To compile the program, run the following command:
// gcc while_loop.c -o while_loop
// To run the program, run the following command:
// ./while_loop
// Output:
// The value of i is: 0
// The value of i is: 1
// The value of i is: 2
// The value of i is: 3
// The value of i is: 4
// In this program, we use a while loop to print the value of a loop variable i from 0 to 4.
// We initialize the loop variable i to 0 and use a while loop with the condition i < 5 to loop while i is less than 5.
// Inside the loop, we print the value of i using the %d format specifier and increment i by 1 using the increment operator ++.
// The loop will run 5 times, printing the value of i from 0 to 4.
// After the loop finishes, the program will return 0, indicating successful execution.
// The while loop is a control flow statement that repeatedly executes a block of code as long as a specified condition is true.
// It is commonly used when the number of iterations is not known in advance, and the loop condition is based on a variable that changes during the loop execution.
// The while loop is useful for iterating over a sequence of values or performing a task until a certain condition is met.
// It is an essential construct in programming and allows for efficient repetition of code based on a condition.
// The while loop is one of the fundamental loop structures in C and is widely used in various programming scenarios.
// It provides a flexible and powerful way to control the flow of execution in a program based on dynamic conditions.