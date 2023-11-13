class Solution:
    def readBinaryWatch(self, turnedOn: int) -> List[str]:
        res = []  # Initialize an empty list to store the output times.

# Loop through hours (0 to 11) and minutes (0 to 59).
        for h in range(12):
            for m in range(60):
                temp = bin(h) + bin(m)  # Convert the binary representation of hours and minutes to a binary string.
        
                if temp.count("1") == turnedOn:  # Check if there is exactly one '1' in the binary representation.
                    time ='%d:%02d'% (h, m)  # Create a tuple representing the time.
                    res.append(time)  # Add the time tuple to the output list.

# Return the list of times with exactly one '1' in their binary representation.
        return res

        