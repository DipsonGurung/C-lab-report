#include <stdio.h>

int main() {
    float lengthInMM;
    float km, m, cm, mm;

    // Input length in millimeters
    printf("Enter the length in millimeters (mm): ");
    scanf("%f", &lengthInMM);

    // Convert length
    km = lengthInMM / 1000000; // 1 km = 1000000 mm
    //lengthInMM = lengthInMM % 1000000;
    m = lengthInMM / 1000; // 1 m = 1000 mm
    //lengthInMM = lengthInMM % 1000;
    cm = lengthInMM / 10; // 1 cm = 10 mm
   // mm = lengthInMM % 10; // Remainder in mm

    // Print converted lengths
    printf("\nLength in kilometers (km): %f km\n", km);
    printf("Length in meters (m): %f m\n", m);
    printf("Length in centimeters (cm): %f cm\n", cm);
    printf("Length in millimeters (mm): %f mm\n", lengthInMM);

    // Print Name and Roll No.
    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n");

    return 0;
}

