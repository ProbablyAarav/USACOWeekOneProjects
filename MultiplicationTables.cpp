#include <iostream>
int* generateMultiplicationTable(int num, int size) {
    int* table = new int[size];

    for (int i = 0; i < size; ++i) {
        table[i] = num * (i + 1);
    }

    return table;
}

int main() {
    int number;
    int size;

    std::cout << "Enter the number for the multiplication table: ";
    std::cin >> number;

    std::cout << "Enter the size of the multiplication table: ";
    std::cin >> size;

    int* table = generateMultiplicationTable(number, size);
    std::cout << "Multiplication Table for " << number << ":\n";
    for (int i = 0; i < size; ++i) {
        std::cout << number << " x " << (i + 1) << " = " << table[i] << std::endl;
    }

    delete[] table;

    return 0;
}
