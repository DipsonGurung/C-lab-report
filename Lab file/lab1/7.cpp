//7.	Write a program to convert entered number of days into years, months and days.
#include <stdio.h>

int main() {
    int inputDays, years, months, days;
    const int daysInYear = 365;
    const int daysInMonth = 30; // Approximate value for simplicity

    printf("Enter the number of days: ");
    scanf("%d", &inputDays);

    // Calculate years
    years = inputDays / daysInYear;

    // Calculate remaining days after considering years
    int remainingDays = inputDays - (years * daysInYear);

    // Calculate months
    months = remainingDays / daysInMonth;

    // Calculate remaining days after considering months
    days = remainingDays - (months * daysInMonth);

    // Display the result
    printf("Years: %d, Months: %d, Days: %d\n", years, months, days);

    // Additional information
    printf("\nName: Dipson Gurung (BSc.CSIT)\nRoll no.: 16\n");

    return 0;
}

