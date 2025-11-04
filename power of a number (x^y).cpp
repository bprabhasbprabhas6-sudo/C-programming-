#include <iostream>
int main() {
    int x, y, pow = 1;
    std::cout << "Enter base and exponent: ";
    std::cin >> x >> y;
    for(int i=1; i<=y; ++i)
        pow *= x;
    std::cout << x << "^" << y << " = " << pow << std::endl;
    return 0;
}