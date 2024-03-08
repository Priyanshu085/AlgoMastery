# [Maximum Subarray](https://chat.openai.com/c/3e78e6d7-c51d-4055-aad6-98ad770f7fbe)

## Problem Statement
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

## Approach
To find the maximum subarray sum, we use Kadane's algorithm. We initialize two variables, `max_sum` and `current_sum`, both initialized with the first element of the array. We iterate through the array, updating `current_sum` as the maximum of the current element and the sum of the current element and the previous `current_sum`. At each step, we also update `max_sum` as the maximum of `max_sum` and `current_sum`.

## Complexity Analysis
- Time complexity: O(n) - where n is the number of elements in the input array. We traverse the array once.
- Space complexity: O(1) - We use only constant space for storing variables.

## Solution
You can find the solution code in [solution.cpp](solution.cpp) file.