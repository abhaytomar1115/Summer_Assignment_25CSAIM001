//Write a program to Count vowels and consonants.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    for (size_t i = 0; i < strlen(str); ++i) {
        char ch = str[i];
        if (isalpha((unsigned char)ch)) {
            switch (tolower((unsigned char)ch)) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    vowels++;
                    break;
                default:
                    consonants++;
                    break;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}