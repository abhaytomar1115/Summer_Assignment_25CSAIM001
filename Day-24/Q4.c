// Write a program to Remove duplicate characters.

#include <stdio.h>
#include <string.h>
void removeDuplicates(char *str) {
    int n = strlen(str);
    if (n == 0) {
        printf("\n");
        return;
    }
    int index = 0;
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                break;
            }
        }
        if (j == i) {
            str[index++] = str[i];
        }
    }
    str[index] = '\0';
    printf("%s\n", str);
}

int main(int argc, char **argv) {
    char s[1000];
    if (argc > 1) {
        removeDuplicates(argv[1]);
        return 0;
    }
    printf("Enter string: ");
    fflush(stdout);
    if (!fgets(s, sizeof s, stdin)) {
        fprintf(stderr, "No input provided\n");
        return 0;
    }
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') s[len - 1] = '\0';
    removeDuplicates(s);
    return 0;
}