class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
         // Sort the arrays in ascending order
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        // Pointers for iterating through the sorted arrays
        int a_pointer = 0;  // Pointer for 'g' array
        int b_pointer = 0;  // Pointer for 's' array
        
        // Iterate until either array is exhausted
        while (a_pointer < g.size() && b_pointer < s.size()) {
            // Check if the current child's greed is satisfied with the current cookie size
            if (g[a_pointer] <= s[b_pointer]) {
                // Move to the next child and the next cookie
                a_pointer++;
                b_pointer++;
            } else {
                // If the current cookie is too small for the current child, move to the next cookie
                b_pointer++;
            }
        }
        
        // Return the number of children whose greed is satisfied
        return a_pointer;
        
    }
};