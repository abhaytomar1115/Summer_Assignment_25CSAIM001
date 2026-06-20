// Write a program to Multiply matrices.

#include <stdio.h>

int main(void)
{
    int rows1, cols1, rows2, cols2;
    int a[10][10], b[10][10], product[10][10];

    printf("Enter number of rows and columns for first matrix: ");
    if (scanf("%d %d", &rows1, &cols1) != 2 || rows1 <= 0 || cols1 <= 0)
    {
        printf("Invalid matrix size\n");
        return 1;
    }

    printf("Enter number of rows and columns for second matrix: ");
    if (scanf("%d %d", &rows2, &cols2) != 2 || rows2 <= 0 || cols2 <= 0)
    {
        printf("Invalid matrix size\n");
        return 1;
    }

    if (cols1 != rows2)
    {
        printf("Matrix multiplication not possible: columns of first must equal rows of second\n");
        return 1;
    }

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            product[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}

