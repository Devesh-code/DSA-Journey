class Solution:
    def findShortestSubArray(self, nums: List[int]) -> int:
        left, right, count = {}, {}, {}
        degree = 0
        min_length = float('inf')

        for i, num in enumerate(nums):
            if num not in left:
                left[num] = i
            right[num] = i
            count[num] = count.get(num, 0) + 1
            degree = max(degree, count[num])

        for num, freq in count.items():
            if freq == degree:
                min_length = min(min_length, right[num] - left[num] + 1)

        return min_length