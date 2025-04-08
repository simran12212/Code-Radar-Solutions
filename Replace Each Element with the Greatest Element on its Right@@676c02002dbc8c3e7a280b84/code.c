#include <stdio.h>

void replaceWithGreatestOnRight(int arr[], int n) {
    int max = -1; 

    for (int i = n - 1; i >= 0; i--) {
        int current = arr[i];
        arr[i] = max; 
        if (current > max) {
            max = current; 
        }
    }
}

int main() {
    int n;
    scanf("%d", &n); 

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    replaceWithGreatestOnRight(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }

    return 0;
}