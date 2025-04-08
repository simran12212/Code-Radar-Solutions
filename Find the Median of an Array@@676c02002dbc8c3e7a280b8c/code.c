#include <stdio.h>


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

    
    sortArray(array, n);

    
    float median;
    if (n % 2 == 0) {
        median = (array[n / 2 - 1] + array[n / 2]) / 2.0; 
    } else {
        median = array[n / 2]; 
    }

    printf("\n", median);

    return 0;
}