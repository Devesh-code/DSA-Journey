
class Solution {
public:
    bool isPalindrome(string s) {
        // Call the helper function with start and end indices
        return isPalindromeHelper(s, 0, s.size() - 1);
    }

private:
    bool isPalindromeHelper(const string& s, int start, int end) {
        // Base case: when start meets or exceeds end, it's a palindrome
        if (start >= end) {
            return true;
        }

        // Skip non-alphanumeric characters from the beginning
        while (start < end && !isalnum(s[start])) {
            start++;
        }

        // Skip non-alphanumeric characters from the end
        while (start < end && !isalnum(s[end])) {
            end--;
        }

        // Check if characters at start and end indices (ignoring case) match
        if (tolower(s[start]) != tolower(s[end])) {
            return false;
        }

        // Recursively check the substring without the start and end characters
        return isPalindromeHelper(s, start + 1, end - 1);
    }
};
