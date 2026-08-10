#include <iostream>
#include <climits>

// int main() {
//     int n = 5;
//     int arr[n] = {1, 2, 3, 4, 5};

//     for (int st = 0; st < n; st++) {
//         for (int end = st; end < n; end++) {
//             for (int i = st; i <= end; i++) {
//                 std::cout << arr[i];
//             }
//             std::cout << " ";
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }

int main() {
    int n = 7, maxSum = INT_MIN;
    int arr[n] = {3, -4, 5, 4, -1, 7, -8};
    for (int st = 0; st < n; st++) {
        int curSum = 0;
        for (int end = st; end < n; end++) {
            curSum += arr[end];
            maxSum = std::max(curSum, maxSum);
        }
    }
    std::cout << "Maximum Subarray sum Value: " << maxSum << std::endl;

}