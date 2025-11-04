#include <iostream>
#include <cstring>
int main() {
    char s1[100], s2[100];
    std::cout << "Enter two strings: ";
    std::cin >> s1 >> s2;
    if(strcmp(s1, s2) == 0)
        std::cout << "Strings are equal." << std::endl;
    else
        std::cout << "Strings are not equal." << std::endl;
    return 0;
}