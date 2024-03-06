### [Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)

Given an array of integers and an integer k, you need to find the total number of continuous subarrays whose sum equals k.

### Approach

1. **Use Prefix Sums:** Calculate prefix sums for the array. Prefix sum at index `i` represents the sum of all elements up to index `i`.
2. **Iterate Through Array:** Iterate through the array and calculate the sum of all subarrays ending at the current index. Store the sum frequencies in a hashmap.
3. **Count Subarrays:** For each index, check if there exists a prefix sum such that `prefixSum - k` exists in the hashmap. If it exists, increment the count of subarrays by the frequency of `prefixSum - k`.
4. **Update Hashmap:** Update the hashmap with the current prefix sum.
5. **Return Result:** Return the total count of subarrays.

### Complexity Analysis

- **Time Complexity:** O(n), where n is the size of the array.
- **Space Complexity:** O(n), for the hashmap to store prefix sums and their frequencies.