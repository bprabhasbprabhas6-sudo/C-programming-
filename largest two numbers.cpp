#include <iostream>
int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    if (a > b)
        std::cout << "Largest: " << a << std::endl;
    else
        std::cout << "Largest: " << b << std::endl;
    return 0;
}