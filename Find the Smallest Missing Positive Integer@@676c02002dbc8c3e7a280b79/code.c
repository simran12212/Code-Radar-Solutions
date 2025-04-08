#include <stdio.h>

int findSmallestMissingPositive(int arr[], int N) {
    int i;
    
    for (i = 0; i < N; i++) {
        if (arr[i] <= 0 || arr[i] > N) {
            arr[i] = N + 1;
        }
    }

    
    for (i = 0; i < N; i++) {
        int val = arr[i];
        if (val <= N && arr[val - 1] > 0) {
            arr[val - 1] = -arr[val - 1];
        }
    }

    
    for (i = 0; i < N; i++) {
        if (arr[i] > 0) {
            return i + 1;
        }
    }

    return N + 1; 
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); 
    }

    int result = findSmallestMissingPositive(arr, N);
    printf("%d", result); 

    return 0;
}