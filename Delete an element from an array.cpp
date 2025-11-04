#include <iostream>
int main() {
    int n, arr[100], key, idx = -1;
    std::cout << "Enter array size: ";
    std::cin >> n;
    std::cout << "Enter elements: ";
    for(int i=0; i<n; ++i) std::cin >> arr[i];
    std::cout << "Enter element to delete: ";
    std::cin >> key;
    for(int i=0; i<n; ++i)
        if(arr[i] == key) { idx = i; break; }
    if(idx == -1)
        std::cout << key << " not found." << std::endl;
    else {
        for(int i=idx; i<n-1; ++i)
            arr[i] = arr[i+1];
        n--;
        std::cout << "Array after deletion: ";
        for(int i=0; i<n; ++i) std::cout << arr[i] << " ";
        std::cout << std::endl;
    }
    return 0;
}