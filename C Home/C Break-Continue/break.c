#include <stdio.h>

int main() {
    int i;

    for (i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Exit the loop when i is equal to 5
        }
        printf("%d\n", i);
    }

    return 0;
}

// To compile the program, run the following command:
// gcc break.c -o break
// To run the program, run the following command:
// ./break
// Output:
// 0
// 1
// 2
// 3
// 4
// In this program, we use a for loop to iterate over the values from 0 to 9.
// Inside the loop, we check if the loop variable i is equal to 5 using the if statement.
// If i is equal to 5, we use the break statement to exit the loop immediately.
// As a result, the loop stops when i is equal to 5, and the program prints the values from 0 to 4.
