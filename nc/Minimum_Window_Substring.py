"""
Minimum Window Substring
Given two strings s and t, return the shortest substring of s such that every character in t, including duplicates, is present in the substring. If such a substring does not exist, return an empty string "".

You may assume that the correct output is always unique.

Example 1:

Input: s = "OUZODYXAZV", t = "XYZ"

Output: "YXAZ"
Explanation: "YXAZ" is the shortest substring that includes "X", "Y", and "Z" from string t.

Example 2:

Input: s = "xyz", t = "xyz"

Output: "xyz"
Example 3:

Input: s = "x", t = "xy"

Output: ""
Constraints:

1 <= s.length <= 1000
1 <= t.length <= 1000
s and t consist of uppercase and lowercase English letters.
"""

class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if not s or not t:
            return ""
        t_counter = Counter(t)
        required = len(t_counter)
        window_counts = defaultdict(int)
        formed = 0
        l, r = 0, 0
        ans = float("inf"), None, None  # (window length, left, right)
        while r < len(s):
            char = s[r]
            window_counts[char] += 1
            if char in t_counter and window_counts[char] == t_counter[char]:
                formed += 1
            while l <= r and formed == required:
                if (r - l + 1) < ans[0]:
                    ans = (r - l + 1, l, r)
                left_char = s[l]
                window_counts[left_char] -= 1
                if left_char in t_counter and window_counts[left_char] < t_counter[left_char]:
                    formed -= 1
                l += 1
            r += 1
        return "" if ans[0] == float("inf") else s[ans[1]:ans[2]+1]
