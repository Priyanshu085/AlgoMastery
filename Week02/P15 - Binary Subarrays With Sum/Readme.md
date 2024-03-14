# Binary Subarrays With Sum

## Problem Statement
Given a binary array `nums` and an integer `goal`, return the number of non-empty subarrays with a sum goal.

## Approach
To count the number of subarrays with a given sum, we use the prefix sum technique along with a hash map. We iterate through the array `nums`, maintaining a running sum of elements encountered so far. We also maintain a hash map `count` to store the count of each prefix sum encountered. For each prefix sum encountered, we check if there exists a prefix sum `curr_sum - goal` in the hash map. If it exists, we add the count of such prefix sum to the answer. Finally, we update the count of the current prefix sum in the hash map. The answer is the total count of subarrays with the sum equal to the given `goal`.

## Complexity Analysis
- Time complexity: O(n) - where n is the size of the input array `nums`. We traverse the array once and perform constant time operations for each element.
- Space complexity: O(n) - We use additional space for the hash map to store the count of prefix sums.

## Solution
You can find the solution code in [solution.cpp](solution.cpp) file.