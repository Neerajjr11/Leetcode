# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        check = head
        if head is None:
            return None
        traverse = head
        while traverse.next is not None:
            if traverse.val == traverse.next.val:
                traverse.next = traverse.next.next
            else:
                traverse = traverse.next
        return head