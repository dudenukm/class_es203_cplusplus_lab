#include <iostream>

bool isNumberPalindrome(int num) {
    // Negative numbers are not palindromes (e.g., -121 reversed is 121-)
    if (num < 0) return false; 

    int original = num;
    long long reversed = 0; // Use long long to prevent integer overflow

    while (num > 0) {
        int digit = num % 10;         // Get the last digit
        reversed = reversed * 10 + digit; // Append the digit
        num /= 10;                    // Remove the last digit
    }

    return original == reversed;
}

int main() {
    int number = 12321;

    if (isNumberPalindrome(number)) {
        std::cout << number << " is a palindrome." << std::endl;
    } else {
        std::cout << number << " is not a palindrome." << std::endl;
    }
    return 0;
}