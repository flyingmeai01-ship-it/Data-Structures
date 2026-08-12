#include <iostream>
#include <vector>
#include <climits>

int maxSum_subarray(const std::vector<int>& arr) {

    int maxSum = INT_MIN, curSum = 0;

    for (int val: arr) {
        curSum += val;
        maxSum = std::max(curSum, maxSum);

        if (curSum < 0) {
            curSum = 0;
        }
    }
    return maxSum;
}
int main() {
    std::vector<int> subarray = {3, -4, 5, 4, -1, 7, -8};

    int maxSum = maxSum_subarray(subarray);
    
    std::cout << "Maximum Subarray Sum: " << maxSum << std::endl;
    return 0;
}