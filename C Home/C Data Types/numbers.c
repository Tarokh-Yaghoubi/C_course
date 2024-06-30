#include <stdio.h>

#include <stdio.h>

int main() {
    int myInt = 1000;
    printf("Integer: %d\n", myInt);

    float myFloat = 5.75f;
    printf("Float: %f\n", myFloat);

    double myDouble = 19.99;
    printf("Double: %lf\n", myDouble);

    // A floating point number can also be 
    // a scientific number with an "e" to indicate the power of 10:
    float f1 = 35e3;
    double d1 = 12E4;

    printf("Scientific float: %f\n", f1);
    printf("Scientific double: %lf\n", d1);

    return 0;
}



// Output:
// 1000
// 5.750000
// 19.990000
// 35000.000000
// 120000.000000
// In this program, we declare a variable myInt with an integer value of 1000,
// and then print it using the %d format specifier.
// We then redeclare the same variable myFloat with a floating point value of 5.75,
// and print it using the %f format specifier.
// Finally, we redeclare the same variable myDouble with a double value of 19.99,
// and print it using the %lf format specifier.