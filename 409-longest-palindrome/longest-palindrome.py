class Solution:
    def longestPalindrome(self, s: str) -> int:
        char_count = {}  # Dictionary to store the count of each character
        length = 0
        
        # Count the occurrences of each character
        for char in s:
            char_count[char] = char_count.get(char, 0) + 1
        
        # Iterate through the character counts
        for count in char_count.values():
            # Add the maximum even count for each character
            length += (count // 2) * 2
        
        # If there's at least one character with an odd count, add 1 to the length
        if any(count % 2 == 1 for count in char_count.values()):
            length += 1
        
        return length
