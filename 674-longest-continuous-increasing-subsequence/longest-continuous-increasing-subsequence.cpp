class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
       int n = nums.size();
        if (n == 0) {
            return 0;
        }

        int start = 0;
        int end = 0;
        int maxLength = 1;

        for (int i = 1; i < n; ++i) {
            if (nums[i] > nums[i - 1]) {
                end = i;
            } else {
                start = i;
            }
            int length = end - start + 1;
            maxLength = max(maxLength, length);
        }

        return maxLength; 
    }
};