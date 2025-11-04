#include <iostream>
int main() {
    int n, arr[100], key, found = 0;
    std::cout << "Enter array size: ";
    std::cin >> n;
    std::cout << "Enter elements: ";
    for(int i=0; i<n; ++i) std::cin >> arr[i];
    std::cout << "Enter element to search: ";
    std::cin >> key;
    for(int i=0; i<n; ++i)
        if(arr[i] == key) { found = 1; break; }
    if(found)
        std::cout << key << " found in array." << std::endl;
    else
        std::cout << key << " not found." << std::endl;
    return 0;
}