#include <stdio.h>

void rotateRight(int arr[], int N, int K) {
    K = K % N; 
    int temp[N];

    
    for (int i = 0; i < N; i++) {
        temp[(i + K) % N] = arr[i];
    }

    
    for (int i = 0; i < N; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int N, K;
    scanf("%d", &N); 

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); 
    }

    scanf("%d", &K); 

    rotateRight(arr, N, K);

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]); 
    }

    return 0;
}