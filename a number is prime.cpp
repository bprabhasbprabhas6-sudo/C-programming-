#include <iostream>
int main() {
    int n, flag = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    if(n < 2) flag = 1;
    for(int i=2; i<=n/2; ++i)
        if(n%i == 0) {
            flag = 1;
            break;
        }
    if(flag == 0)
        std::cout << n << " is prime." << std::endl;
    else
        std::cout << n << " is not prime." << std::endl;
    return 0;
}