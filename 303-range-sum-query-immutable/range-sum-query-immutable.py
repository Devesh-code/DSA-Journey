class NumArray:
    def __init__(self, nums: List[int]):
        self.prefix = []  # Initialize an empty list to store prefix sums.
        cur = 0  # Initialize a variable to track the cumulative sum.
        
        # Iterate through each number in the input list 'nums'.
        for n in nums:
            cur += n  # Update the cumulative sum.
            self.prefix.append(cur)  # Append the cumulative sum to the 'prefix' list.

    def sumRange(self, left: int, right: int) -> int:
        rightSum = self.prefix[right]  # Get the cumulative sum up to the 'right' index.
        leftSum = self.prefix[left - 1] if left > 0 else 0  # Get the cumulative sum up to the 'left' index.

        return rightSum - leftSum  # Return the sum in the range [left, right].

        


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(left,right)