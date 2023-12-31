class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        # Create a set 'zipped' by combining characters from 's' and 't' pairwise.
        zipped = set(zip(s, t))
        
        # Check if the length of 'zipped' is equal to the length of unique characters in 's' and 't'.
        if len(zipped) == len(set(s)) == len(set(t)):
            return True  # Return True if the strings are isomorphic.
        else:
            return False  # Return False if they are not isomorphic.

#         mapST, mapTS = {}, {}  # Initialize two empty dictionaries to map characters from 's' to 't' and vice versa.

# # Iterate through corresponding characters in 's' and 't' using the zip function.
#         for c1, c2 in zip(s, t):
#     # Check if 'c1' is already mapped to a different character in 't' or if 'c2' is already mapped to a different character in 's'.
#             if (c1 in mapST and mapST[c1] != c2) or (c2 in mapTS and mapTS[c2] != c1):
#                 return False  # Return False if there is an inconsistency in the mappings.

#     # Map 'c1' from 's' to 'c2' in 't'.
#             mapST[c1] = c2

#     # Map 'c2' from 't' to 'c1' in 's'.
#             mapTS[c2] = c1

#         return True  # If all characters are consistently mapped in both directions, return True.


        