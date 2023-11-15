class Solution:
    def countSegments(self, s: str) -> int:
        cnt = 0
        for c in range(len(s)):
            if s[c] != " " and ( c == 0 or s[c - 1] == " "):
                cnt += 1
        return cnt

        