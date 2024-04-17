#include <stdio.h>
#include <ctype.h>

int countVowels(char str[]) {
    int vowels = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }
    return vowels;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Number of vowels: %d\n", countVowels(str));
    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 
    return 0;
}

