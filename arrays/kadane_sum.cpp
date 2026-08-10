#include <iostream>
#include <climits>
#include <vector>

int main() {
    int curSum = 0, maxSum = INT_MIN;
    std::vector<int> nums = {3, -4, 5, 4, -1, 7, -8};
    int size = sizeof(nums)/sizeof(nums[0]);

    for (int i : nums) {
        curSum += i;
        maxSum = std::max(curSum, maxSum);
        if (curSum < 0) {
            curSum = 0;
        }
    }
    std::cout << "The Maximum Subarray is: " << maxSum << std::endl;
    return 0;
}