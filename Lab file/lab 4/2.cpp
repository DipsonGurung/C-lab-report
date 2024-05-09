#include <stdio.h>

// Function prototype
int findLargest(int a, int b, int c);

int main() {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Largest among %d, %d, and %d is %d\n", x, y, z, findLargest(x, y, z));

    return 0;
}

int findLargest(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

