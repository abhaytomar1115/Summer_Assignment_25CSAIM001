// Write a program to Find longest word.

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char longestWord[100];
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char *word = strtok(str, " \n");
    while (word != NULL) {
        int len = strlen(word);
        if (len > maxLength) {
            maxLength = len;
            strcpy(longestWord, word);
        }
        word = strtok(NULL, " \n");
    }

    printf("Longest word: %s\n", longestWord);
    return 0;
}
