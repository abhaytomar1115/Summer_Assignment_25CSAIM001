// Write a program to Frequency of an element.

#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 30, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 30;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }

    printf("Frequency of %d is %d\n", x, count);
    return 0;
}