class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        ## Define the lowercase letters of the alphabet.
        letters = 'abcdefghijklmnopqrstuvwxyz'

        # Initialize a dictionary 'counter' with letters as keys and 0 as initial count.
        counter = {letter: 0 for letter in letters}

        # Traverse the 'magazine' string and count occurrences of each letter.
        for char in magazine:
            counter[char] += 1
        
        # Traverse the 'ransomNote' string and decrement the count of each letter.
        for char in ransomNote:
            counter[char] -= 1

        # Check if any count in 'counter' is negative, indicating insufficient characters.
        for char, count in counter.items():
            if counter[char] < 0:
                return False

        # If all characters in 'ransomNote' can be constructed, return True.
        return True

        