// Write a program to Find common elements.

#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 5, 8, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Common elements: ");
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");

    return 0;
}