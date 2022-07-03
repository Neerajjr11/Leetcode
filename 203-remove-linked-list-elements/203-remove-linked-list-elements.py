# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        check = head
        while check and check.next is not None:
            currentNode = check
            nextNode = check.next
            if check.next.val == val:
                check.next = check.next.next
            else:
                check = check.next
        if head is not None and head.val == val:
            return head.next
        return head