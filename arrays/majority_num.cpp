#include <algorithm>
#include <iostream>
#include <vector>


int majority(std::vector<int> nums, int n) {

    // Sorting, the array.
    std::sort(nums.begin(), nums.end());

    // Counting Frequence.
    int freq = 1, ans = nums[0];
    for (int i = 1; i <= n; i++) {
        if (nums[i] == nums[i - 1]) {
            freq++;
        }
        else {
            freq = 1, ans = nums[i];
        }
        if (freq > n/2) {
            return ans;
        }
    }
    return -1;
}
int main() {
    std::vector<int> nums = {1, 2, 2, 1, 1, 3, 3, 3, 3, 3, 3};
    int n = nums.size();

    int ans = majority(nums, n);
    std::cout << "The majority element is: " << ans << std::endl;
    return 0;
}