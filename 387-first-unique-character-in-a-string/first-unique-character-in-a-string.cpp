class Solution {
public:
    int firstUniqChar(string s) {
       int c[26] {};  // Initialize an array 'c' to store the frequency of each character (initialized to zero).
int i = 0;  // Initialize a variable 'i' to zero.

// First loop: Count the frequency of each character in the string 's'.
for (; i < s.size(); c[s[i++] - 'a']++);

// Second loop: Find the index of the first non-repeating character.
for (i = 0; i < s.size() && c[s[i] - 'a'] != 1; i++);

// Return the result: If a non-repeating character is found, return its index; otherwise, return -1.
return i < s.size() ? i : -1;



    //     int n = s.length();  // Get the length of the string.
    //     vector<int> frequency(26, 0);  // Initialize a vector to store the frequency of each character.

    //     // Traverse the string and update the frequency vector.
    //     for (int i = 0; i < n; ++i) {
    //         frequency[s[i] - 'a']++;
    //     }

    //     // Traverse the string again to find the index of the first non-repeating character.
    //     for (int i = 0; i < n; ++i) {
    //         if (frequency[s[i] - 'a'] == 1) {
    //             return i;  // Return the index of the first non-repeating character.
    //         }
    //     }

    //     // If no non-repeating character is found, return -1.
    //     return -1;
    }
};