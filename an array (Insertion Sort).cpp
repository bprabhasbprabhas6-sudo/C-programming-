#include <iostream>
int main() {
    int n, arr[100];
    std::cout << "Enter array size: ";
    std::cin >> n;
    std::cout << "Enter elements: ";
    for(int i=0; i<n; ++i) std::cin >> arr[i];
    for(int i=1; i<n; ++i){
        int key = arr[i], j = i-1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    std::cout << "Sorted array: ";
    for(int i=0; i<n; ++i) std::cout << arr[i] << " ";
    std::cout << std::endl;
    return 0;
}