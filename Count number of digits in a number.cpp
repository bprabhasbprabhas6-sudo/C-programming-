#include <iostream>
int main() {
    int n, count = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    do {
        count++;
        n /= 10;
    } while(n != 0);
    std::cout << "Number of digits: " << count << std::endl;
    return 0;
}