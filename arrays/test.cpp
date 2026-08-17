#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 2, 1, 1, 2, 2};

    int s = nums.size();
    int key;

    for (int i = 0; i < s; i++) {
        int count = 0;
        key = nums[i];

        for (int j = 0; j < s; j++) {
            
            if (nums[j] == key) {
                count++;
            }
        }
        if (count > s/2) {
            std::cout << "The majority element is: " << key << std::endl;
            break;
        }
    }

    return 0;
}