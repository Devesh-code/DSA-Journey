class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0;

        int maxIndex = -1;
        int secondMaxIndex = -1;

        // Find the maximum and second-maximum elements
        for (int i = 0; i < n; ++i) {
            if (maxIndex == -1 || nums[i] > nums[maxIndex]) {
                secondMaxIndex = maxIndex;
                maxIndex = i;
            } else if (secondMaxIndex == -1 || nums[i] > nums[secondMaxIndex]) {
                secondMaxIndex = i;
            }
        }

        // Check the condition
        if (nums[maxIndex] >= 2 * nums[secondMaxIndex]) {
            return maxIndex;
        } else {
            return -1;
        }
    }
};