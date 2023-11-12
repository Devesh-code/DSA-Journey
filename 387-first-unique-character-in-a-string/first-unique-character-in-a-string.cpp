class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();  // Get the length of the string.
        vector<int> frequency(26, 0);  // Initialize a vector to store the frequency of each character.

        // Traverse the string and update the frequency vector.
        for (int i = 0; i < n; ++i) {
            frequency[s[i] - 'a']++;
        }

        // Traverse the string again to find the index of the first non-repeating character.
        for (int i = 0; i < n; ++i) {
            if (frequency[s[i] - 'a'] == 1) {
                return i;  // Return the index of the first non-repeating character.
            }
        }

        // If no non-repeating character is found, return -1.
        return -1;
    }
};