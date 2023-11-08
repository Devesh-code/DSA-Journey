# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        # Initialize two pointers, 'slow' and 'fast', both pointing to the head of the linked list.
        slow, fast = head, head

# Use a loop to traverse the linked list.
        while fast and fast.next:
    # Move the 'slow' pointer one step at a time.
            slow = slow.next
    # Move the 'fast' pointer two steps at a time.
            fast = fast.next.next
    
    # Check if the 'slow' and 'fast' pointers meet, indicating the presence of a cycle.
            if slow == fast:
                return True

# If the loop completes without finding a cycle, return False.
        return False

        