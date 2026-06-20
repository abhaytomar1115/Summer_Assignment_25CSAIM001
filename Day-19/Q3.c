// Write a program to Transpose matrix.

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

    int a[10][10], transposed[10][10];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transposed[j][i] = a[i][j];
        }
    }

    printf("Transposed matrix:\n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
