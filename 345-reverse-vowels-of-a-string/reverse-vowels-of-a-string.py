class Solution:
    def reverseVowels(self, s: str) -> str:
        v = set(['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'])
        st = list(s)
        l, r = 0, len(s) - 1
        
        while l < r:
            while l < r and st[l] not in v:
                l += 1
            while l < r and st[r] not in v:
                r -= 1
            
            if l < r:
                st[l], st[r] = st[r], st[l]
                l, r = l + 1, r - 1
        
        return ''.join(st)

        