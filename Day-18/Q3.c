// Write a program to Binary search.

#include <stdio.h>

int binarySearch(int arr[], int target, int low, int high) {
    if (low > high) {
        return -1; // Element not found
    }
    int mid = (low + high) / 2;
    if (arr[mid] == target) {
        return mid; // Element found at index mid
    } else if (arr[mid] > target) {
        return binarySearch(arr, target, low, mid - 1); // Search in the left half
    } else {
        return binarySearch(arr, target, mid + 1, high); // Search in the right half
    }
}

int main() {
    int arr[] = {11, 22, 34, 64, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 34;
    int result = binarySearch(arr, target, 0, n - 1);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}