# [Linked List Cycle Detection](https://leetcode.com/problems/linked-list-cycle/)
---
## Problem Statement
Given the head of a linked list, determine if the linked list has a cycle in it. A cycle in a linked list exists if some node in the list can be reached again by continuously following the next pointer. Note that there is no parameter for the position of the cycle in the input.

---

## Approach
To detect a cycle in a linked list, we use the slow and fast pointers approach. We initialize two pointers, slow and fast, both starting from the head of the linked list. The slow pointer moves one step at a time while the fast pointer moves two steps at a time. If there is a cycle in the linked list, eventually, the fast pointer will catch up to the slow pointer, indicating the presence of a cycle. If the fast pointer reaches the end of the list (i.e., becomes null), there is no cycle in the linked list.

## Complexity Analysis
- Time complexity: O(n) - where n is the number of nodes in the linked list. In the worst case, we traverse the entire linked list.
- Space complexity: O(1) - We use only constant space for the slow and fast pointers.

## Solution
You can find the solution code in [solution.cpp](solution.cpp) file.