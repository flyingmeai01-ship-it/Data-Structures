#include <iostream>

// Linear Search function impletation.
int linear_search(int arr[], int n) {
    int i, key;
    std::cout << "Enter key: ";  // Input key from user.
    std::cin >> key;
    for (i = 0; i < n; ++i) {
        if (key == arr[i]) {    // Checking every element of array is it equals to key or not.
            return key;
        }
        
    }
    return -1;
}
int main() {
    int n;
    // Prompting user for input array size.
    std::cout << "Enter size of array: ";
    std::cin >> n;
    int arr[n];
    std::cout << "Enter array elements: \n";

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    // Calling linear search function with arguments.
    int index = linear_search(arr, n);

    // cheching if we found our key or not.
    if (index != -1) {
        std::cout << "key found: " << index << std::endl;
    }
    else {
        std::cout <<"key not found" << std::endl;
    }
    return 0;
    
}