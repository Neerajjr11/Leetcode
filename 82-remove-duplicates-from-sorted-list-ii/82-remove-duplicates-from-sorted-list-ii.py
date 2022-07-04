# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        current = head
        l = []
        if head  is None:
            return None
        if head.next is None:
            return head
        while current.next is not None:
            if current.val == current.next.val:
                l.append(current.val)
            current = current.next
        curr = head
        flag = False
        if head.val == head.next.val:
                flag = True
        while curr.next is not None:
            
            if curr.next.val in l:
                
                curr.next = curr.next.next
                # if curr.val == curr.next.val:
                #     curr = curr.next.next
            else:
                curr = curr.next
        if flag == True:
            head = head.next
            return head
        else:
            return head