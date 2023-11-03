class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()

        # Check if the lengths of pattern and words are different, return False if so.
        if len(pattern) != len(words):
            return False

        charToWord = {}
        wordToChar = {}

        # Iterate over the corresponding characters and words simultaneously using zip.
        for c, w in zip(pattern, words):
        # Check if the character 'c' is already mapped to a word and if the mapping is different.
            if c in charToWord and charToWord[c] != w:
                return False

            # Check if the word 'w' is already mapped to a character and if the mapping is different.
            if w in wordToChar and wordToChar[w] != c:
                return False

            # If there is no existing mapping for 'c' and 'w', create the mapping.
            charToWord[c] = w
            wordToChar[w] = c

        # If all mappings are consistent, return True.
        return True
        