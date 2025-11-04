#include <iostream>
int main() {
    int n, arr[100], first, second;
    std::cout << "Enter array size: "; std::cin >> n;
    std::cout << "Enter elements: ";
    for(int i=0;i<n;++i) std::cin >> arr[i];
    if(n<2){ std::cout << "Need at least two elements"; return 0; }
    first = second = INT32_MIN;
    for(int i=0;i<n;++i){
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second && arr[i]!=first)
            second=arr[i];
    }
    if(second==INT32_MIN)
        std::cout << "No second largest" << std::endl;
    else
        std::cout << "Second largest: " << second << std::endl;
    return 0;
}