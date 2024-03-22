class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // The Brute Force:
        for(int i = 0; i < nums.size(); i++){
          int nm = nums[i];
          int cnt = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[j] == nm){
                    cnt++;
                }
            }
        if(cnt == 1) return nm;
        }
        return -1;
    }
};