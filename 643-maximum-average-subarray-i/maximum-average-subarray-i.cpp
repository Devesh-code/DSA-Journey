class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int n = nums.size();
        if (k > n || n < k) return 0;

        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        int begin = 0, mx = sum;

        for (int i = 0; i < n - k; i++) {
            sum = sum - nums[i] + nums[i + k]; // sliding window logic

            if (sum >= mx) {
                mx = sum;
                begin = i + 1;
            }
        }

        // Calculate and return the maximum average
        return static_cast<double>(mx) / k;
    }
};