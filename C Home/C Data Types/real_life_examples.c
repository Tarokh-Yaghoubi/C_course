#include <stdio.h>

int main() {
   // Create variables of different data types
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';

    // Print variables
    printf("Number of items: %d\n", items);
    printf("Cost per item: %.2f %c\n", cost_per_item, currency);
    printf("Total cost = %.2f %c\n", total_cost, currency);

    return 0;
}

// To compile the program, run the following command:
// gcc real_life_examples.c -o real_life_examples
// To run the program, run the following command:
// ./real_life_examples
// Output:
// Number of items: 50
// Cost per item: 9.99 $
// Total cost = 499.50 $
// In this program, we declare variables to store the number of items, cost per item,
// total cost, and currency symbol. We then calculate the total cost by multiplying
// the number of items by the cost per item and print the variables using the appropriate format specifiers.
