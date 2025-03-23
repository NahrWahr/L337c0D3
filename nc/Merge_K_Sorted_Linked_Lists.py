"""
Merge K Sorted Linked Lists
You are given an array of k linked lists lists, where each list is sorted in ascending order.

Return the sorted linked list that is the result of merging all of the individual linked lists.

Example 1:

Input: lists = [[1,2,4],[1,3,5],[3,6]]

Output: [1,1,2,3,3,4,5,6]
Example 2:

Input: lists = []

Output: []
Example 3:

Input: lists = [[]]

Output: []
Constraints:

0 <= lists.length <= 1000
0 <= lists[i].length <= 100
-1000 <= lists[i][j] <= 1000
"""

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        # Base case: if there are no lists, return None
        if not lists:
            return None
        # Start the divide and conquer process
        return self.merge_range(lists, 0, len(lists) - 1)

    def merge_range(self, lists, left, right):
        # If there's only one list, it's already merged
        if left == right:
            return lists[left]
        # Divide the range into two halves
        mid = (left + right) // 2
        # Recursively merge the left and right halves
        l1 = self.merge_range(lists, left, mid)
        l2 = self.merge_range(lists, mid + 1, right)
        # Merge the two sorted lists
        return self.merge(l1, l2)

    def merge(self, l1, l2):
        # Merge two sorted linked lists into one
        dummy = ListNode(0)
        tail = dummy

        # Merge nodes from both lists in order
        while l1 and l2:
            if l1.val <= l2.val:
                tail.next = l1
                l1 = l1.next
            else:
                tail.next = l2
                l2 = l2.next
            tail = tail.next

        # Attach the remaining nodes, if any
        tail.next = l1 if l1 else l2

        return dummy.next
