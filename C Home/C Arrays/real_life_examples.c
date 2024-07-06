#include <stdio.h>

int main() {
    // An array storing different ages
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    float avg, sum = 0;
    int i;

    // Get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);

    // Loop through the elements of the array
    for (i = 0; i < length; i++) {
    sum += ages[i];
    }

    // Calculate the average by dividing the sum by the length
    avg = sum / length;

    // Print the average
    printf("The average age is: %.2f", avg);
}

// To compile the program, run the following command:
// gcc real_life_examples.c -o real_life_examples
// To run the program, run the following command:
// ./real_life_examples
// Output:
// The average age is: 39.50
// In this program, we have an array named ages that stores the ages of different people.
// We calculate the average age by summing up all the ages in the array and dividing the sum by the length of the array.
// We use a for loop to iterate through the elements of the array and calculate the sum of all the ages.
// We then calculate the average by dividing the sum by the length of the array.
// Finally, we print the average age using the printf function with the %f format specifier to display the average with two decimal places.
