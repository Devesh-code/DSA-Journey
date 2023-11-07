# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
         # Initialize a pointer 'current_node' to the head of the linked list.
        current_node = head

    # Traverse the linked list as long as the current node and the next node are not None.
        while current_node is not None and current_node.next is not None:
        # Check if the value of the current node is equal to the value of the next node.
            if current_node.val == current_node.next.val:
            # If they are equal, update the 'next' pointer of the current node to skip the next node.
                current_node.next = current_node.next.next
            else:
            # If the values are not equal, move the 'current_node' pointer to the next node.
                current_node = current_node.next

    # Return the head of the linked list with duplicates removed.
        return head






        