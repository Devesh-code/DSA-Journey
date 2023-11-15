class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        # tmp = []
        # for i in range(1, len(nums) + 1):
        #     if i not in nums:
        #         tmp.append(i)
        # return tmp
        num_set = set(nums)
        return [i for i in range(1, len(nums) + 1) if i not in num_set]

        