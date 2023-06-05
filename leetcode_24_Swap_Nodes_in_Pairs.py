# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None or head.next == None:
            return head
        t1 = head
        t2 = head.next
        t1.next = t2.next
        t2.next = t1
        h = t2
        while t1.next and t1.next.next:
            t3 = t1
            t1 = t1.next
            t2 = t1.next
            t1.next = t2.next
            t2.next = t1
            t3.next = t2
        return h



# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        d = ListNode(0)
        d.next = head
        c = d
        while c.next and c.next.next:
            f = c.next
            se = c.next.next
            f.next = se.next
            c.next = se
            c.next.next = f
            c = c.next.next
        return d.next