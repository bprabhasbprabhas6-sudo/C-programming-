#include <iostream>
int main() {
    int n, arr[100];
    std::cout << "Enter array size: ";
    std::cin >> n;
    std::cout << "Enter elements: ";
    for(int i=0; i<n; ++i) std::cin >> arr[i];
    for(int i=0; i<n-1; ++i) {
        int minIdx = i;
        for(int j=i+1; j<n; ++j)
            if(arr[j]<arr[minIdx]) minIdx = j;
        std::swap(arr[minIdx], arr[i]);
    }
    std::cout << "Sorted array: ";
    for(int i=0; i<n; ++i) std::cout << arr[i] << " ";
    std::cout << std::endl;
    return 0;
}