#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Addition: " << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
    std::cout << "Subtraction: " << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
    std::cout << "Multiplication: " << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;

    if (num2 != 0) {
        std::cout << "Division: " << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
        std::cout << "Modulo: " << num1 << " % " << num2 << " = " << num1 % num2 << std::endl;
    } else {
        std::cout << "Division and modulo by zero are undefined!" << std::endl;
    }

    return 0;
}

