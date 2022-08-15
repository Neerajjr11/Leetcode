# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rob(self, root: Optional[TreeNode]) -> int:
        
        def dfs(root):
            if not root:
                return [0,0]
            
            leftpair = dfs(root.left)
            rightpair = dfs(root.right)
            
            withroot = root.val + leftpair[1] + rightpair[1]
            withoutroot = max(leftpair) + max(rightpair)
            
            return [withroot, withoutroot]
        return max(dfs(root))