class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int k = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
/*
Here's how it works:

If the input vector nums is empty, the function returns 0.

The variable k is used to keep track of the next position to insert a unique element.

The loop iterates through the vector nums starting from the second element.

If the current element nums[i] is not equal to the previous element nums[i - 1], it means it's a unique element, so it's copied to the k-th position in the vector nums.

After copying the unique element, k is incremented to point to the next available position.

Finally, the function returns k, which represents the length of the new array without duplicates.

*/