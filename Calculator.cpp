#include <iostream>

float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

// ... (functions for multiply and divide)

int main() {
    float num1, num2;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    switch (operation) {
        case '+':
            std::cout << "Result: " << add(num1, num2) << std::endl;
            break;
        case '-':
            std::cout << "Result: " << subtract(num1, num2) << std::endl;
            break;
        // ... (cases for multiply and divide)
        default:
            std::cout << "Invalid operation" << std::endl;
    }

    return 0;
}

