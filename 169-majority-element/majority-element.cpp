class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int res = 0; // Initialize the result to 0.
        int count = 0; // Initialize the count to 0.

        // Iterate through the elements in the 'nums' vector.
        for (int n : nums) {
            if (count == 0) {
                // If the count reaches 0, update the result to the current element 'n'.
                res = n;
            }
            // Increment or decrement the count based on whether the current element matches the result.
            count += (n == res ? 1 : -1);
        }

        // Return the majority element.
        return res;
    }
};