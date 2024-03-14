Binary Subarrays With Sum

class Solution {
private:
    int solve(vector<int>& nums, int goal){
        int ans= 0;
        unordered_map<int, int> count;
        count[0] = 1;
        int curr_sum = 0;

        for (int num : nums) {
            curr_sum += num;
            if (count.find(curr_sum - goal) != count.end()) {
                ans += count[curr_sum - goal];
            }
            count[curr_sum]++;
        }
        return ans;
    }

public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return solve(nums, goal);
    }
};