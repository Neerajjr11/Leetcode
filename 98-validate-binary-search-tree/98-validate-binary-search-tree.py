# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        lst = []
        # if root.left == None:
        #     return True
        # elif root.right == None:
        #     return True
        def inorder(root):
            if root== None:
                return
            inorder(root.left)
            lst.append(root.val)
            inorder(root.right)
        inorder(root)
        for i in range(1,len(lst)):
            if lst[i-1] >= lst[i]:
                return False
        return True