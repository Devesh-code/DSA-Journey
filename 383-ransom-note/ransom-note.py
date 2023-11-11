class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        char_count = {}  # Dictionary to store character counts.

        # Populate the char_count dictionary with counts from the magazine.
        for char in magazine:
            char_count[char] = char_count.get(char, 0) + 1

        # Check if ransomNote can be constructed from magazine.
        for char in ransomNote:
            # Check if the character is in char_count and has a count greater than or equal to 1.
            if char in char_count and char_count[char] >= 1:
                char_count[char] -= 1  # Decrement the count of the character in char_count.
            else:
                return False  # If the character is not available or count is 0, return False.

        return True  # If all characters in ransomNote can be constructed, return True.

        