#include <stdio.h>

// Define structure for Date
struct Date {
    int day;
    int month;
    int year;
};

int main() {
    // Declare and initialize Date structure variable
    struct Date Date1 = {25, 2, 1957};

    // Display initialized date
    printf("Date: %02d-%02d-%d\n", Date1.day, Date1.month, Date1.year);

    return 0;
}

