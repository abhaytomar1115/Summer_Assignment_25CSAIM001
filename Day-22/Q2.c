// Write a program to Count words in a sentence.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, words = 0, inWord = 0;
    printf("Enter a sentence: ");
    if (fgets(str, sizeof(str), stdin) == NULL)
    {
        return 1;
    }
    str[strcspn(str, "\n")] = '\0';
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            if (!inWord)
            {
                words++;
                inWord = 1;
            }
        }
        else
        {
            inWord = 0;
        }
    }
    printf("Number of words in the sentence: %d\n", words);
    return 0;
}