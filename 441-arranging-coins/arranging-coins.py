class Solution:
    def arrangeCoins(self, n: int) -> int:
        complete_rows = int(((2 * n) + 0.25)**0.5 - 0.5)
        return complete_rows 
        