#include <iostream>
int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    if (a < b)
        std::cout << "Smallest: " << a << std::endl;
    else
        std::cout << "Smallest: " << b << std::endl;
    return 0;
}