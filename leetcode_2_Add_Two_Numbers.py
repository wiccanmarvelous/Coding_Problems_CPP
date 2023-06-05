class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        c = 0
        l = ListNode(0)
        h = l
        while l1 or l2 or c:
            n1 = l1.val if l1 else 0
            n2 = l2.val if l2 else 0
            x = n1 + n2 + c
            c = x // 10
            l.next = ListNode(x % 10)
            l = l.next
            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
        return h.next