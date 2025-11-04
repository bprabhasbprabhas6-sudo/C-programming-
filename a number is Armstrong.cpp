#include <iostream>
#include <cmath>
int main() {
    int n, temp, sum = 0, digits = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    temp = n;
    while(temp != 0){ digits++; temp /= 10; }
    temp = n;
    while(temp != 0){
        sum += pow(temp%10, digits);
        temp /= 10;
    }
    if(sum == n)
        std::cout << n << " is an Armstrong number." << std::endl;
    else
        std::cout << n << " is not an Armstrong number." << std::endl;
    return 0;
}