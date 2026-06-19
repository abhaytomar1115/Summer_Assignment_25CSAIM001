// Write a program to Intersection of arrays.

#include <stdio.h>
#include <stdlib.h>

// Comparison function needed for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Function to find the intersection of two arrays
// 'resultSize' is a pointer used to return the size of the output array
int* getIntersection(int* arr1, int size1, int* arr2, int size2, int* resultSize) {
    // 1. Sort both arrays to use the two-pointer technique
    qsort(arr1, size1, sizeof(int), compare);
    qsort(arr2, size2, sizeof(int), compare);

    // Allocate memory for the maximum possible intersection size
    int maxSize = (size1 < size2) ? size1 : size2;
    int* intersection = (int*)malloc(maxSize * sizeof(int));
    
    int i = 0, j = 0, k = 0;

    // 2. Use two pointers to find common, unique elements
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            // Found a match. Check if it is a duplicate of the last added element.
            if (k == 0 || intersection[k - 1] != arr1[i]) {
                intersection[k] = arr1[i];
                k++;
            }
            i++;
            j++;
        }
    }

    *resultSize = k; // Set the actual size of the intersection array
    return intersection;
}

int main() {
    int nums1[] = {4, 9, 5};
    int nums2[] = {9, 4, 9, 8, 4};
    
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int resultSize = 0;

    // Call the intersection function
    int* result = getIntersection(nums1, size1, nums2, size2, &resultSize);

    // Print the results
    printf("Intersection: [");
    for (int i = 0; i < resultSize; i++) {
        printf("%d", result[i]);
        if (i < resultSize - 1) {
            printf(", ");
        }
    }
    printf("]\n"); // Output: [4, 9]

    // Free the dynamically allocated memory
    free(result);

    return 0;
}

