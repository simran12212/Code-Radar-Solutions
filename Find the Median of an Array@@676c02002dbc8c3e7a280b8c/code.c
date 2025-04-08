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
    int N;
    printf("");
    scanf("%d", &N);

    int array[N];
    printf("\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    // Sort the array
    sortArray(array, N);

    // Find the median
    int median;
    if (N % 2 == 0) {
        median = (array[N / 2 - 1] + array[n / 2]) / 2; // Integer division for average
    } else {
        median = array[N / 2]; // Middle element
    }

    printf("%d", median);

    return 0;
}