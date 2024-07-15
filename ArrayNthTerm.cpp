#include <iostream>
int findNthTerm(int a1, int a2, int n) {
    int d = a2 - a1;
    int nthTerm = a1 + (n - 1) * d;
    return nthTerm;
}

int main() {
    int a1, a2, n;
    std::cout << "Enter the first term (a1): ";
    std::cin >> a1;
    std::cout << "Enter the second term (a2): ";
    std::cin >> a2;
    std::cout << "Enter the term number (n) to find: ";
    std::cin >> n;
    int nthTerm = findNthTerm(a1, a2, n);
    std::cout << "The " << n << "th term of the arithmetic series is: " << nthTerm << std::endl;
    return 0;
}
