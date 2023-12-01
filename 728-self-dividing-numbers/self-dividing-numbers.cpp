class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
         vector<int> ans; // Create a local vector to store the results
        
        for (int num = left; num <= right; num++) {
            if (num % 10 == 0) continue; // Skip numbers ending with 0
            
            int temp = num;
            int flag = 1; // Set flag to 1 initially

            while (temp > 0) {
                int digit = temp % 10;
                if (digit == 0 || num % digit != 0) {
                    flag = 0; // Reset the flag to 0 if the condition is not met
                    break;
                }
                temp /= 10;
            }

            if (flag) {
                ans.push_back(num); // If flag is 1, all conditions are met, so add num to the result vector
            }
        }

        return ans;
    }
};