#include <iostream>
int main() {
    int n, arr[100], sum = 0;
    std::cout << "Enter array size: ";
    std::cin >> n;
    std::cout << "Enter elements: ";
    for(int i=0; i<n; ++i) {
        std::cin >> arr[i];
        sum += arr[i];
    }
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}