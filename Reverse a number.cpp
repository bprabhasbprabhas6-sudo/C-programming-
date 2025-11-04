#include <iostream>
int main() {
    int n, rev = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    while(n > 0){
        rev = rev*10 + n%10;
        n /= 10;
    }
    std::cout << "Reversed number: " << rev << std::endl;
    return 0;
}