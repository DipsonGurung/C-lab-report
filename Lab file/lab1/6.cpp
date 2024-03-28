//Write a program to convert entered number of seconds into hours, minutes and seconds.

#include <stdio.h>

int main() {
    int inputSeconds, hours, minutes, seconds, remainingSeconds;
    int secondsInHour = 60 * 60;
    int secondsInMinute = 60;

    printf("Enter the seconds value: ");
    scanf("%d", &inputSeconds);

    hours = inputSeconds / secondsInHour;
    remainingSeconds = inputSeconds - (hours * secondsInHour);
    minutes = remainingSeconds / secondsInMinute;
    remainingSeconds = remainingSeconds - (minutes * secondsInMinute);
    seconds = remainingSeconds;

    printf("%d hour, %d minutes, and %d seconds\n", hours, minutes, seconds);

    // Additional information
    printf("\nName: Dipson Gurung (BSc.CSIT)\nRoll no.: 16\n");

    return 0;
}

