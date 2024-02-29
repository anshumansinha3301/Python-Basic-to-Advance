#include <stdio.h>

int binarySearch(int arr[], int n, int searchValue) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == searchValue) {
            return mid;  // Element found, return its index
        } else if (arr[mid] < searchValue) {
            low = mid + 1;  // Search in the right half
        } else {
            high = mid - 1;  // Search in the left half
        }
    }

    return -1;  // Element not found
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the sorted elements of the array:\n");
    
    // Loop variable declaration moved outside the loop initializer
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int searchValue;
    printf("Enter the value to search: ");
    scanf("%d", &searchValue);

    int result = binarySearch(arr, n, searchValue);

    if (result != -1) {
        printf("Element %d found at index %d\n", searchValue, result);
    } else {
        printf("Element %d not found in the array\n", searchValue);
    }

    return 0;
}
