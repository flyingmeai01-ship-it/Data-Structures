#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 1, 1, 3, 3, 3 , 3};
    int freq = 0, ans = 0, n = nums.size();
    for (int i = 0; i < n; i++) {
        if (freq == 0) {
            ans = nums[i];
        }
        if (ans == nums[i]) {
            freq++;
        }
        else {
            freq--;
        }
    }
    std::cout << " the majority element is " << ans << std::endl;
    return 0;
}