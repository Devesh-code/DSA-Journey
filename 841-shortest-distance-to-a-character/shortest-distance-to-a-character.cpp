class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.length();
        vector<int> answer(n, n); // Initialize with a large value.

        // Iterate from left to right.
        int prev = -1;
        for (int i = 0; i < n; ++i) {
            if (s[i] == c) {
                prev = i;
            }
            if (prev != -1) {
                answer[i] = min(answer[i], abs(i - prev));
            }
        }

        // Iterate from right to left.
        prev = -1;
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == c) {
                prev = i;
            }
            if (prev != -1) {
                answer[i] = min(answer[i], abs(i - prev));
            }
        }

        return answer; 
    }
};

/*

To solve this problem, you can iterate through the string from left to right and then from right to left. For each position, find the distance to the closest occurrence of the target character in both directions and choose the minimum of the two distances.

Here's the step-by-step approach:

Initialize an array answer of the same length as the input string s to store the distances.

Iterate from left to right:

Initialize a variable prev to -1, representing the last occurrence of the target character.
For each character in s, update the distance to the closest occurrence of c using the formula abs(i - prev).
Update prev if the current character is equal to c.
Iterate from right to left:

Initialize a variable prev to -1.
For each character in s (from right to left), update the distance to the closest occurrence of c using the formula abs(i - prev) and choose the minimum with the current value in answer[i].
Update prev if the current character is equal to c.
The answer array now contains the distances to the closest occurrences of the target character in both directions.
*/