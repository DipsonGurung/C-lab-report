#include <stdio.h>

// Define structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Function to calculate days in given month of a given year
int daysInMonth(int month, int year) {
    switch (month) {
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                return 29; // Leap year
            else
                return 28;
        case 4: case 6: case 9: case 11:
            return 30;
        default:
            return 31;
    }
}

// Function to calculate difference in days between two dates
int differenceInDays(struct Date d1, struct Date d2) {
    int days = 0;
    // Iterate through years
    for (int year = d1.year; year < d2.year; year++) {
        // Add days in each month of the year
        for (int month = (year == d1.year ? d1.month : 1); month <= (year == d2.year ? d2.month : 12); month++) {
            days += daysInMonth(month, year);
        }
    }
    // Add remaining days in last month of final year
    days += d2.day - d1.day;
    return days;
}

int main() {
    // Declare Date structure variables
    struct Date date1 = {10, 3, 2020}; // First date
    struct Date date2 = {25, 5, 2021}; // Second date

    // Calculate difference in days between two dates
    int difference = differenceInDays(date1, date2);

    // Display difference in days
    printf("Difference in days: %d\n", difference);

    return 0;
}

