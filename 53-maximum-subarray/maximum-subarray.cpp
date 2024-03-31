class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // The Brute force: Trying out all possible subarrays
        // int maxi = INT_MIN; // maximum sum
        // int n = nums.size();
        // for (int i = 0; i < n; i++) {
        //     for (int j = i; j < n; j++) {
        //         // subarray = arr[i.....j]
        //         int sum = 0;

        //         //add all the elements of subarray:
        //         for (int k = i; k <= j; k++) {
        //             sum += nums[k];
        //         }

        //         maxi = max(maxi, sum);
        //     }
        // }
        // return maxi; 

        // // The Batter way: with few changes in brute

        // int maxi = INT_MIN; // maximum sum
        // int n = nums.size();
        // for (int i = 0; i < n; i++) {
        //     int sum = 0;
        //     for (int j = i; j < n; j++) {
        //         sum += nums[j];
        //         maxi = max(maxi, sum);
        //     }
        // }
        // return maxi;


        // The Optimal way:
        int maxi = INT_MIN;
        int sum = 0;
        for(int i = 0; i <nums.size(); i++){
            sum += nums[i];
            if(sum > maxi) maxi = sum;
            if(sum < 0) sum = 0;
        }
        return maxi;
    }
};

