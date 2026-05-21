# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution(object):
    def getDecimalValue(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: int
        """
        num = 0
        # Traverse the linked list once
        while head:
            num = (num << 1) | head.val  # Efficient bit manipulation
            head = head.next
        return num
