// Write a program to Sort names alphabetically.

#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    printf("Enter number of names: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid number.\n");
        return 1;
    }
    getchar(); // consume newline

    char names[n][100];
    for (int i = 0; i < n; i++)
    {
        printf("Enter name %d: ", i + 1);
        if (fgets(names[i], sizeof(names[i]), stdin) == NULL)
        {
            return 1;
        }
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                char temp[100];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nSorted names alphabetically:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}

