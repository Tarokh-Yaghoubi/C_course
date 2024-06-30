#include <stdio.h>
#include <stdlib.h>

struct list {
  int *data; // Points to the memory where the list items are stored
  int numItems; // Indicates how many items are currently in the list
  int size; // Indicates how many items fit in the allocated memory
};

void addToList(struct list *myList, int item);

int main() {
  struct list myList;
  int amount;

  // Create a list and start with enough space for 10 items
  myList.numItems = 0;
  myList.size = 10;
  myList.data = malloc(myList.size * sizeof(int));

  // Find out if memory allocation was successful
  if (myList.data == NULL) {
    printf("Memory allocation failed");
    return 1; // Exit the program with an error code
  }

  // Add any number of items to the list specified by the amount variable
  amount = 44;
  for (int i = 0; i < amount; i++) {
    addToList(&myList, i + 1);
  }

  // Display the contents of the list
  for (int j = 0; j < myList.numItems; j++) {
    printf("%d ", myList.data[j]);
  }

  // Free the memory when it is no longer needed
  free(myList.data);
  myList.data = NULL;

  return 0;
}

// This function adds an item to a list
void addToList(struct list *myList, int item) {

  // If the list is full then resize the memory to fit 10 more items
  if (myList->numItems == myList->size) {
    myList->size += 10;
    myList->data = realloc( myList->data, myList->size * sizeof(int) );
  }

  // Add the item to the end of the list
  myList->data[myList->numItems] = item;
  myList->numItems++;
}

// To compile the program, run the following command:
// gcc example.c -o example
// To run the program, run the following command:
// ./example
// Output:
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44
// In this program, we define a struct list that represents a list of integers.
// The struct contains three members: data, numItems, and size.
// The data member is a pointer to the memory where the list items are stored.
// The numItems member indicates how many items are currently in the list.
// The size member indicates how many items fit in the allocated memory.
// We define a function addToList that adds an item to the list.
// If the list is full, the function resizes the memory to fit 10 more items using realloc.
// In the main function, we create a list with enough space for 10 items and add 44 items to the list.
// We then display the contents of the list and free the allocated memory when it is no longer needed.
// The output of the program will show the numbers 1 to 44, which were added to the list using the addToList function.
// The program demonstrates dynamic memory allocation and resizing of memory blocks in C.
// The realloc function can be used to resize dynamically allocated memory blocks, preserving the existing data if possible.
// If the reallocation is successful, the original memory block is freed, and a new memory block is returned with the requested size.
// If the reallocation fails, the original memory block remains unchanged, and NULL is returned.
// The realloc function can be used to increase or decrease the size of a dynamically allocated memory block.
// If the new size is larger than the original size, the additional memory is uninitialized.
// If the new size is smaller than the original size, the excess memory is freed.
// It is important to check the return value of realloc to handle cases where the reallocation fails.
// The realloc function can be used to resize dynamically allocated memory blocks, preserving the existing data if possible.
// If the reallocation is successful, the original memory block is freed, and a new memory block is returned with the requested size.
// If the reallocation fails, the original memory block remains unchanged, and NULL is returned.
// The realloc function can be used to increase or decrease the size of a dynamically allocated memory block.

