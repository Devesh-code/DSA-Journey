class Solution {
public:
    bool repeatedSubstringPattern(string s) {
         int len = s.length();

        // Iterate from len/2 to 1, checking possible lengths of repeated substrings
        for (int i = len / 2; i >= 1; i--) {
            // Check if the current length 'i' divides the total length 'len'
            if (len % i == 0) {
                // Calculate the number of repeats needed for the substring of length 'i'
                int num_repeats = len / i;

                // Extract the substring of length 'i'
                string substring = s.substr(0, i);

                // Build a new string by repeating the substring 'num_repeats' times
                string repeated_str;
                for (int j = 0; j < num_repeats; j++) {
                    repeated_str += substring;
                }

                // Check if the repeated string is equal to the original string 's'
                if (repeated_str == s) {
                    return true;
                }
            }
        }

        // If no repeated substring is found, return false
        return false;
    }
};