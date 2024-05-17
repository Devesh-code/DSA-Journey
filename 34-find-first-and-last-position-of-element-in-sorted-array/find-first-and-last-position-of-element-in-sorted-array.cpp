class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // The brute force: 
        // int first = -1;
        // int last = -1;
        // vector<int> ans;

        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] == target)
        //     {
        //         if(first == -1) first = i;
        //         last = i;
        //     }
        // }

        // ans.push_back(first);
        // ans.push_back(last);
        // return ans;



     // Optimal1 : using lower(which is nums[index]>=target) & upper(which is nums[index]>target) bound stl functions
        int n = nums.size();
        int first = -1;
        int last = -1;
        first = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        last = upper_bound(nums.begin(),nums.end(), target) - nums.begin();
        if (first == n || nums[first] != target) return {-1,-1};
        return{first,last - 1};



    //Optimal2:  The main binary search way 

        // int first = firstOccur(nums,nums.size(),target);
        // if (first == -1) return {-1, -1};
        // int last = lastOccur(nums,nums.size(),target);
        // return {first,last};

    }

    // int firstOccur(vector<int>& nums,int n, int target)
    // {
    //     int low = 0;
    //     int high = n -1;
    //     int first = -1;
    //     while (low <= high){
    //         int mid = (low + high)/2;
    //         if (nums[mid] == target){
    //             first = mid;
    //             high = mid - 1;
    //         }
    //         else if (nums[mid] < target) low = mid + 1;
    //         else high = mid - 1;
    //     }
    //     return first;
    // }

    // int lastOccur(vector<int> &nums, int n, int target)
    // {
    //     int low = 0, high = n - 1;
    //     int last = -1;
    //     while(low <= high)
    //     {
    //         int mid = (low + high)/2;
    //         if(nums[mid] == target)
    //         {
    //             last = mid;
    //             low = mid + 1;
    //         }
    //         else if (nums[mid] < target) low = mid + 1;
    //         else high = mid - 1;
    //     }
    //     return last;
    // }
};