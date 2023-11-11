class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        # Create a list to represent the character count in the magazine.
        magazineHash = [0] * 26

    # Traverse the magazine and count occurrences of each letter.
        for char in magazine:
            magazineHash[ord(char) - ord('a')] += 1

    # Traverse the ransomNote and check if it can be constructed from the magazine.
        for char in ransomNote:
            index = ord(char) - ord('a')
        # If the count of the character in magazine is zero, return False.
            if magazineHash[index] == 0:
                return False
        # Decrement the count of the character in magazine.
            magazineHash[index] -= 1
        return True

        