class Solution:
    def reverseBits(self, n: int) -> int:
        res = 0  # Initialize the result variable 'res' to 0.
        for i in range(32):
            bit = (n >> i) & 1  # Extract the i-th bit from the input integer 'n'.
            res = res | (bit << (31 - i))  # Set the corresponding bit in 'res' to match the reversed order.
        return res  # Return the reversed 32-bit integer.

        