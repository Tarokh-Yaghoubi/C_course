#include <stdio.h>

// Create a structure called myStructure
struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  // Create a structure variable of myStructure called s1
  struct myStructure s1;

  // Assign values to members of s1
  s1.myNum = 13;
  s1.myLetter = 'B';

  // Print values
  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);

  return 0;
}

// To compile the program, run the following command:
// gcc structure.c -o structure
// To run the program, run the following command:
// ./structure
// Output:
// My number: 13
// My letter: B
// In this program, we define a structure called myStructure with two members: myNum and myLetter.
// We create a structure variable s1 of type myStructure and assign values to its members.
// We then print the values of the members using the printf() function and appropriate format specifiers.
// Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.