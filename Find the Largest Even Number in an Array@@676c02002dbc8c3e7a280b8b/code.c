#include <stdio.h>

int findLargestEven(int arr[], int size) {
    int largestEven = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0 && arr[i] > largestEven) {
            largestEven = arr[i];
        }
    }

    return largestEven;
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

    int result = findLargestEven(array, n);
    if (result != -1) {
        printf("%d\n", result);
    } else {
        printf("-1\n");
    }

    return 0;
}