#include <stdio.h>

void findPairs(int arr[], int N, int T) {
    // Sort the array to ensure uniqueness
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Find unique pairs
    for (int i = 0; i < N - 1; i++) {
        if (i > 0 && arr[i] == arr[i - 1]) {  // Skip duplicates
            continue;
        }
        for (int j = i + 1; j < N; j++) {
            if (j > i + 1 && arr[j] == arr[j - 1]) {  // Skip duplicates
                continue;
            }
            if (arr[i] + arr[j] == T) {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int N, T;

    // Read the size of the array
    scanf("%d", &N);
    int arr[N];
    
    // Read array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read the target sum
    scanf("%d", &T);
    
    // Find and print unique pairs
    findPairs(arr, N, T);
    
    return 0;
}