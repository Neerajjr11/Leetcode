# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head==None:
            return head
        if head.next==None:
            head=head.next
            return
        check = head
        counter = 0
        while check!=None:
            counter += 1
            check = check.next
        counter = (counter // 2) - 1
        index = 0
        n = head
        while index < counter:
            index+=1
            n=n.next
        n.next = n.next.next
        return head
        