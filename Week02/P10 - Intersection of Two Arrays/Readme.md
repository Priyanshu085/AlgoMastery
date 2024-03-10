# Intersection of Two Arrays

## Problem Statement
Given two arrays, `nums1` and `nums2`, return an array containing the intersection of the two arrays. The intersection includes only the elements that appear in both arrays and must be returned in any order.

## Approach
To find the intersection of two arrays, we use sets to store unique elements from each array. We create two sets, `set1` and `set2`, from `nums1` and `nums2` respectively. Then, we iterate through `set1` and check if each element exists in `set2`. If an element is found in both sets, it is added to the result vector.

## Complexity Analysis
- Time complexity: O(m + n) - where `m` and `n` are the sizes of `nums1` and `nums2` respectively. Constructing the sets takes O(m + n) time, and iterating through `set1` takes O(m) time. The time complexity of finding an element in a set is O(1).
- Space complexity: O(m + n) - We use additional space to store elements in the sets.

## Solution
You can find the solution code in [solution.cpp](solution.cpp) file.