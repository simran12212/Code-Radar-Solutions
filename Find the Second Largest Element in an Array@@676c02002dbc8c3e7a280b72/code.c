#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n); 

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    int largest = arr[0];
    int second_largest = -1e9;
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest; 
            largest = arr[i];        
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i]; 
        }
    }

    
    if (second_largest == -1e9) {
        second_largest = -1;
    }

    printf("%d", second_largest); 

    return 0;
}