class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // The simple Brute force by counting occurences of element;
        //int n = nums.size();
        // int cnt = 0;
        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < n; j++){
        //         if(nums[i] == nums[j]) cnt++;

        //         if(cnt > (n/2)) return nums[i];
        //     }
        // }
        // return -1;

        // The Better way by using hashing;
       
        // map<int, int>mpp;
        // for(int i = 0; i < n; i++)
        // {
        //     mpp[nums[i]]++;
        // }        
        // for(auto it: mpp){
        //     if(it.second > n/2) return it.first;
        // }
        // return -1;

        //Optimal solution: 
        int n = nums.size();
        int cnt = 0; 
        int el; 

        //applying the algorithm: Moose voting algo
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