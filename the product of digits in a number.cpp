#include <iostream>
int main() {
    int n, prod = 1;
    std::cout << "Enter a number: ";
    std::cin >> n;
    while(n > 0){
        prod *= n%10;
        n /= 10;
    }
    std::cout << "Product of digits: " << prod << std::endl;
    return 0;
}