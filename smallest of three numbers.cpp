#include <iostream>
int main() {
    int a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    int smallest = a;
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;
    std::cout << "Smallest: " << smallest << std::endl;
    return 0;
}