class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        // Simply the question is asking for lower bound of the given vector.and there are two ways of doing this with time complexity of O(logn) and space complexity O(1).

        // For lower/upper bound we have stl function  
        int idx;
        idx = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        return idx; 

        // Another way of doing this by implementing the lower bound logic using binary search algo.

        // int low = 0;
        // int high = nums.size() - 1;
        // while (low <= high) {
        //     int mid = low + (high - low) / 2;
        //     if (nums[mid] == target) {
        //         return mid;  
        //         } else if (nums[mid] < target) {
        //             low = mid + 1;
        //             } else {
        //                 high = mid - 1;
        //                 }
        //             }
        //         return low; 
    }
};