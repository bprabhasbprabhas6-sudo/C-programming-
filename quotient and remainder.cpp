#include <iostream>
int main() {
    int a, b;
    std::cout << "Enter two numbers (a b): ";
    std::cin >> a >> b;
    std::cout << "Quotient: " << a / b << std::endl;
    std::cout << "Remainder: " << a % b << std::endl;
    return 0;
}