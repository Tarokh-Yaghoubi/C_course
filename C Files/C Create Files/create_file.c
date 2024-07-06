#include <stdio.h>

int main() {
    FILE *fptr;

    // Create a file
    fptr = fopen("filename.txt", "w");

    // Close the file
    fclose(fptr);
}

// To compile the program, run the following command:
// gcc create_file.c -o create_file
// To run the program, run the following command:
// ./create_file
// This program creates a file named filename.txt using the fopen() function with the mode "w" (write mode).
// The file is then closed using the fclose() function.
// If the file already exists, it will be overwritten with an empty file.
// If the file does not exist, it will be created.
// You can check the existence of the file by looking for filename.txt in the current directory.
// If you want to create the file in a specific directory, you can provide the full path in the fopen() function.
// For example, fopen("/path/to/directory/filename.txt", "w") will create the file in the specified directory.
// You can also check the return value of fopen() to handle errors or check if the file was successfully created.
// If fopen() returns NULL, it means the file creation failed. You can print an error message or handle the error accordingly.
// For example:
// if (fptr == NULL) {
//     printf("Error creating file\n");
//     return 1;
// }
// This code snippet checks if the file creation was successful and prints an error message if it failed.
// You can modify the file name and mode in the fopen() function to create files with different names and modes.
// For example, "a" for append mode, "r" for read mode, "r+" for read/write mode, etc.
// You can also write data to the file using fprintf() or other file I/O functions after creating the file.
// For example, fprintf(fptr, "Hello, world!\n") will write the string "Hello, world!" to the file.
// Remember to close the file using fclose() after writing data to it to ensure that the data is saved properly.
// You can also check the return value of fclose() to handle errors or check if the file was successfully closed.
// If fclose() returns 0, it means the file was closed successfully. If it returns EOF, an error occurred while closing the file.

