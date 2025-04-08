#include <stdio.h>

int findMaxProduct(int arr[], int n) {
    int max1 = -1e9, max2 = -1e9;   
    int min1 = 1e9, min2 = 1e9;     

    for (int i = 0; i < n; i++) {
        
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }

        
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }

    
    int product1 = max1 * max2;
    int product2 = min1 * min2;

    return (product1 > product2) ? product1 : product2;
}

int main() {
    int n;
    scanf("%d", &n); 

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    int maxProduct = findMaxProduct(arr, n);
    printf("%d", maxProduct); 
    return 0;
}