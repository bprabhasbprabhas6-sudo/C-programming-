#include <iostream>
int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    int gcd, x=a, y=b;
    while(y != 0) {
        int t = y;
        y = x % y;
        x = t;
    }
    gcd = x;
    int lcm = (a*b)/gcd;
    std::cout << "LCM: " << lcm << std::endl;
    return 0;
}