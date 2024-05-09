#include <stdio.h>

// Define structure for Date
struct Date {
    int day;
    int month;
    int year;
};

int main() {
    // Declare Date structure variable
    struct Date date;

    // Read date from user
    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &date.day, &date.month, &date.year);

    // Print entered date
    printf("Entered date: %02d-%02d-%d\n", date.day, date.month, date.year);

    return 0;
}

