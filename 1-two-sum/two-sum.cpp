class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // The Brute force by using two pointer approach 
        // vector<int>result = {};
        // int n = nums.size();
        // for(int i = 0; i < n; i++){
        //     for(int j = i; j < n; j++){
        //         int sum = 0; 
        //         sum = nums[i] + nums[j];
        //         if( sum == target && i != j){
        //             result.push_back(i);
        //             result.push_back(j);
        //         }

        //     }
        // }
        // return result;


        // The optimal way by using hashing with the help of hashmap
        int n = nums.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int moreNeeded = target - num;
            if (mpp.find(moreNeeded) != mpp.end()) {
                return {mpp[moreNeeded], i};
            }
            mpp[num] = i;
        }
        return { -1, -1};
    }
};