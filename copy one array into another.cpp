#include <iostream>
int main() {
    int n, arr1[100], arr2[100];
    std::cout << "Enter array size: "; std::cin >> n;
    std::cout << "Enter elements: ";
    for(int i=0;i<n;++i) std::cin >> arr1[i];
    for(int i=0;i<n;++i) arr2[i]=arr1[i];
    std::cout << "Copied array: ";
    for(int i=0;i<n;++i) std::cout << arr2[i] << " ";
    std::cout << std::endl;
    return 0;
}