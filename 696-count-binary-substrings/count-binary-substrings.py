class Solution:
    def countBinarySubstrings(self, s: str) -> int:
        ans = 0
        preCnt = 0
        curCnt = 1
        n = len(s)

        for i in range(1, n):
            if s[i] != s[i - 1]:
                ans += min(preCnt, curCnt)
                preCnt = curCnt
                curCnt = 1
            else:
                curCnt += 1

        return ans + min(preCnt, curCnt)