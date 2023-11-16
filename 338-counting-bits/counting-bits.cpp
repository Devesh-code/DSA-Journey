class Solution {
public:
    vector<int> countBits(int n) {
        // Create a vector to store the count of set bits for each number from 0 to n
        // Initialize all counts to 0
        vector<int> result(n + 1, 0);
        
        // Loop from 1 to n
        for (int i = 1; i <= n; i++) {
            // Calculate the count of set bits for the current number 'i'
            // by taking the count of set bits for 'i / 2' and adding the least significant bit of 'i'
            result[i] = result[i >> 1] + (i & 1);
        }
        
        // Return the vector containing the count of set bits for each number from 0 to n
        return result;
    }
};
