#include <iostream>

// Function to reverse the digits of a number
int reverseNumber(int n) {
    int reversedNumber = 0;

    // Loop to reverse the digits
    while (n != 0) {
        int digit = n % 10;    // Extract the last digit
        reversedNumber = reversedNumber * 10 + digit;  // Append the digit to the reversed number
        n /= 10;  // Remove the last digit
    }

    return reversedNumber;
}

int main() {
    int n;

    // Input the number
    std::cout << "Enter an integer: ";
    std::cin >> n;

    // Reverse the number
    int reversedNumber = reverseNumber(n);

    // Output the reversed number
    std::cout << "Reversed number: " << reversedNumber << std::endl;

    return 0;
}
