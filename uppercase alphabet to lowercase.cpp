#include <iostream>
int main() {
    char ch;
    std::cout << "Enter uppercase character: ";
    std::cin >> ch;
    if(ch >= 'A' && ch <= 'Z')
        ch = ch - 'A' + 'a';
    std::cout << "Lowercase: " << ch << std::endl;
    return 0;
}