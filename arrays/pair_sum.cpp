#include <iostream>
#include <vector>

std::vector<int> pair_sum(std::vector<int> arr, int target) {
    std::vector<int> ans;
    int n = arr.size();
    int i = 0, j = n - 1;

    while (i < j) {
        int pairSum = arr[i] + arr[j];
        if (pairSum < target) {
            i++;
        }
        else if (pairSum > target) {
            j--;
        }
        else if (pairSum == target) {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
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

    std::cout << "The target indexes are: " << ans[0] << ", " << ans[1] << std::endl;
    return 0; 
}
