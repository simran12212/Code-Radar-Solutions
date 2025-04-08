#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int original = num, reversed = 0;

    while (num > 0) {
        int digit = num % 10;     // Extract the last digit
        reversed = reversed * 10 + digit; // Construct the reversed number
        num /= 10;                // Remove the last digit
    }

    return original == reversed; // Check if the number is a palindrome
}

// Function to count palindromic numbers in an array
int countPalindromicNumbers(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) {
            count++; // Increment count if the number is a palindrome
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n); // Read the size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read the array elements
    }

    int result = countPalindromicNumbers(arr, n);
    printf("%d", result); // Output the count of palindromic numbers

    return 0;
}