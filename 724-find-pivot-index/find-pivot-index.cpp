class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
    int leftSum = 0;

    for (int num : nums) {
        totalSum += num;  // Calculate the total sum of the array
    }

    for (int i = 0; i < nums.size(); ++i) {
        totalSum -= nums[i];  // Update total sum by subtracting the current element
        if (leftSum == totalSum) {
            return i;  // Return the pivot index if left sum equals total sum
        }
        leftSum += nums[i];  // Update left sum by adding the current element
    }

    return -1;  // If no pivot index is found, return -1
    }
};