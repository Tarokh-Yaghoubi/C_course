#include <stdio.h>

int main() {

   int i = 0;

    do {
    printf("%d\n", i);
    i++;
    }
    while (i < 5);

}

// To compile the program, run the following command:
// gcc do_while.c -o do_while
// To run the program, run the following command:
// ./do_while
// Output:
// 0
// 1
// 2
// 3
// 4
// In this program, we use a do-while loop to print the value of the variable i from 0 to 4.
// The loop will execute at least once because the condition i < 5 is checked after the first iteration.
// Inside the loop, we print the value of i using the %d format specifier and increment i by 1.
// The loop will run 5 times, printing the value of i from 0 to 4.
// After the loop finishes, the program will return 0, indicating successful execution.
