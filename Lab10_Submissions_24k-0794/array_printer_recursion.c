#include <stdio.h>

void printArrayRecursive(int arr[], int size) {
    if (size == 0) {
        return;
    }
    printf("%d ", arr[0]);
    printArrayRecursive(arr + 1, size - 1);
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are: ");
    printArrayRecursive(arr, size);

    return 0;
}
