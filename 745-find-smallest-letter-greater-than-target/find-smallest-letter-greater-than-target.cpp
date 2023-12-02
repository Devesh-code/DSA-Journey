class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
         int left = 0;
        int right = letters.size();

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (letters[mid] <= target) {
                // If the current character is less than or equal to the target,
                // move to the right half of the array
                left = mid + 1;
            } else {
                // If the current character is greater than the target,
                // move to the left half of the array
                right = mid;
            }
        }

        // If left reaches the end, return the first character in the array
        // Otherwise, return the character at the left index
        return (left == letters.size()) ? letters[0] : letters[left];
    }

};