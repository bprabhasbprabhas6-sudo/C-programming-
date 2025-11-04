#include <iostream>
int main() {
    int n, arr[100];
    std::cout << "Enter array size: ";
    std::cin >> n;
    std::cout << "Enter elements: ";
    for(int i=0; i<n; ++i) std::cin >> arr[i];
    int max = arr[0];
    for(int i=1; i<n; ++i)
        if(arr[i] > max) max = arr[i];
    std::cout << "Largest: " << max << std::endl;
    return 0;
}