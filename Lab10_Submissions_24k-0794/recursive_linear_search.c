#include <stdio.h>

int linearSearch(int arr[], int size, int target, int index) {
    if (index >= size) {
        return -1; // Target not found
    }
    if (arr[index] == target) {
        return index; // Target found
    }
    return linearSearch(arr, size, target, index + 1); // Continue searching
}

int main() {
    int size, target;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element to search for: ");
    scanf("%d", &target);

    int result = linearSearch(arr, size, target, 0);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
