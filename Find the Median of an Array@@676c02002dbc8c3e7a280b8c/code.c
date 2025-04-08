#include <stdio.h>

// Function to sort the array
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Sort the array
    sortArray(array, n);

    // Find the median
    float median;
    if (n % 2 == 0) {
        median = (array[n / 2 - 1] + array[n / 2]) / 2.0; // Average of middle elements
    } else {
        median = array[n / 2]; // Middle element
    }

    printf("The median is: %.1f\n", median);

    return 0;
}