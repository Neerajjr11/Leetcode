# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None:
            return None
        if head.next is None:
            return head
        curr = head
        prev = None
        while curr:
            temp = curr.next
            curr.next = prev
            prev = curr
            curr = temp
        return prev
    
#     1 2 3 
#   curr = 1 temp = 2 c.n = none p = 1 curr = 2
#  curr = 2 temp = 3 c.n = 1 prev = 2 curr = 3 
#  curr = 3 temp = none c.n = 2 prev = 3 curr = none

