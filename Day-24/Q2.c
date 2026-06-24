// Write a program to Compress a string.

#include <stdio.h>
#include <string.h>

void compressString(char *str) {
    int n = strlen(str);
    if (n == 0) {
        printf("\n");
        return;
    }
    char compressed[2 * n + 1];
    int j = 0;
    int count = 1;
    for (int i = 1; i <= n; ++i) {
        if (i < n && str[i] == str[i - 1]) {
            ++count;
        } else {
            compressed[j++] = str[i - 1];
            j += sprintf(compressed + j, "%d", count);
            count = 1;
        }
    }
    compressed[j] = '\0';
    if ((int)strlen(compressed) >= n) {
        printf("%s\n", str);
    } else {
        printf("%s\n", compressed);
    }
}

int main(int argc, char **argv) {
    char s[1000];
    if (argc > 1) {
        compressString(argv[1]);
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
    compressString(s);
    return 0;
}
