# Apple Redistribution into Boxes

## Problem Statement
You are given an array `apple` of size `n` and an array `capacity` of size `m`. There are `n` packs where the ith pack contains `apple[i]` apples. There are `m` boxes as well, and the ith box has a capacity of `capacity[i]` apples. Return the minimum number of boxes you need to select to redistribute these n packs of apples into boxes. Note that apples from the same pack can be distributed into different boxes.

## Approach
To redistribute the apples into boxes, we first sort the capacity array in non-increasing order. Then, we calculate the total number of apples. We iterate through the capacity array and deduct the capacity of each box from the total apples. If the total apples become non-positive, it means we have distributed all the apples, and we return the index of the current box plus one as the minimum number of boxes needed. If the total apples are still positive after iterating through all boxes, it means we need all the boxes, so we return the size of the capacity array.

## Complexity Analysis
- Time complexity: O(m + n log n) - Sorting the capacity array takes O(m log m) time, and iterating through the capacity array takes O(m) time. Calculating the total number of apples takes O(n) time.
- Space complexity: O(1) - We use only constant space for storing variables.

## Solution
You can find the solution code in [solution.cpp](solution.cpp) file.
