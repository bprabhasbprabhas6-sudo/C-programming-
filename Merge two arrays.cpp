#include <iostream>
int main() {
    int n1, n2, arr1[100], arr2[100], res[200];
    std::cout << "Enter size of array 1: "; std::cin >> n1;
    std::cout << "Enter elements of array 1: ";
    for(int i=0;i<n1;++i) std::cin >> arr1[i];
    std::cout << "Enter size of array 2: "; std::cin >> n2;
    std::cout << "Enter elements of array 2: ";
    for(int i=0;i<n2;++i) std::cin >> arr2[i];
    for(int i=0;i<n1;++i) res[i] = arr1[i];
    for(int i=0;i<n2;++i) res[n1+i] = arr2[i];
    std::cout << "Merged array: ";
    for(int i=0;i<n1+n2;++i) std::cout << res[i] << " ";
    std::cout << std::endl;
    return 0;
}