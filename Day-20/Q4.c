// Write a program to Find column-wise sum.

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

    int a[10][10];
    long long colSum[10];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int j = 0; j < cols; j++)
    {
        colSum[j] = 0;
        for (int i = 0; i < rows; i++)
        {
            colSum[j] += a[i][j];
        }
    }

    printf("Column-wise sums:\n");
    for (int j = 0; j < cols; j++)
    {
        printf("Column %d: %lld\n", j + 1, colSum[j]);
    }

    return 0;
}
