class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumFreq;
        prefixSumFreq[0] = 1; // Base case: empty subarray has sum 0
        int count = 0, prefixSum = 0;
        
        for (int num : nums) {
            prefixSum += num;
            if (prefixSumFreq.count(prefixSum - k)) {
                count += prefixSumFreq[prefixSum - k];
            }
            prefixSumFreq[prefixSum]++;
        }
        
        return count;
    }
};
