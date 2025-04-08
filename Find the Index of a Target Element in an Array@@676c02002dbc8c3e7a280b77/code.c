#include <stdio.h>

int main() {
    int n, target, i;
    scanf("%d", &n); 

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    scanf("%d", &target); 
    int index = -1; 
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i; 
            break;     
        }
    }

    printf("%d", index); 

    return 0;
}