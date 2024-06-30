#include <stdio.h>

int main() {
    float myFloatNum = 3.5;

    printf("%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f", myFloatNum);   // Only show 4 digits
}

// Output:
// 3.500000
// 3.5
// 3.50
// 3.5000
// In this program, we declare a variable myFloatNum with a floating point value of 3.5.