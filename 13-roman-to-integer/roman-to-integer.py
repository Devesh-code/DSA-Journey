class Solution:
    def romanToInt(self, s: str) -> int:
        
    # Create a dictionary 'roman' that maps Roman numeral symbols to their integer values.
        roman = {
            "I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000
        }

    # Initialize the result variable 'res' to store the final integer value.
        res = 0

    # Loop through the characters in the input Roman numeral string 's'.
        for i in range(len(s)):
        # Check if the current Roman numeral character 's[i]' is smaller than the next character.
            if i < len(s) - 1 and roman[s[i]] < roman[s[i + 1]]:
            # If it is smaller, subtract the value of 's[i]' from 'res'.
                res -= roman[s[i]]
            else:
            # If not, add the value of 's[i]' to 'res'.
                res += roman[s[i]]

    # Return the final integer value 'res'.
        return res

        