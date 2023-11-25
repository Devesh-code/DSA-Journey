class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
         int n = nums.size();
        
        // Cyclic Sort
        for (int i = 0; i < n; ++i) {
            while (nums[i] != nums[nums[i] - 1]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
        
        // Identify duplicated and missing numbers
        for (int i = 0; i < n; ++i) {
            if (nums[i] != i + 1) {
                return {nums[i], i + 1};
            }
        }
        
        return {};  // Default return if no error is found (shouldn't reach here)
    }
};