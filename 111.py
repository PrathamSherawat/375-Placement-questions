## Reorder List
from tkinter.tix import ListNoteBook


class Solution:
    def reorderList(self, head: ListNoteBook) -> None:

        if head is None or head.next is None:
            return

        slow, fast = head, head.next
        while fast and fast.next:
            slow, fast = slow.next, fast.next.next

        cur = slow.next
        slow.next = None
        pre = None
        
        while cur:
            t = cur.next
            cur.next = pre
            pre, cur = cur, t
        cur = head
        
        while pre:
            t = pre.next
            pre.next = cur.next
            cur.next = pre
            cur, pre = pre.next, t