class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        // Get the total length of the string
        int n = s.size();

        // Iterate from n/2 to 1, checking possible lengths of repeated substrings
        for (int i = n / 2; i >= 1; i--) {
            // Check if the current length 'i' divides the total length 'n'
            if (n % i == 0) {
                // Compare substrings to check for repetition
                // Check if the prefix of length (n - i) is equal to the suffix of length (i)
                if (s.substr(0, n - i) == s.substr(i)) {
                    // If true, it means the string can be formed by repeating a substring
                    return true;
                }
            }
        }

        // If no repeated substring is found, return false
        return false;
    }
};