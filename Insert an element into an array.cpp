#include <iostream>
int main() {
    int n, arr[101], pos, val;
    std::cout << "Enter array size: ";
    std::cin >> n;
    std::cout << "Enter elements: ";
    for(int i=0; i<n; ++i) std::cin >> arr[i];
    std::cout << "Enter position and value to insert: ";
    std::cin >> pos >> val; // pos is 0-based
    if(pos<0 || pos>n) { std::cout << "Invalid position"; return 0; }
    for(int i=n; i>pos; --i)
        arr[i] = arr[i-1];
    arr[pos] = val;
    n++;
    std::cout << "Array after insertion: ";
    for(int i=0; i<n; ++i) std::cout << arr[i] << " ";
    std::cout << std::endl;
    return 0;
}