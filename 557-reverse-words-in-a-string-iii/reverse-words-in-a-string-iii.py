class Solution:
    def reverseWords(self, s: str) -> str:
        # Split the input string into words
        words = s.split()

    # Reverse each word in the list
        reversed_words = [word[::-1] for word in words]

    # Join the reversed words back into a string, preserving whitespace
        result = ' '.join(reversed_words)

        return result
        