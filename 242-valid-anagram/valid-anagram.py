class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
      # return sorted(s) == sorted(t)
        if len(s) != len(t):
            return False
        prc = [c for c in s]
        prc2 = [c for c in t]
        prc.sort()
        prc2.sort()

        if prc2 == prc:
            return True
        else:
            return False
    
        