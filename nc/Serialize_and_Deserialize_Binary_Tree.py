"""
Serialize and Deserialize Binary Tree
Implement an algorithm to serialize and deserialize a binary tree.

Serialization is the process of converting an in-memory structure into a sequence of bits so that it can be stored or sent across a network to be reconstructed later in another computer environment.

You just need to ensure that a binary tree can be serialized to a string and this string can be deserialized to the original tree structure. There is no additional restriction on how your serialization/deserialization algorithm should work.

Note: The input/output format in the examples is the same as how NeetCode serializes a binary tree. You do not necessarily need to follow this format.

Example 1:



Input: root = [1,2,3,null,null,4,5]

Output: [1,2,3,null,null,4,5]
Example 2:

Input: root = []

Output: []
Constraints:

0 <= The number of nodes in the tree <= 1000.
-1000 <= Node.val <= 1000
"""

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Codec:
    def serialize(self, root: Optional[TreeNode]) -> str:
        def dfs(node):
            if node is None:
                return "X,"  # Use 'X' to denote None.
            return f"{node.val}," + dfs(node.left) + dfs(node.right)
        return dfs(root)

    def deserialize(self, data: str) -> Optional[TreeNode]:
        self.i = 0
        def dfs(vals):
            val = next(vals)
            if val == "X":
                self.i += 1
                return None
            node = TreeNode(int(val))
            node.left = dfs(vals)
            node.right = dfs(vals)
            return node
        vals = iter(data.split(","))
        return dfs(vals)
