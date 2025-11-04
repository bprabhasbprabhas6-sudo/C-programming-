#include <iostream>
int main() {
    int n, sum = 0;
    std::cout << "Enter N: ";
    std::cin >> n;
    for(int i=1; i<=n; ++i)
        sum += 2*i - 1;
    std::cout << "Sum of first " << n << " odd numbers: " << sum << std::endl;
    return 0;
}