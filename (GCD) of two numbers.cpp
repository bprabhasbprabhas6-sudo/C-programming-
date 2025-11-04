#include <iostream>
int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    while(b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    std::cout << "GCD: " << a << std::endl;
    return 0;
}