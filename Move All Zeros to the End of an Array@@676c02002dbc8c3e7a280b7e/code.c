#include <stdio.h>

void moveZeroesToEnd(int arr[], int n) {
    int index = 0; 

    
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    
    while (index < n) {
        arr[index++] = 0;
    }
}

int main() {
    int n;
    scanf("%d", &n); 

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    moveZeroesToEnd(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }

    return 0;
}