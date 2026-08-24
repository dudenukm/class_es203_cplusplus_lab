#include <iostream>

bool isNumberPalindrome(int num) {

    if (num < 0) return false; 

    int original = num;
    long long reversed = 0; 

    while (num > 0) {
        int digit = num % 10;        
        reversed = reversed * 10 + digit; 
        num /= 10;                    
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