class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // // The easy way
        // int n = nums.size();
        // int maxi = INT_MIN;
        // for(int i = 0; i < n; i++){
        //     int product = 1;
        //     for(int j = i; j < n; j++){
        //         product = product * nums[j];

        //         maxi = max(product, maxi);
        //     }
        // }
        // return maxi; // with the TC = near about O(N2) and SC = O(1)

        // The optimal solution using observation

        long pre , suff = 1;
        long ans = INT_MIN;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(pre == 0) pre = 1;
            if(suff == 0) suff = 1;

            pre = pre * nums[i];
            suff = suff * nums[n - i - 1];
            ans = max(ans,max(pre,suff));
        }
        return ans; // with TC = O(N) & SC(1)
    }
};