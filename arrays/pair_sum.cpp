#include <iostream>
#include <vector>

std::vector<int> pair_sum(std::vector<int> arr, int target) {
    std::vector<int> ans;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
int main() {
    int target;
    std::cout << "Enter target value: ";
    std::cin >> target;
    std::vector<int> arr = {2, 7, 11, 15};
    std::vector<int> ans = pair_sum(arr, target);

    std::cout << "Target: " << ans[0] << "," <<  ans[1] << "\n";
}