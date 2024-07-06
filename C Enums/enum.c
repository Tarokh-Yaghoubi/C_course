#include <stdio.h>

// Define an enum for days of the week
typedef enum {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
} DayOfWeek;

// Function prototypes
void printDay(DayOfWeek day);
int isWeekend(DayOfWeek day);

int main() {
    DayOfWeek today = WEDNESDAY;
    DayOfWeek holiday = SATURDAY;

    // Print the current day
    printf("Today is: ");
    printDay(today);

    // Check if today is a weekend
    if (isWeekend(today)) {
        printf("Today is a weekend.\n");
    } else {
        printf("Today is a weekday.\n");
    }

    // Print the holiday day
    printf("Holiday is: ");
    printDay(holiday);

    // Check if the holiday is a weekend
    if (isWeekend(holiday)) {
        printf("Holiday is a weekend.\n");
    } else {
        printf("Holiday is a weekday.\n");
    }

    return 0;
}

// Function to print the name of the day
void printDay(DayOfWeek day) {
    switch (day) {
        case SUNDAY:    printf("Sunday\n"); break;
        case MONDAY:    printf("Monday\n"); break;
        case TUESDAY:   printf("Tuesday\n"); break;
        case WEDNESDAY: printf("Wednesday\n"); break;
        case THURSDAY:  printf("Thursday\n"); break;
        case FRIDAY:    printf("Friday\n"); break;
        case SATURDAY:  printf("Saturday\n"); break;
        default:        printf("Invalid day\n"); break;
    }
}

// Function to check if the day is a weekend
int isWeekend(DayOfWeek day) {
    return (day == SATURDAY || day == SUNDAY);
}

// To compile the program, run the following command:
// gcc enum.c -o enum
// To run the program, run the following command:
// ./enum
// Output:
// Today is: Wednesday
// Today is a weekday.
// Holiday is: Saturday
// Holiday is a weekend.
// In this program, we define an enum called DayOfWeek with the days of the week as its members.
// We then declare two variables today and holiday of type DayOfWeek and assign them values of WEDNESDAY and SATURDAY, respectively.
// We use the printDay() function to print the name of the day and the isWeekend() function to check if the day is a weekend.
