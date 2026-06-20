// Write a program to Check symmetric matrix.

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

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int isSymmetric = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (a[i][j] != a[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
        {
            break;
        }
    }

    if (isSymmetric)
    {
        printf("The matrix is symmetric.\n");
    }
    else
    {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
