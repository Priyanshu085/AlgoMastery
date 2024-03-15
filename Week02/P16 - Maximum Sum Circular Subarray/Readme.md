# Maximum Sum Circular Subarray

## Problem Statement
Given a circular array `nums` of integers, return the maximum possible sum of a non-empty subarray of `nums`.

## Approach
To find the maximum sum of a circular subarray, we use Kadane's algorithm twice. First, we find the maximum sum subarray (`gmax`) and the minimum sum subarray (`gmin`) in the given array `nums`. Then, we compute the total sum of the array (`sum`). Finally, the maximum sum of the circular subarray can be either the maximum sum subarray (`gmax`) or the sum of the entire array minus the minimum sum subarray (`sum - gmin`). If all elements of the array are negative, we return the maximum sum subarray (`gmax`).

## Complexity Analysis
- Time complexity: O(n) - where n is the size of the input array `nums`. We traverse the array twice, once to find the maximum and minimum sum subarrays and once to compute the total sum of the array.
- Space complexity: O(1) - We use only constant space for storing variables.

## Solution
You can find the solution code in [solution.cpp](solution.cpp) file.