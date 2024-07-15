#include <iostream>

int is_perfect_number(int num) {
    if (num <= 0) {
        return 0;
    }

    int sum_of_factors = 0;
    // Find all factors of num (excluding itself)
    for (int i = 1; i < num; ++i) {
        if (num % i == 0) {
            sum_of_factors += i;
        }
    }

    // Check if sum of factors equals to num
    if (sum_of_factors == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::cout << is_perfect_number(n) << std::endl;
    return 0;
}
