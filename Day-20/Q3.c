// Write a program to Find row-wise sum.

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
    long long rowSum[10];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        rowSum[i] = 0;
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
            rowSum[i] += a[i][j];
        }
    }

    printf("Row-wise sums:\n");
    for (int i = 0; i < rows; i++)
    {
        printf("Row %d: %lld\n", i + 1, rowSum[i]);
    }

    return 0;
}
