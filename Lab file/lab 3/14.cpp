#include <stdio.h>
#include <string.h>

// Function to find length of string without using library function strlen()
int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    // Using library function strlen()
    int len1 = strlen(str);
    printf("Length using strlen(): %d\n", len1);

    // Without using library function strlen()
    int len2 = stringLength(str);
    printf("Length without using strlen(): %d\n", len2);
printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 
    return 0;
}

