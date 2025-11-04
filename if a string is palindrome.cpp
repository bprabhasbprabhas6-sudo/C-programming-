#include <iostream>
#include <cstring>
int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin >> str;
    int len = strlen(str), flag = 1;
    for(int i = 0; i < len / 2; ++i)
        if(str[i] != str[len-i-1]) flag = 0;
    if(flag)
        std::cout << "Palindrome" << std::endl;
    else
        std::cout << "Not palindrome" << std::endl;
    return 0;
}