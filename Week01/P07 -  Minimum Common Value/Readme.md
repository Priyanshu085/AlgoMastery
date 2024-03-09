# Minimum Common Value

## Problem Statement
Given two sorted arrays `nums1` and `nums2`, find the minimum common value between them. If there is no common value, return -1.

## Approach
To find the minimum common value between two sorted arrays, we use a two-pointer approach. We initialize two pointers, `i` and `j`, both starting from the beginning of `nums1` and `nums2` respectively. We iterate through both arrays simultaneously and compare elements at the current positions of `i` and `j`. If the elements are equal, we return the common value. If the element in `nums1` is less than the element in `nums2`, we increment `i`, otherwise, we increment `j`. We continue this process until we reach the end of either array or find the common value.

## Complexity Analysis
- Time complexity: O(m + n) - where `m` and `n` are the sizes of `nums1` and `nums2` respectively. We traverse both arrays once.
- Space complexity: O(1) - We use only constant space for storing variables.

## Solution
You can find the solution code in [solution.cpp](solution.cpp) file.
