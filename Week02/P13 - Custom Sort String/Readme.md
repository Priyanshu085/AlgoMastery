# Custom Sort String

## Problem Statement
You are given two strings `order` and `s`. Your task is to sort the string `s` such that the characters in `s` appear in the same order as they appear in `order`. If a character in `s` does not appear in `order`, it should be placed at the end of the sorted string.

## Approach
To custom sort the string `s` based on the given `order`, we first count the frequency of each character in `s` using a frequency map. Then, we iterate through the characters in `order` and append them to the result string according to their frequency in `s`. After appending the characters from `order`, we iterate through the remaining characters (which do not appear in `order`) and append them to the result string.

## Complexity Analysis
- Time complexity: O(n) - where n is the length of the string `s`. We iterate through `s` twice, once to count the frequency of characters and once to construct the result string.
- Space complexity: O(1) - We use a fixed-size array to store the frequency of characters, which requires constant space.

## Solution
You can find the solution code in [solution.cpp](solution.cpp) file.
