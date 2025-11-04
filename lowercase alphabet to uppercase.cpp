#include <iostream>
int main() {
    char ch;
    std::cout << "Enter lowercase character: ";
    std::cin >> ch;
    if(ch >= 'a' && ch <= 'z')
        ch = ch - 'a' + 'A';
    std::cout << "Uppercase: " << ch << std::endl;
    return 0;
}