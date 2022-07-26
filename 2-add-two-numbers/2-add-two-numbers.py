# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        slow = l1
        fast = l2
        carry = 0
        head = l3 = ListNode()
        str1 = ""
        str2 = ""
        if not l1:
            return l2
        if not l2:
            return l1
        
        while slow or fast:
            result = carry
            if slow:
                result += slow.val
                # str1 += str(slow.val)
                slow = slow.next
            if fast:
                result += fast.val
                # str2 += str(fast.val)
                fast = fast.next
            l3.next = ListNode(int(result%10))
            l3 = l3.next
            carry = result // 10
        if carry > 0:
            l3.next = ListNode(1)
        # add = int(str1) + int(str2)
        # add = str(add)
        # n = len(add)
        # add = add.reverse()
        # for i in range(n):
        #     l3.next = ListNode(int(add[n-1-i]))
        #     l3 = l3.next
        return head.next