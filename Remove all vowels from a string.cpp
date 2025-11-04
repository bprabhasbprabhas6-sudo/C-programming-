#include <iostream>
#include <cstring>
int main() {
    char str[100], res[100];
    std::cout << "Enter a string: ";
    std::cin >> str;
    int j=0;
    for(int i=0; str[i]; ++i){
        char ch = tolower(str[i]);
        if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'))
            res[j++] = str[i];
    }
    res[j] = '\0';
    std::cout << "Without vowels: " << res << std::endl;
    return 0;
}