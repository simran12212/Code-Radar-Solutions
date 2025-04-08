#include <stdio.h>
#include <stdlib.h> // Include this to use abs() function

// Function to compute the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    num = abs(num); // Take the absolute value to handle negative numbers
    while (num > 0) {
        sum += num % 10; // Add the last digit
        num /= 10;       // Remove the last digit
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n); // Read the number of elements

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read the array elements
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", sumOfDigits(arr[i])); // Print the sum of digits of each element
    }

    return 0;
}