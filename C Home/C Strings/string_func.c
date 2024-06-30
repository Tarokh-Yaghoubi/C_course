#include <stdio.h>
#include <string.h>

int main() {
    char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Length of alphabet: %zu\n", strlen(alphabet));   // 26
    printf("Size of alphabet array: %zu\n", sizeof(alphabet));   // 50

    char str1[20] = "Hello ";
    char str2[] = "World!";

    // Ensure str1 has enough space to concatenate str2
    if (strlen(str1) + strlen(str2) < sizeof(str1)) {
        // Concatenate str2 to str1 (result is stored in str1)
        strcat(str1, str2);
    } else {
        printf("Not enough space to concatenate str2 to str1\n");
    }

    // Print str1
    printf("Concatenated string: %s\n", str1);

    return 0;
}

// To compile the program, run the following command:
// gcc string_func.c -o string_func
// To run the program, run the following command:
// ./string_func
// Output:
// 26
// 50
// Hello World!
// In this program, we declare a character array alphabet with a size of 50 and initialize it with the string "ABCDEFGHIJKLMNOPQRSTUVWXYZ".
// We then use the strlen function to calculate the length of the string stored in the alphabet array, which is 26 characters.
// Next, we use the sizeof operator to calculate the total size of the alphabet array, which is 50 bytes.
// We then declare two character arrays str1 and str2 and initialize them with the strings "Hello " and "World!" respectively.
// We concatenate the string stored in str2 to the string stored in str1 using the strcat function, which appends str2 to the end of str1.
// Finally, we print the concatenated string str1 using the %s format specifier in the printf function, which outputs "Hello World!".
