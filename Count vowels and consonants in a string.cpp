#include <iostream>
#include <cstring>
int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin >> str;
    int vowels=0, consonants=0;
    for(int i=0; str[i]; ++i){
        char ch = tolower(str[i]);
        if(ch >= 'a' && ch <= 'z') {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }
    std::cout << "Vowels: " << vowels << ", Consonants: " << consonants << std::endl;
    return 0;
}