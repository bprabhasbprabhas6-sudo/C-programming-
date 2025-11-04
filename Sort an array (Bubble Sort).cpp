#include <iostream>
int main() {
    int n, arr[100];
    std::cout << "Enter array size: ";
    std::cin >> n;
    std::cout << "Enter elements: ";
    for(int i=0; i<n; ++i) std::cin >> arr[i];
    for(int i=0; i<n-1; ++i)
        for(int j=0; j<n-i-1; ++j)
            if(arr[j] > arr[j+1]) std::swap(arr[j], arr[j+1]);
    std::cout << "Sorted array: ";
    for(int i=0; i<n; ++i) std::cout << arr[i] << " ";
    std::cout << std::endl;
    return 0;
}