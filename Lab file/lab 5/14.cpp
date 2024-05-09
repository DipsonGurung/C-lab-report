#include <stdio.h>
#include <string.h>

// Define structure for airline flight data
struct Flight {
    int flightNumber;
    char origin[4];        // Originating airport code
    char destination[4];   // Destination airport code
    int startTime;         // Starting time
    int arrivingTime;      // Arriving time
};

int main() {
    // Declare array of structures for flight data
    struct Flight flights[10];
    int n;

    // Read number of flights
    printf("Enter the number of flights: ");
    scanf("%d", &n);

    // Read flight information
    printf("Enter flight information:\n");
    for (int i = 0; i < n; i++) {
        printf("Flight %d:\n", i + 1);
        printf("Flight number: ");
        scanf("%d", &flights[i].flightNumber);
        printf("Originating airport code: ");
        scanf("%s", flights[i].origin);
        printf("Destination airport code: ");
        scanf("%s", flights[i].destination);
        printf("Starting time: ");
        scanf("%d", &flights[i].startTime);
        printf("Arriving time: ");
        scanf("%d", &flights[i].arrivingTime);
    }

    // Read airport code from user
    char airport[4];
    printf("\nEnter the airport code to get flight information: ");
    scanf("%s", airport);

    // Print flight information for the specified airport
    printf("\nFlight information for airport %s:\n", airport);
    for (int i = 0; i < n; i++) {
        if (strcmp(flights[i].origin, airport) == 0 || strcmp(flights[i].destination, airport) == 0) {
            printf("Flight number: %d, Origin: %s, Destination: %s, Departure: %d, Arrival: %d\n", 
                    flights[i].flightNumber, flights[i].origin, flights[i].destination,
                    flights[i].startTime, flights[i].arrivingTime);
        }
    }

    return 0;
}

