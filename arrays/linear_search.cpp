#include <iostream>

int linear_search(int arr[], int n) {
    int i, key;
    std::cout << "Enter key: ";
    std::cin >> key;
    for (i = 0; i < n; ++i) {
        if (key == arr[i]) {
            return key;
        }
        
    }
    return -1;
}
int main() {
    int n;
    std::cout << "Enter size of array: ";
    std::cin >> n;
    int arr[n];
    std::cout << "Enter array elements: \n";

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int index = linear_search(arr, n);
    if (index != -1) {
        std::cout << "key found: " << index << std::endl;
    }
    else {
        std::cout <<"key not found" << std::endl;
    }
    return 0;
    
}