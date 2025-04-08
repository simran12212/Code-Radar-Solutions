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
    printf("");
    scanf("%d", &n);

    int array[n];
    printf("\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Sort the array
    sortArray(array, n);

    // Find the median
    int median;
    if (n % 2 == 0) {
        median = (array[n / 2 - 1] + array[n / 2]) / 2; // Integer division for average
    } else {
        median = array[n / 2]; // Middle element
    }

    printf("%d\n", median);

    return 0;
}