// Write a program to Merge two sorted arrays.

#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[])
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }
    while (i < n1)
    {
        merged[k++] = arr1[i++];
    }
    while (j < n2)
    {
        merged[k++] = arr2[j++];
    }
}

int main(void)
{
    int n1, n2;

    printf("Enter the size of the first sorted array: ");
    if (scanf("%d", &n1) != 1 || n1 < 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    int arr1[n1];
    printf("Enter %d elements of the first sorted array in ascending order:\n", n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second sorted array: ");
    if (scanf("%d", &n2) != 1 || n2 < 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    int arr2[n2];
    printf("Enter %d elements of the second sorted array in ascending order:\n", n2);
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];
    mergeArrays(arr1, n1, arr2, n2, merged);

    printf("Merged sorted array:\n");
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
