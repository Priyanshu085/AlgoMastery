# Middle of the Linked List

## Problem Statement
Given the head of a singly linked list, return the middle node of the linked list. If there are two middle nodes, return the second middle node.

## Approach
To find the middle node of a linked list, we use the slow and fast pointers approach. We initialize two pointers, slow and fast, both starting from the head of the linked list. The slow pointer moves one step at a time while the fast pointer moves two steps at a time. When the fast pointer reaches the end of the list (i.e., becomes null), the slow pointer will be pointing to the middle node of the linked list.

## Complexity Analysis
- Time complexity: O(n) - where n is the number of nodes in the linked list. In the worst case, we traverse the entire linked list once.
- Space complexity: O(1) - We use only constant space for the slow and fast pointers.

## Solution
You can find the solution code in [solution.cpp](solution.cpp) file.
