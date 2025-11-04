#include <iostream>
int main() {
    int n, a = 0, b = 1;
    std::cout << "Enter N: ";
    std::cin >> n;
    std::cout << "Fibonacci Series: ";
    for(int i=0; i<n; ++i) {
        std::cout << a << " ";
        int temp = a + b;
        a = b;
        b = temp;
    }
    std::cout << std::endl;
    return 0;
}