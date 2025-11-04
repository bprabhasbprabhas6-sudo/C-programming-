#include <iostream>
bool isPrime(int n) {
    if(n < 2) return false;
    for(int i=2; i<=n/2; ++i)
        if(n%i == 0) return false;
    return true;
}
int main() {
    int n;
    std::cout << "Print all primes up to: ";
    std::cin >> n;
    for(int i=2; i<=n; ++i)
        if(isPrime(i)) std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}