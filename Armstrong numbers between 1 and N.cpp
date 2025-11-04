#include <iostream>
#include <cmath>
bool isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;
    temp = n;
    while(temp != 0){ digits++; temp /= 10; }
    temp = n;
    while(temp != 0){
        sum += pow(temp%10, digits);
        temp /= 10;
    }
    return sum == n;
}
int main() {
    int n;
    std::cout << "Enter N: ";
    std::cin >> n;
    for(int i=1; i<=n; ++i)
        if(isArmstrong(i)) std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}