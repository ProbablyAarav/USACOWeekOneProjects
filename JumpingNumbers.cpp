#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find all jumping numbers smaller than or equal to X
vector<int> findJumpingNumbers(int X) {
    vector<int> jumpingNumbers;
    queue<int> q;

    // Start from single-digit numbers as jumping numbers
    for (int i = 1; i <= 9; ++i) {
        q.push(i);
    }

    // BFS to generate all jumping numbers up to X
    while (!q.empty()) {
        int current = q.front();
        q.pop();

        // If the current jumping number is <= X, add it to the list
        if (current <= X) {
            jumpingNumbers.push_back(current);

            // Generate the next jumping numbers
            int lastDigit = current % 10;

            // Check if lastDigit + 1 is a valid digit (0-9)
            if (lastDigit + 1 <= 9) {
                q.push(current * 10 + lastDigit + 1);
            }

            // Check if lastDigit - 1 is a valid digit (0-9)
            if (lastDigit - 1 >= 0) {
                q.push(current * 10 + lastDigit - 1);
            }
        }
    }

    // Sort the jumping numbers to find the largest one <= X
    sort(jumpingNumbers.begin(), jumpingNumbers.end());

    return jumpingNumbers;
}

int main() {
    int X;

    // Input the number X
    cout << "Enter a positive number X: ";
    cin >> X;

    // Find all jumping numbers <= X
    vector<int> jumpingNumbers = findJumpingNumbers(X);

    // The largest jumping number <= X is the last element in the vector
    int largestJumpingNumber = jumpingNumbers.back();

    // Output the largest jumping number <= X
    cout << "The largest jumping number <= " << X << " is: " << largestJumpingNumber << endl;

    return 0;
}
