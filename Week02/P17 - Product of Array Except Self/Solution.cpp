#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> left(n, 1);
        std::vector<int> right(n, 1);

        // Calculating products of elements to the left of each element
        for (int i = 1; i < n; ++i) {
            left[i] = left[i - 1] * nums[i - 1];
        }

        // Calculating products of elements to the right of each element
        for (int i = n - 2; i >= 0; --i) {
            right[i] = right[i + 1] * nums[i + 1];
        }

        // Combining left and right product arrays to get the final result
        std::vector<int> result(n);
        for (int i = 0; i < n; ++i) {
            result[i] = left[i] * right[i];
        }

        return result;
    }
};