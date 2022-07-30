# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        if not root:
            return None
        left = self.inorderTraversal(root.left) if root.left else []
        
        right = self.inorderTraversal(root.right) if root.right else []
        
        return left + [root.val] + right