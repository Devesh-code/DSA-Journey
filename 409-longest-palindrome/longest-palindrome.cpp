class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> char_count;  // Map to store the count of each character
        int length = 0;

        // Count the occurrences of each character
        for (char c : s) {
            char_count[c] = char_count[c] + 1;
        }

        // Iterate through the character counts
        for (const auto& entry : char_count) {
            // Add the maximum even count for each character
            length += (entry.second / 2) * 2;
        }

        // If there's at least one character with an odd count, add 1 to the length
        if (any_of(char_count.begin(), char_count.end(), [](const auto& entry) {
            return entry.second % 2 == 1;
        })) {
            length += 1;
        }

        return length;
    }
};