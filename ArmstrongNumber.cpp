#include <iostream>
#include <cmath>

// Function to check if a number is an Armstrong number
bool isArmstrong(int n) {
    // Ensure the number is a 3-digit number
    if (n < 100 || n > 999) {
        return false;
    }

    int originalNumber = n;
    int sum = 0;

    // Extract digits and compute the sum of their cubes
    while (n > 0) {
        int digit = n % 10;
        sum += std::pow(digit, 3);
        n /= 10;
    }

    // Check if the sum of cubes is equal to the original number
    return sum == originalNumber;
}

int main() {
    int n;

    // Input the 3-digit number
    std::cout << "Enter a 3-digit number: ";
    std::cin >> n;

    // Check if the number is an Armstrong number and output the result
    if (isArmstrong(n)) {
        std::cout << n << " is an Armstrong number." << std::endl;
    } else {
        std::cout << n << " is not an Armstrong number." << std::endl;
    }

    return 0;
}
