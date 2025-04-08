#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int countPrimes(int arr[], int N) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (isPrime(arr[i])) {
            count++; 
        }
    }
    return count;
}

int main() {
    int N;
    scanf("%d", &N); 

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); 
    }

    int primeCount = countPrimes(arr, N);
    printf("%d", primeCount); 

    return 0;
}