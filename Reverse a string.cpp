#include <iostream>
#include <cstring>
int main() {
    char str[100], rev[100];
    std::cout << "Enter a string: ";
    std::cin >> str;
    int len = strlen(str);
    for(int i=0; i<len; ++i)
        rev[i] = str[len - i - 1];
    rev[len] = '\0';
    std::cout << "Reversed: " << rev << std::endl;
    return 0;
}