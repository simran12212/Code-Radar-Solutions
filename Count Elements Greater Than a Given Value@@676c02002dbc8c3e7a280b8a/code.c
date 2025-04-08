#include <stdio.h>

int countElementsGreaterThanValue(int arr[], int n, int value) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > value) {
            count++; // Increment count if the element is greater than the given value
        }
    }
    return count;
}

int main() {
    int n, value;
    scanf("%d %d", &n, &value); // Read the size of the array and the given value

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read the array elements
    }

    int result = countElementsGreaterThanValue(arr, n, value);
    printf("%d", result); // Output the count of elements greater than the value

    return 0;
}