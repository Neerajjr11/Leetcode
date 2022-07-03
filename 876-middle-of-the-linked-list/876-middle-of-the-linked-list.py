# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # check = ListNode
        check = head
        l = []
        counter = 0
        while check:
            check = check.next
            counter += 1
        counter = (counter//2) 
        index = 0
        n = head
        while n:
            if index < counter:
                n= n.next
                index +=1
            else:
                break
        return n