#include <stdio.h>

int main() {

    FILE *file;
    char ch;
    
    // Open the file in read mode
    file = fopen("example.txt", "r");
    
    // Check if the file exists
    if (file == NULL) {
        printf("File does not exist.\n");
        return 1;
    }
    
    // Read and print the contents of the file
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }
    
    // Close the file
    fclose(file);
    
    return 0;
}

// To compile the program, run the following command:
// gcc read_file.c -o read_file
// To run the program, run the following command:
// ./read_file
// Output:
// This is an example file.
// It contains some text.
// In this program, we open a file named example.txt in read mode using the fopen() function.
// We check if the file exists by verifying if the file pointer is NULL.
// If the file does not exist, we print an error message and return from the program.
// If the file exists, we read and print the contents of the file character by character using the fgetc() function.
// We continue reading characters until we reach the end of the file (EOF).
// Finally, we close the file using the fclose() function to release system resources.
// You can modify the file name and mode in the fopen() function to read files with different names and modes.
// For example, "w" for write mode, "a" for append mode, "r+" for read/write mode, etc.
// You can also read data from the file using other file I/O functions like fgets(), fscanf(), etc.
// Remember to close the file using fclose() after reading data from it to release system resources.