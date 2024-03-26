class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // The Brute Force(Simply recreating every possible subarray)
        // int len = 0;
        // int flag = 0;
        // int n = nums.size();
        // for(int i = 0; i < n; i++){
        //     int s = 0;
        //     for(int j = i; j < n; j++){
        //         s += nums[j];
        //         if(s == k){
        //             flag += 1;
        //         }
        //     }
        // }
        // return flag;

        // The Better (By using Hashing )
        int i=0,j=0,flag=0,n=size(nums),sum=0;
        unordered_map<int,int>mp;
        while(j<n){
           sum+=nums[j];
           if(sum==k)flag++;
           if(mp.find(sum-k)!=mp.end())flag+=mp[sum-k];
           mp[sum]++;
           j++;
       } 
       return flag;

        // The Optimal way (Using Two pointer,sliding window & greedy approach) not suted for this problem

        // int left = 0, right = 0; 
        // int sum = nums[0];
        // int n = nums.size();
        // int flag = 0;
        // while(right < n){
        //     while(left <= right && sum > k){
        //         sum -= nums[left];
        //         left++;
        //     }
        //     if(sum == k) flag += 1;
        //     right++;
        //     if(right < n){
        //         sum += nums[right];
        //     }

        // }
        // return flag;
    }
};