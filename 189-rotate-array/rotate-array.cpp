class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // The Brute Force:
        int n = nums.size();
        if(n == 0) return;
      //  k = k % n;
        //if (k > n)
        //   return;
        int temp[n]; // Temp array for rotating 
        for(int i = 0; i < n; i++){
            temp[(i+k)%n] = nums[i];
        }
        // coping back to the orignal array
        for(int j = 0; j< n; j++){
            nums[j] = temp[j];
        }
        // Optimal solution : 

        // k %= nums.size();
        // reverse(nums.begin(), nums.end());
        // reverse(nums.begin(), nums.begin() + k);
        // reverse(nums.begin() + k, nums.end());
    }
};