class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        result = []
        carry = 0

        # Iterate through the digits from right to left
        i, j = len(num1) - 1, len(num2) - 1
        zero_ascii = ord('0')

        while i >= 0 or j >= 0 or carry:
            # Get the current digits or 0 if already reached the leftmost digit
            x = ord(num1[i]) - zero_ascii if i >= 0 else 0
            y = ord(num2[j]) - zero_ascii if j >= 0 else 0

            # Perform addition and update carry
            total = x + y + carry
            carry = total // 10
            result.append(chr(total % 10 + zero_ascii))

            # Move to the next digits
            i -= 1
            j -= 1

        # Reverse the result and join to get the final sum
        return ''.join(result[::-1])