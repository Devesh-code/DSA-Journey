# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        # one way of solution is by using a array nums and compairing left and right indeces .
        # nums = []
        # while head:
        #     nums.append(head.val)
        #     head = head.next
        # l,r = 0,len(nums) - 1
        # while l <= r:
        #     if nums[l] != nums[r]:
        #         return False
        #     l += 1
        #     r -= 1
        # return True

    # Another approach of solving this problem is by using two pointers( one is fast pointer and second is slow pointer)

        # both pointer start with head
        fast = head 
        slow = head

        # find middle( at slow pointer)
        while fast and fast.next:
            fast = fast.next.next # 2 next values
            slow = slow.next
            # 2 time fast and one time slow

        # reverse second half of the linked list
        prev = None
        while slow:
            tmp = slow.next
            slow.next = prev
            prev = slow
            slow = tmp

        # check palindrome
        left, right = head, prev
        while right:
            if left.val != right.val:
                return False
            left = left.next
            right = right.next
        return True 


        