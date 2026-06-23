// Write a program to Check anagram strings.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strip_newline(char *str)
{
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }
}

int main()
{
    char str1[100], str2[100];
    int freq[256] = {0};
    int i;
    int count1 = 0, count2 = 0;

    printf("Enter first string: ");
    if (fgets(str1, sizeof(str1), stdin) == NULL)
    {
        return 1;
    }
    printf("Enter second string: ");
    if (fgets(str2, sizeof(str2), stdin) == NULL)
    {
        return 1;
    }

    strip_newline(str1);
    strip_newline(str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == ' ' || str1[i] == '\t')
            continue;
        freq[(unsigned char)tolower((unsigned char)str1[i])]++;
        count1++;
    }

    for (i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] == ' ' || str2[i] == '\t')
            continue;
        freq[(unsigned char)tolower((unsigned char)str2[i])]--;
        count2++;
    }

    if (count1 != count2)
    {
        printf("%s and %s are not anagram strings.\n", str1, str2);
        return 0;
    }

    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("%s and %s are not anagram strings.\n", str1, str2);
            return 0;
        }
    }

    printf("%s and %s are anagram strings.\n", str1, str2);
    return 0;
}   