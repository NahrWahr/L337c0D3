"""
Longest Substring Without Repeating Characters
Given a string s, find the length of the longest substring without duplicate characters.

A substring is a contiguous sequence of characters within a string.

Example 1:

Input: s = "zxyzxyz"

Output: 3
Explanation: The string "xyz" is the longest without duplicate characters.

Example 2:

Input: s = "xxxx"

Output: 1
Constraints:

0 <= s.length <= 1000
s may consist of printable ASCII characters.
"""

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        l,r = 0,0
        res = 0
        while r < len(s):
            if s[r] in s[l:r]:
                l += 1
            else:
                res = max(res, r - l + 1)
                r += 1
        return res
