#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) {
        return 0; // Numbers less than 2 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // If divisible, not prime
        }
    }
    return 1; // Number is prime
}

// Function to count primes in the array
int countPrimes(int arr[], int N) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (isPrime(arr[i])) {
            count++; // Increment count if the number is prime
        }
    }
    return count;
}

int main() {
    int N;
    scanf("%d", &N); // Read the size of the array

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    int primeCount = countPrimes(arr, N);
    printf("%d", primeCount); // Print the number of primes

    return 0;
}