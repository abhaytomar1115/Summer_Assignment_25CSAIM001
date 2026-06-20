// Write a program to Subtract matrices.

#include <stdio.h>

int main(void)
{
    int rows, cols;
    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0)
    {
        printf("Invalid matrix size\n");
        return 1;
    }

    int a[10][10], b[10][10], diff[10][10];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Difference of the two matrices:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
