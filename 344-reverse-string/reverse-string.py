class Solution:
    def reverseString(self, s: List[str]) -> None:
        # l, r = 0, len(s) - 1
        # while l < r:                # this approach have T: O(n) & S: O(1)
        #     s[l], s[r] = s[r], s[l]
        #     l, r = l + 1, r - 1

# Using a stack for reversing the string But it have T: O(n) and S: O(n)
        stack = []
        for c in s:
            stack.append(c)
        i = 0
        while stack:
            s[i] = stack.pop()
            i += 1
        
# # Using Recursive Function for do the swap without using another while loop, insted of the loop we recalling over reverse function with new left and right arguments

# def reverse(l,r):
#     if l < r:
#         s[l],s[r] = s[r],s[l]
#         reverse(l + 1, r - 1)
# reverse(0, len(s) - 1)

         
    

        """
        Do not return anything, modify s in-place instead.
        """
        