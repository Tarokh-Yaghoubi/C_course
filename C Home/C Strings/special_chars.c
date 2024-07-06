#include <stdio.h>

int main() {
    // String with special characters
    char str[] = "Special characters demonstration:\n";
    
    // Appending single quote, double quote, and backslash
    char specialChars[] = "\'Single quote\', \"Double quote\", \\Backslash\\";
    
    // String with new line, tab, and null character
    char formatChars[] = "\nNew Line\n\tTab\nNull Character\\0";
    
    // Null character within a string
    char strWithNull[] = "Hello\0World";
    
    // Printing the strings
    printf("%s", str);
    printf("%s\n", specialChars);
    printf("%s\n", formatChars);
    printf("String with null character: %s (The part after \\0 is not printed)\n", strWithNull);

    return 0;
}


// To compile the program, run the following command:
// gcc special_chars.c -o special_chars
// To run the program, run the following command:
// ./special_chars
// Output:
// Special characters demonstration:
// 'Single quote', "Double quote", \Backslash\
// New Line
// 	Tab
// Null Character\0
// String with null character: Hello (The part after \0 is not printed)
// In this program, we demonstrate the use of special characters in C strings.
// We define strings with single quotes, double quotes, backslashes, new lines, tabs, and null characters.
// We print these strings using the printf function with the %s format specifier.
// The output of the program will show the special characters in the strings.
// Note that the null character (\0) is used to terminate C strings, and any characters after it are not printed.
// The null character is automatically added to the end of string literals in C.
// The special characters are used to represent characters that cannot be easily typed or displayed directly in a string.
// They are represented by escape sequences starting with a backslash (\).
// Some common escape sequences include:
// \' - Single quote
// \" - Double quote
// \\ - Backslash
// \n - New line
// \t - Tab
// \0 - Null character
// The null character (\0) is used to terminate C strings and is automatically added to the end of string literals in C.
// Any characters after the null character are not printed when the string is displayed.
