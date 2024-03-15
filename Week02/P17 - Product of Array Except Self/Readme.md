# Product of Array Except Self

## Problem Statement
Given an array `nums` of n integers where n > 1, return an array `output` such that `output[i]` is equal to the product of all the elements of `nums` except `nums[i]`.

## Approach
To find the product of array except self, we can calculate two auxiliary arrays `left` and `right`. The `left` array stores the product of all elements to the left of each element, and the `right` array stores the product of all elements to the right of each element. Finally, the product of elements except self at each index `i` can be calculated as `left[i] * right[i]`.

## Complexity Analysis
- Time complexity: O(n) - where n is the size of the input array `nums`. We traverse the array twice to calculate the `left` and `right` arrays.
- Space complexity: O(n) - We use additional space for storing the `left` and `right` arrays.

## Solution
You can find the solution code in [solution.cpp](solution.cpp) file.