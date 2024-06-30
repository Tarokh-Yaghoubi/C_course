#include <stdio.h>

int main() {
    // Automatic conversion: int to float
    float myFloat = 9;

    printf("%f", myFloat); // 9.000000

    // Manual conversion: int to float
    float sum = (float) 5 / 2;

    printf("%f", sum); // 2.500000

    return 0;
}



// To get the right result, you need to know how type conversion works.

// There are two types of conversion in C:

// Implicit Conversion (automatically)
// Explicit Conversion (manually)
// In the example above, we have two types of conversion:

// Automatic Conversion: int to float
// Manual Conversion: int to float

// Automatic Conversion
// In the first example, we assign an integer value to a float variable. This is an example of automatic conversion.
// When an integer is assigned to a float, the integer is automatically converted to a float by the compiler.
// In this case, the integer 9 is converted to a float 9.000000.

// Manual Conversion

// In the second example, we manually convert an integer to a float using a type cast.
// A type cast is a way to convert a variable from one data type to another data type.
// In this case, we convert the integer 5 to a float by using (float) 5.