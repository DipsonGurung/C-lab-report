#include <stdio.h>
#include <string.h>

void compareStrings(char str1[], char str2[]) {
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("Both strings are equal.\n");
    } else if (result > 0) {
        printf("First string \"%s\" is larger.\n", str1);
    } else {
        printf("Second string \"%s\" is larger.\n", str2);
    }
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    compareStrings(str1, str2);
    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 
    return 0;
}

