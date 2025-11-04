#include <iostream>
int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    if (n > 0)
        std::cout << "Positive" << std::endl;
    else if (n < 0)
        std::cout << "Negative" << std::endl;
    else
        std::cout << "Zero" << std::endl;
    return 0;
}