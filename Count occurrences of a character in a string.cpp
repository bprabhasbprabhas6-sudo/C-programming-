#include <iostream>
#include <cstring>
int main() {
    char str[100], ch;
    std::cout << "Enter a string: ";
    std::cin >> str;
    std::cout << "Enter a character: ";
    std::cin >> ch;
    int count = 0;
    for(int i=0; str[i]; ++i)
        if(str[i] == ch) count++;
    std::cout << "Occurrences of '" << ch << "': " << count << std::endl;
    return 0;
}