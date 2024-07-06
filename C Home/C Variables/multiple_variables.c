#include <stdio.h>

int main() {
    int x, y, z; // Declare three variables
    x = y = z = 50; // Assign 50 to x, y, and z
    printf("%d", x + y + z); // Print the sum of x, y, and z
}

// To compile the program, run the following command:
// gcc multiple_variables.c -o multiple_variables
// To run the program, run the following command:
// ./multiple_variables
// Output:
// 150
// In this program, we declare three integer variables x, y, and z.
// We then assign the value 50 to all three variables using the assignment operator =.
// Finally, we print the sum of x, y, and z using the %d format specifier, 
// which will output 150 (50 + 50 + 50).