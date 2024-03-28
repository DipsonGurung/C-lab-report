#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
    double radius, volume;

    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    volume = (4.0/3.0) * PI * radius * radius * radius;

    printf("Volume of the sphere: %.2lf\n", volume);

    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n");
    return 0;
}

