class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // The Brute Force 
        int len = 0;
        int flag = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int s = 0;
            for(int j = i; j < n; j++){
                s += nums[j];
                if(s == k){
                    flag += 1;
                }
            }
        }
        return flag;
    }
};