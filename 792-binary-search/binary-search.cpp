class Solution {
public:
    int bSearch(vector<int>& nums, int low, int high, int target){

        int mid = (low + high)/2;

        if(low > high) return -1;

        if(target == nums[mid]) return mid;
        else if(target > nums[mid]) return bSearch(nums,mid + 1,high,target);
        else return bSearch(nums,low,mid - 1, target);
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0; 
        int high = n - 1;
        return bSearch(nums,low, high, target); 
    }
};