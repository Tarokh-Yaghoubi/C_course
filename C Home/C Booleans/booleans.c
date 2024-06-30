#include <stdio.h>
#include <stdbool.h>

int main() {
    // Create boolean variables
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    // Return boolean values
    printf("%d \n", isProgrammingFun);   // Returns 1 (true)
    printf("%d", isFishTasty);        // Returns 0 (false)
}

// To compile the program, run the following command:
// gcc booleans.c -o booleans
// To run the program, run the following command:
// ./booleans
// Output:
// 1
// 0
// In this program, we create two boolean variables isProgrammingFun and isFishTasty using the bool data type from the stdbool.h header file.
// We assign the values true and false to these variables, respectively.
// When we print these variables using the %d format specifier, true is represented as 1 and false is represented as 0.
// Therefore, the output of the program will be 10, where 1 represents true and 0 represents false.
// The bool data type is used to store boolean values (true or false) in C.
// It is defined in the stdbool.h header file, which provides the bool, true, and false keywords.
// The bool data type is typically used in conditional statements and logical operations to represent true or false conditions.
// In this program, we demonstrate how to create boolean variables, assign values to them, and print their values using the %d format specifier.
// The output of the program shows that true is represented as 1 and false is represented as 0 when printed as integers.
// This behavior is consistent with the underlying representation of boolean values in C, where true is typically represented as 1 and false as 0.
// The bool data type is a useful addition to C, as it allows programmers to work with boolean values more intuitively and expressively.
// By using bool variables, programmers can write clearer and more readable code that reflects the true/false nature of logical conditions and decisions.
// The bool data type is a fundamental part of modern programming languages and is essential for writing robust and maintainable code in C.
