class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int target = accumulate(nums.begin(), nums.end(), 0) - x;
        if (target == 0) {
            return n;
        }
        if (target < 0) {
            return -1;
        }
        int left = 0, right = 0, sum = 0, maxLength = -1;
        while (right < n) {
            sum += nums[right];
            while (sum > target) {
                sum -= nums[left];
                left++;
            }
            if (sum == target) {
                maxLength = max(maxLength, right - left + 1);
            }
            right++;
        }
        return maxLength == -1 ? -1 : n - maxLength;
    }
};