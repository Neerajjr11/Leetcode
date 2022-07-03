# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        stack = []
    
        check = head
        while check is not None:
            stack.append(check.val)
            check = check.next
        res = list(stack)
        stack.reverse()
        if res == stack:
            return True
        else:
            return False