class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        row1 = set("qwertyuiop")
        row2 = set("asdfghjkl")
        row3 = set("zxcvbnm")

        result = []

        for word in words:
            lowercase_word = word.lower()
        
            if all(char in row1 for char in lowercase_word) or \
                all(char in row2 for char in lowercase_word) or \
                all(char in row3 for char in lowercase_word):
                result.append(word)

        return result
        