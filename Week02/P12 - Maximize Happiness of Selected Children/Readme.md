# Maximum Sum of Happiness Values

## Problem Statement
You are given an array `happiness` of length `n`, and a positive integer `k`. There are `n` children standing in a queue, where the ith child has happiness value `happiness[i]`. You want to select `k` children from these `n` children in `k` turns. In each turn, when you select a child, the happiness value of all the children that have not been selected till now decreases by 1. Note that the happiness value cannot become negative and gets decremented only if it is positive. Return the maximum sum of the happiness values of the selected children you can achieve by selecting `k` children.

## Approach
To maximize the sum of happiness values while selecting `k` children, we sort the `happiness` array in non-increasing order. Then, we iterate through the sorted array and calculate the sum of happiness values by selecting children one by one. In each turn, we select the child with the highest happiness value that has not been selected before and add its happiness value to the sum. We also increment a counter to keep track of the number of turns. The process continues until we have selected `k` children or iterated through all children in the queue.

## Complexity Analysis
- Time complexity: O(n log n) - Sorting the `happiness` array takes O(n log n) time, where n is the length of the array. Iterating through the array takes O(n) time.
- Space complexity: O(1) - We use only constant space for storing variables.

## Solution
You can find the solution code in [solution.cpp](solution.cpp) file.