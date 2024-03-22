class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        /*
        To solve this question we will be using two variable one is cnt to store the count of consicutive ones and another one is max to store the maximum value of cnt,
        And in the end of loop we will have our answer as max.
        */
        int cnt = 0; 
        int max = 0;
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] == 1) cnt++;
            else 
            cnt = 0;
            if(cnt > max) max = cnt;
        }
        return max;
    }
};