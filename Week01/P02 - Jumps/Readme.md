# [Jumps](https://codeforces.com/problemset/problem/1455/B)
----
<h3> 
You are standing on the OX-axis at point 0 and you want to move to an integer point x>0.

You can make several jumps. Suppose you're currently at point y (y may be negative) and jump for the k-th time. You can:

- either jump to the point y+k
- or jump to the point y−1.

What is the minimum number of jumps you need to reach the point x?

#### Input
The first line contains a single integer t (1≤t≤1000) — the number of test cases.

The first and only line of each test case contains the single integer x (1≤x≤106) — the destination point.

#### Output
For each test case, print the single integer — the minimum number of jumps to reach x. It can be proved that we can reach any integer point x.

</h3>

----

## Approach
1. To solve this problem efficiently, we can utilize the properties of the given rules for making jumps:

1. At each step, we can either jump to the right (y + k) or jump to the left (y - 1).
1. We want to minimize the number of jumps required to reach the destination point x.
1. We can observe that if we make all possible jumps to the right until we overshoot the destination, then backtrack by jumping to the left until we reach x, we will minimize the total number of jumps required.

### Complexity Analysis

- **Time Complexity**: O(sqrt(x)).
- **Space Complexity**: O(1).