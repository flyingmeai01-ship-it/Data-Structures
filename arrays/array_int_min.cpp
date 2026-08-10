#include <algorithm>
#include <iostream>
#include <climits>

void find_min_max(int array[], int n) {
    int min_int = INT_MAX;
    int max_int = INT_MIN;
    for (int j = 0; j < n; ++j) {
        min_int = std::min(array[j], min_int);
        max_int = std::max(array[j], max_int);
    }
    std::cout << "Minimum int is: " << min_int << std::endl;
    std::cout << "Maximum int is: " << max_int << std::endl;
    return;
}
int main() {
    int n;
    std::cout << "Enter size of array: ";
    std::cin >> n;
    std::cout << "Enter "<< n << " array elements." << std::endl;
    int array[n];
    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }
    find_min_max(array, n);
    return 0;
}
