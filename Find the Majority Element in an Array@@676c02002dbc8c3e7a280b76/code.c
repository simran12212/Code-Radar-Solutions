#include <stdio.h>

int findMajorityElement(int arr[], int n) {
    int count = 0, candidate = -1;


    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate;
    } else {
        return -1; 
    }
}

int main() {
    int n;
    scanf("%d", &n); 

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    int majorityElement = findMajorityElement(arr, n);
    if (majorityElement != -1) {
        printf("%d", majorityElement); 
    } else {
        printf("No majority element");
    }

    return 0;
}