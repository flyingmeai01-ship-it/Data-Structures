#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr(7);
    for (int i: arr) {
        std::cout << arr[i];
        if (i < 6) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}