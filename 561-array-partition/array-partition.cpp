class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
         // Sort the array in ascending order
    sort(nums.begin(), nums.end());

    // Sum the minimum of each pair formed by adjacent elements
    int result = 0;
    for (int i = 0; i < nums.size(); i += 2) {
        result += nums[i];
    }

    return result;
    }
};