#include <iostream>
#include <cstring>
int main() {
    char str[100];
    int freq[256] = {0};
    std::cout << "Enter a string: ";
    std::cin >> str;
    for(int i=0; str[i]; ++i)
        freq[(unsigned char)str[i]]++;
    for(int i=0; i<256; ++i)
        if(freq[i] > 0)
            std::cout << char(i) << ": " << freq[i] << std::endl;
    return 0;
}