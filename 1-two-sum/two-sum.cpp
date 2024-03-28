class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result = {};
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                int sum = 0;
                sum = nums[i] + nums[j];
                if( sum == target && i != j){
                    result.push_back(i);
                    result.push_back(j);
                }

            }
        }
        return result;
    }
};