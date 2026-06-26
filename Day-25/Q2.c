// Write a program to Find common characters in strings.

#include <stdio.h>
#include <string.h>

void findCommonCharacters(char *str1, char *str2)
{
    int count[256] = {0};
    for (int i = 0; str1[i] != '\0'; i++)
    {
        count[(unsigned char)str1[i]]++;
    }

    printf("Common characters: ");
    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (count[(unsigned char)str2[i]] > 0)
        {
            printf("%c ", str2[i]);
            count[(unsigned char)str2[i]] = 0; // To avoid printing duplicates
        }
    }
    printf("\n");
}

int main(void)
{
    char str1[256];
    char str2[256];

    printf("Enter the first string:\n");
    if (fgets(str1, sizeof(str1), stdin) == NULL)
    {
        return 1;
    }
    printf("Enter the second string:\n");
    if (fgets(str2, sizeof(str2), stdin) == NULL)
    {
        return 1;
    }

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    findCommonCharacters(str1, str2);
    return 1;
}
