#include <iostream>
int main() {
    int n, rev = 0, t;
    std::cout << "Enter a number: ";
    std::cin >> n;
    t = n;
    while(t > 0){
        rev = rev*10 + t%10;
        t /= 10;
    }
    if(n == rev)
        std::cout << n << " is palindrome." << std::endl;
    else
        std::cout << n << " is not palindrome." << std::endl;
    return 0;
}