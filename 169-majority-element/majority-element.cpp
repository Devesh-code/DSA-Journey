class Solution {
public:
    int majorityElement(vector<int>& nums) {
         //size of the given array:
        int n = nums.size();
        int cnt = 0; // count
        int el; // Element

        //applying the algorithm:
        for (int i = 0; i < n; i++) {
            if (cnt == 0) {
                cnt = 1;
                el = nums[i];
            }
            else if (el == nums[i]) cnt++;
            else cnt--;
        }
        return el;
    }
};