class Solution:
    def isValid(self, s: str) -> bool:
         # Initialize an empty stack to keep track of open brackets.
        stack = []

    # Create a dictionary 'closeToOpen' that maps closing brackets to their corresponding open brackets.

        closeToOpen = {")": "(", "}": "{", "]": "["}

        for c in s:
            if c in closeToOpen:

            # If the current character is a closing bracket:

                if stack and stack[-1] == closeToOpen[c]:
                    
                # If the stack is not empty and the top of the stack matches the corresponding open bracket:
                    stack.pop()  # Pop the matching open bracket from the stack.
                
                else:
                    return False  # The brackets are not balanced, return False.
            
            else:
                stack.append(c)  # If the current character is an open bracket, push it onto the stack.

    # After processing the entire string, check if the stack is empty.
    # If it's empty, all brackets are balanced; otherwise, some brackets are unmatched.
        return True if not stack else False
        