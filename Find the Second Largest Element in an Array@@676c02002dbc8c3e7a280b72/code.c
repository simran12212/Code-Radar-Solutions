#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N); 

    int arr[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]); 
    }

    
    int largest = -1e9, second_largest = -1e9; 

    for (i = 0; i < N; i++) {
        if (arr[i] > largest) {
            second_largest = largest; 
            largest = arr[i];         
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i]; 
        }
    }

    printf("%d", second_largest); 

    return 0;
}