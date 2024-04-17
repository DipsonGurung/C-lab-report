#include <stdio.h>

void concatenateStrings(char str1[], char str2[]) {
    int len1 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }

    int i = 0;
    while (str2[i] != '\0') {
        str1[len1 + i] = str2[i];
        i++;
    }
    str1[len1 + i] = '\0';
}

int main() {
    char str1[100], str2[50];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    concatenateStrings(str1, str2);
    printf("Concatenated string: %s\n", str1);
    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 
    return 0;
}

