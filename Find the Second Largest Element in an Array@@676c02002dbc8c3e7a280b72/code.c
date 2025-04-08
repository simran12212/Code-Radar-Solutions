#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N); 

    int arr[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]); 
    }

    
    int largest = arr[0];
    for (i = 1; i < N; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    
    int second_largest = -1e9; 
    for (i = 0; i < N; i++) {
        if (arr[i] != largest && arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }

    printf("%d", second_largest); 

    return 0;

}