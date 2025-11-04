#include <iostream>
#include <cstring>
int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin >> str;
    std::cout << "Length: " << strlen(str) << std::endl;
    return 0;
}