# Chat Room

## Problem Statement
Vasya has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say hello to everybody. Vasya typed the word `s`. It is considered that Vasya managed to say hello if several letters can be deleted from the typed word so that it resulted in the word "hello". For example, if Vasya types the word "ahhellllloou", it will be considered that he said hello, and if he types "hlelo", it will be considered that Vasya got misunderstood and he didn't manage to say hello. Determine whether Vasya managed to say hello by the given word `s`.

## Approach
- We iterate through the characters of the word `s` and compare each character with the corresponding character in the word "hello". 
- If a match is found, we increment the index `j`. If `j` becomes equal to 5 (the length of "hello"), it means that all the letters of "hello" are found in `s`, and Vasya managed to say hello.

## Complexity Analysis
- Time complexity: O(n) - where n is the length of the string `s`. We iterate through `s` once.
- Space complexity: O(1) - We use only constant space for storing variables.

## Solution
You can find the solution code in [solution.cpp](solution.cpp) file.
