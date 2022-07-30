# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        l1 = headA
        l2 = headB
        len_a, len_b = 0, 0
        while l1:
            l1=l1.next
            len_a+=1
        while l2:
            l2=l2.next
            len_b+=1
        shorterNode = headA if len_a<len_b else headB
        longerNode= headB if len_a<len_b else headA
        l3 = longerNode
        l4 = shorterNode
        len_a, len_b = 0, 0
        while l3:
            l3=l3.next
            len_a+=1
        while l4:
            l4=l4.next
            len_b+=1
        diff = len_a - len_b

        for i in range(diff):
            longerNode = longerNode.next
        while shorterNode is not longerNode:
            shorterNode = shorterNode.next
            longerNode = longerNode.next
        return longerNode