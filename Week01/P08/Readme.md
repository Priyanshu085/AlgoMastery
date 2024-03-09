### Problem: Longest Substring Without Repeating Characters

Given a string `s`, find the length of the longest substring without repeating characters.

### Approach

1. **Sliding Window Technique:** Use a sliding window to find the longest substring without repeating characters.
2. **Initialize Variables:** Initialize variables `left` and `right` to represent the window boundaries, and a hashmap `charIndex` to store the index of each character's last occurrence.
3. **Iterate Through String:** Move the right boundary of the window and update the length of the longest substring accordingly. If the current character is already present in the hashmap and its index is greater than or equal to the left boundary of the window, update the left boundary to the next index after the previous occurrence of the character.
4. **Update Max Length:** Update the maximum length of the substring with no repeating characters.
5. **Return Result:** Return the maximum length of the substring.

### Complexity Analysis

- **Time Complexity:** O(n), where n is the length of the string.
- **Space Complexity:** O(min(m, n)), where m is the size of the character set (constant) and n is the length of the string.