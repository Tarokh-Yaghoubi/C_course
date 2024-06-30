#include <stdio.h>

int main() {
    FILE *fptr; // Declare a file pointer
    char text[50]; // Declare a character array to store text

    // Open the file in write mode
    fptr = fopen("output.txt", "w");

    // Check if the file was opened successfully
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write text to the file
    fprintf(fptr, "This is some text written to the file.\n");

    // Close the file
    fclose(fptr);

    printf("File written successfully!\n");

    return 0;
}

// To compile the program, run the following command:
// gcc write_file.c -o write_file
// To run the program, run the following command:
// ./write_file
// Output:
// File written successfully!
// This program opens a file named output.txt in write mode using the fopen() function.
// It then checks if the file was opened successfully by verifying if the file pointer is NULL.
// If the file opening fails, an error message is printed, and the program exits with a return code of 1.
// If the file opening is successful, the program writes the text "This is some text written to the file." to the file using the fprintf() function.
// Finally, the program closes the file using the fclose() function to release system resources.
// You can modify the file name and mode in the fopen() function to write to files with different names and modes.
// For example, "a" for append mode, "r" for read mode, "r+" for read/write mode, etc.
// You can also write data to the file using other file I/O functions like fputs(), fputc(), etc.