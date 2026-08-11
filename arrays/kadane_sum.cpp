#include <iostream>
#include <climits>
#include <vector>

int main() {
    int curSum = 0, maxSum = INT_MIN;
    std::vector<int> nums = {-7};
    // Test cases:
    // {3, -4, 5, 4, -1, 7, -8}     Output: 15
    // {-2, -3, -1, -5}             Output: -1             
    // {-5, -2, 0, -3}              Output: 0
    // {1, 2, 3, 4}                 Output: 10
    // {-7}                         Output: -7

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