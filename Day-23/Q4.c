// Write a program to Find maximum occurring character.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[256] = {0};
    int i, maxFreq = 0;
    unsigned char maxChar = '\0';

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL)
    {
        return 1;
    }

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
    {
        unsigned char ch = (unsigned char)str[i];
        if (ch == ' ' || ch == '\t')
            continue;
        freq[ch]++;
        if (freq[ch] > maxFreq)
        {
            maxFreq = freq[ch];
            maxChar = ch;
        }
    }

    if (maxFreq == 0)
    {
        printf("No characters found in the string.\n");
    }
    else
    {
        printf("Maximum occurring character: %c\n", maxChar);
        printf("Frequency: %d\n", maxFreq);
    }

    return 0;
}

