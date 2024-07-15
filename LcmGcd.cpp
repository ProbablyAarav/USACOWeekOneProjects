#include <iostream>
using namespace std;

// Function to calculate GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM of two numbers
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

// Function to compute both LCM and GCD and return as an array
int* lcmAndGcd(int a, int b) {
    static int result[2];
    result[0] = lcm(a, b);
    result[1] = gcd(a, b);
    return result;
}

int main() {
    int a, b;

    // Input the numbers
    cout << "Enter Number 1: ";
    cin >> a;
    cout << "Enter Number 2: ";
    cin >> b;

    // Compute LCM and GCD
    int* result = lcmAndGcd(a, b);

    // Output the results
    cout << "LCM of " << a << " and " << b << " is " << result[0] << endl;
    cout << "GCD of " << a << " and " << b << " is " << result[1] << endl;

    return 0;
}
